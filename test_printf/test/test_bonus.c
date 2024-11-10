#include "loop_format_array.h"
#include <stddef.h>

int	main(void)
{

	char *format_i[] = {"", " ", "%i", "%014i", "% 14i", "%14.6i", "%6.14i", "%#5i", "% 14.6i", "%+3.6i", "%+ 14.6i",  \
	"%014.6i", "%014.1i", "%014.0i", "%014.i", "%-14.6i", "%0-14.6i", "%14.i", "%14.-5i", "%14.5i", "%6.0i", "%%%6.0i", "", NULL};
	char *format_d[] = {"%d", "%014d",  "% 14d", "%14.6d", "%6.14d", "%#5d", "% 14.6d", "%+3.6d", "%+ 14.6d",  \
	"%014.6d", "%-14.6d", "%0-14.6d", "%14.d", "%14.-5d", "%14.5d", "%6.0d","% 14.6d%%", "", NULL};
	char *format_u[] = {"%u", "%014u",  "% 14u","%14.6u", "%6.14u", "%#5u", "% 5.6u", "%+5.5u", "%+ 14.6u",  \
	"%014.0u", "%-14.6u", "%0-14.6u", "%14.u", "%14.-5u", "%14.5u","%14.0u", "%%%#5u", "", NULL};
	char *format_x[] = { "%x", "%014x", "% 14x", "%14.6x", "%6.14x", "%#5x", "%#14.10x", "%#10.14x", "% 14.6x", "%+x", "%+ 14.6x", \
	"%014.6x", "%-14.6x", "%0-14.6x", "%14.x", "%14.-5x", "%14.5x","%6.0x", "%%%6.0x",NULL};
	char *format_X[] = { "%X", "%014X",  "% 14X", "%14.6X", "%6.14X", "%#5X",  "%#14.10X", "%#10.14X", "% 14.6X", "%+X", "%+ 14.6X", \
	"%014.6X", "%-14.6X", "%0-14.6X", "%14.X", "%14.-5X", "%14.5X","%6.0X", "%%%6.0X",NULL};
	char *format_p[] = { "%p", "%018p",  "% 18p", "%14.6p", "%6.14p","%#5p", "% 14.6p", "%+3.6p", "%+ 14.6p", \
	 "%014.6p", "%-14.6p", "%0-14.6p","%14.p", "%14.-5p", "%14.5p", "%14.3p","%14.1p", "%14.0p", "%14.5p", "%14.p", "%6.0p", NULL };
	char *format_c[] = { "%c", "%014c",  "% 14c", "%.14c","%#5c", "% 14.6c", "%6.14c", "% c", "%+ 14.6c", \
	"%014.6c", "%-14.6c", "%0-14.6c", "%14.c", "%14.-5c", "%14.5c","%14.7c","%6.0c","%.14c%%", NULL};
	char *format_s[] = { "%s", "%014s",  "% 14s", "%.14s","%#5s", "% 14.6s", "%6.14s", "% s", "%+ 14.6s", \
	"%014.6s", "%-14.6s", "%0-14.6s", "%14.s","%14.-5s", "%14.5s", "%14.7s", "%6.0s", "%%%6.0s",NULL};

	int t;
	int	i;
	unsigned int j;
	unsigned char cc;
	char c;
	char *s;
	char *output_folder = "tmp_bonus";
	
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

	//ft_printf("%s %s %i %p\n", "This", "worked", 1, &j);
}

// todo: test with multiple arguments
