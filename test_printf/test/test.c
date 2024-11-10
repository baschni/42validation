#include "loop_format_array.h"
#include "ft_printf.h"

#include <stddef.h>

int	main(void)
{

	char *format_i[] = {"", "a", "%i", "%014i", "%%%i", "%%%i%%", "", NULL};
	char *format_d[] = {"", "a", "%d", "%014d", "%%%d", "%%%d%%", "", NULL};
	char *format_u[] = {"", "a", "%u", "%014u", "%%%u","%u%%", "", NULL};
	char *format_x[] = {"", "a",  "%x", "%014x", "%x%%", "%%%x",NULL};
	char *format_X[] = {"", "a",  "%X", "%014X", "%X%%", "%%%X",NULL};
	char *format_p[] = { "", "a", "%p", "%018p", "%%%p", "%p%%", NULL };
	char *format_c[] = { "", "a", "%c", "%.14c", "%%%c", "%c%%", NULL};
	char *format_s[] = { "", "a", "%s", "%014s", "%%%s", "%s%%", NULL};

	int t;
	int	i;
	unsigned int j;
	unsigned char cc;
	char c;
	char *s;
	char *output_folder = "tmp";
	
	i = 0;
	loop_format_array(format_i, "i_0", &i, output_folder);
	i = -21235;
	loop_format_array(format_i, "i_s", &i, output_folder);
	i = 21235;
	loop_format_array(format_i, "i_u", &i, output_folder);

	i = 0;
	loop_format_array(format_d, "d_0", &i, output_folder);
	i = -21235;
	loop_format_array(format_d, "d_s", &i, output_folder);
	i = 21235;
	loop_format_array(format_d, "d_u", &i, output_folder);
	
	j = 0;
	loop_format_array(format_u, "u_0", &j, output_folder);
	j = 21235;
	loop_format_array(format_u, "u_u", &j, output_folder);
	j = -21235;
	loop_format_array(format_u, "u_s", &j, output_folder);

		
	c = 0;
	loop_format_array(format_c, "c_0", &c, output_folder);
	c = -13;
	loop_format_array(format_c, "c_s", &c, output_folder);
	c = 'a';
	loop_format_array(format_c, "c_u", &c, output_folder);

	cc = 0;
	loop_format_array(format_c, "cu_0", &cc, output_folder);
	cc = '+';
	loop_format_array(format_c, "cu_u", &cc, output_folder);

		
	s = NULL;
	loop_format_array(format_s, "s_NULL", s, output_folder);
	s = "";
	loop_format_array(format_s, "s_empty", s, output_folder);
	s = "sdf qwer";
	loop_format_array(format_s, "s_normal", s, output_folder);

	int *ptr;
	ptr = NULL;
	loop_format_array(format_p, "p_NULL", ptr, output_folder);
	ptr = &i;
	loop_format_array(format_p, "p_i", ptr, output_folder);

	
	j = 0;
	loop_format_array(format_x, "x_0", &j, output_folder);
	j = 21235;
	loop_format_array(format_x, "x_u", &j, output_folder);
	j = -21235;
	loop_format_array(format_x, "x_s", &j, output_folder);

	
	j = 0;
	loop_format_array(format_X, "X_0", &j, output_folder);
	j = 21235;
	loop_format_array(format_X, "X_u", &j, output_folder);
	j = -21235;
	loop_format_array(format_X, "X_s", &j, output_folder);

	ft_printf("%s %s %i %p\n", "This", "worked", 1, &j);
}

// todo: test with multiple arguments
