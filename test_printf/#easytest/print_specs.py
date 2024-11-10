# bsdf.py

import lldb

def __lldb_init_module(debugger, internal_dict):
    cmd_prefix = 'type summary add -F ' + __name__
    debugger.HandleCommand(cmd_prefix + '.show_t_spec_list t_spec_list')
    debugger.HandleCommand(cmd_prefix + '.show_t_spec t_spec')

def null(ptr):
    """Gets whether the SBValue is a NULL pointer."""
    return not ptr.IsValid() or ptr.GetValueAsUnsigned() == 0


def show_t_spec_list(c_list, internal_dict):
	out = ""
	for i, elem_next in enumerate(c_list.linked_list_iter("next")):
		out += "========================\n"
		out += "Spec " + str(i) + ":\n"
		out += "========================\n"
		out += show_t_spec(elem_next.GetChildMemberWithName("content"), internal_dict)
	return out

def show_t_spec(c_spec, internal_dict):
	out = ""
	if null(c_spec):
		return out
	elems = ["str", "conv", "padding", "sign", "alternate", "width", "precision", "precision_padding"]
	max_len = max(len(elem) for elem in elems)
	for elem in elems:
		try:
			if elem == "str":
				# char = lldb.target.GetBasicType(lldb.eBasicTypeChar)
				stra = c_spec.GetChildMemberWithName(elem)
				# addr = c_spec.GetChildMemberWithName(elem).GetValue()
				# val  = lldb.target.CreateValueFromAddress("name", addr, char).AddressOf()
				out += str(stra) + "\n"
				#out += "str" + "\t\t\t" + str(lldb.frame.EvaluateExpression("(const char *) " + str()).GetValue())
			else:
				stra = str(c_spec.GetChildMemberWithName(elem).GetValue().strip())
				out += elem + " " * (max_len - len(elem)) +  "\t" + " " * (4 - len(stra)) + stra + "\n"
		except BaseException:
			pass
	return (out)
          
	# colon2 = False          # Print "::" scope separator?
	# rv = ""                 # "string-ified" value to return
	# head = c_sname.GetChildMemberWithName('head')
	# for slist_node_ptr in head.linked_list_iter('next'):
	# 	target = lldb.debugger.GetSelectedTarget()
	# c_scope_data_ptr_t = target.FindFirstType('c_scope_data_t').GetPointerType()
	# head = c_sname.GetChildMemberWithName('head')
	# for slist_node_ptr in head.linked_list_iter('next'):
	# 	void_data_ptr = slist_node_ptr.GetChildMemberWithName('data')
	# 	if not null(void_data_ptr):
	# 		c_scope_data_ptr = void_data_ptr.Cast(c_scope_data_ptr_t)
	# 		name_ptr = c_scope_data_ptr.GetChildMemberWithName('name')
	# 		if not null(name_ptr):
	# 			if colon2:	
	# 				rv += '::'
	# 			else:
	# 				colon2 = True
	# 			rv += name_ptr.GetSummary().strip('"')

	# return '"' + rv + '"'

# def __str__(self):
# 	s = ''
# 	temp = self.head
# 	while temp:
# 		s += str(temp.data) + " "
# 		temp = temp.next
# 	return s[:-1]

# def bsdf(self):
# 	s = ''
# 	temp = self
# 	while temp:
# 		s += str(temp.data) + " "
# 		temp = temp.next
# 	return s[:-1]