#include <glib.h>

#include "putchar.h"
#include "putstr.h"
#include "putendl.h"
#include "putnbr.h"
#include "char_funcs.h"
#include "str_funcs.h"
#include "str_funcs2.h"
#include "itoa_atoi.h"
#include "mem_funcs.h"
#include "lst_funcs.h"




int main(int argc, char **argv)
{
	g_test_init (&argc, &argv, NULL);


	g_test_add_func("/char_funcs/isalpha", isalpha_test);
	g_test_add_func("/char_funcs/isdigit", isdigit_test);
	g_test_add_func("/char_funcs/isalnum", isalnum_test);
	g_test_add_func("/char_funcs/isascii", isascii_test);
	g_test_add_func("/char_funcs/isprint", isprint_test);
	g_test_add_func("/char_funcs/tolower", tolower_test);
	g_test_add_func("/char_funcs/toupper", toupper_test);

	g_test_add_func("/int_funcs/atoi", atoi_test);
	g_test_add_func("/int_funcs/itoa", itoa_test);


	g_test_add_func("/str_funcs/strlen", strlen_test);
	g_test_add_func("/str_funcs/substr", substr_test);
	g_test_add_func("/str_funcs/strchr", strchr_test);
	g_test_add_func("/str_funcs/strrchr", strrchr_test);
	g_test_add_func("/str_funcs/strncmp", strncmp_test);

	g_test_add_func("/put_fd/putchar/test1_stdout", putchar_test1);
	g_test_add_func("/put_fd/putchar/test2_stderr", putchar_test2);
	g_test_add_func("/put_fd/putchar/test3_file", putchar_test3);
	g_test_add_func("/put_fd/putchar/test4_0char", putchar_test4);
	g_test_add_func("/put_fd/putchar/test5_overflow_char", putchar_test5);

	g_test_add_func("/put_fd/putstr/test1_stdout", putstr_test1);
	g_test_add_func("/put_fd/putstr/test2_stderr", putstr_test2);
	g_test_add_func("/put_fd/putstr/test3_file", putstr_test3);
	g_test_add_func("/put_fd/putstr/test4_empty_str", putstr_test4);
	// g_test_add_func("/put_fd/putstr/test5_null_str", putstr_test5);

	g_test_add_func("/put_fd/putendl/test1_stdout", putendl_test1);
	g_test_add_func("/put_fd/putendl/test2_stderr", putendl_test2);
	g_test_add_func("/put_fd/putendl/test3_file", putendl_test3);
	g_test_add_func("/put_fd/putendl/test4_empty_str", putendl_test4);
	g_test_add_func("/put_fd/putendl/test5_null_str", putendl_test5);

	g_test_add_func("/put_fd/putnbr/test1_stdout", putnbr_test1);
	g_test_add_func("/put_fd/putnbr/test2_stderr", putnbr_test2);
	g_test_add_func("/put_fd/putnbr/test3_file", putnbr_test3);
	g_test_add_func("/put_fd/putnbr/test4_0", putnbr_test4);
	g_test_add_func("/put_fd/putnbr/test5_INT_MIN", putnbr_test5);
	g_test_add_func("/put_fd/putnbr/test6_INT_MAX", putnbr_test6);


	g_test_add_func("/mem_funcs/memchr_test", memchr_test);
	g_test_add_func("/mem_funcs/memcmp_test", memcmp_test);
	g_test_add_func("/mem_funcs/bzero_test", bzero_test);
	g_test_add_func("/mem_funcs/memset_test", memset_test);


	g_test_add_func("/str_funcs2/split", split_test);
	g_test_add_func("/str_funcs2/strtrim", strtrim_test);

	g_test_add_func("/lst_funcs/lstnew", lstnew_test);
	g_test_add_func("/lst_funcs/lstadd_back", lstadd_back_test);
	g_test_add_func("/lst_funcs/lstsize", lstsize_test);



	return (g_test_run());
}
