#include <glib.h>
#include "libft.h"

void isalpha_test(void)
{
	g_assert(ft_isalpha('A') == 1);
	g_assert(ft_isalpha('X') == 1);
	g_assert(ft_isalpha('B') == 1);
	g_assert(ft_isalpha('T') == 1);
	g_assert(ft_isalpha('U') == 1);
	g_assert(ft_isalpha('Z') == 1);

	g_assert(ft_isalpha('a') == 1);
	g_assert(ft_isalpha('x') == 1);
	g_assert(ft_isalpha('b') == 1);
	g_assert(ft_isalpha('t') == 1);
	g_assert(ft_isalpha('u') == 1);
	g_assert(ft_isalpha('z') == 1);

	g_assert(ft_isalpha('0') == 0);
	g_assert(ft_isalpha('2') == 0);
	g_assert(ft_isalpha('4') == 0);
	g_assert(ft_isalpha('7') == 0);
	g_assert(ft_isalpha('9') == 0);

	g_assert(ft_isalpha('+') == 0);
	g_assert(ft_isalpha('=') == 0);
	g_assert(ft_isalpha('/') == 0);
	g_assert(ft_isalpha('\\') ==  0);
	g_assert(ft_isalpha('-') == 0);


	g_assert(ft_isalpha('@') == 0);
	g_assert(ft_isalpha('`') == 0);
	g_assert(ft_isalpha('[') == 0);
	g_assert(ft_isalpha('{') == 0);


	g_assert(ft_isalpha(0) == 0);
	g_assert(ft_isalpha(127) == 0);
	g_assert(ft_isalpha(-128) == 0);
}

void	isdigit_test(void)
{
	g_assert(ft_isdigit('A') == 0);
	g_assert(ft_isdigit('X') == 0);
	g_assert(ft_isdigit('B') == 0);
	g_assert(ft_isdigit('T') == 0);
	g_assert(ft_isdigit('U') == 0);
	g_assert(ft_isdigit('Z') == 0);

	g_assert(ft_isdigit('a') == 0);
	g_assert(ft_isdigit('x') == 0);
	g_assert(ft_isdigit('b') == 0);
	g_assert(ft_isdigit('t') == 0);
	g_assert(ft_isdigit('u') == 0);
	g_assert(ft_isdigit('z') == 0);

	g_assert(ft_isdigit('0') == 1);
	g_assert(ft_isdigit('1') == 1);
	g_assert(ft_isdigit('2') == 1);
	g_assert(ft_isdigit('3') == 1);
	g_assert(ft_isdigit('4') == 1);
	g_assert(ft_isdigit('5') == 1);
	g_assert(ft_isdigit('6') == 1);
	g_assert(ft_isdigit('7') == 1);
	g_assert(ft_isdigit('8') == 1);
	g_assert(ft_isdigit('9') == 1);

	g_assert(ft_isdigit('+') == 0);
	g_assert(ft_isdigit('=') == 0);
	g_assert(ft_isdigit('/') == 0);
	g_assert(ft_isdigit('\\') == 0);
	g_assert(ft_isdigit('-') == 0);


	g_assert(ft_isdigit('@') == 0);
	g_assert(ft_isdigit('`') == 0);
	g_assert(ft_isdigit('[') == 0);
	g_assert(ft_isdigit('{') == 0);


	g_assert(ft_isdigit(0) == 0);
	g_assert(ft_isdigit(127) == 0);
	g_assert(ft_isdigit(-128) == 0);
}

void	isalnum_test(void)
{
	g_assert(ft_isalnum('A') == 1);
	g_assert(ft_isalnum('X') == 1);
	g_assert(ft_isalnum('B') == 1);
	g_assert(ft_isalnum('T') == 1);
	g_assert(ft_isalnum('U') == 1);
	g_assert(ft_isalnum('Z') == 1);

	g_assert(ft_isalnum('a') == 1);
	g_assert(ft_isalnum('x') == 1);
	g_assert(ft_isalnum('b') == 1);
	g_assert(ft_isalnum('t') == 1);
	g_assert(ft_isalnum('u') == 1);
	g_assert(ft_isalnum('z') == 1);

	g_assert(ft_isalnum('0') == 1);
	g_assert(ft_isalnum('1') == 1);
	g_assert(ft_isalnum('2') == 1);
	g_assert(ft_isalnum('3') == 1);
	g_assert(ft_isalnum('4') == 1);
	g_assert(ft_isalnum('5') == 1);
	g_assert(ft_isalnum('6') == 1);
	g_assert(ft_isalnum('7') == 1);
	g_assert(ft_isalnum('8') == 1);
	g_assert(ft_isalnum('9') == 1);

	g_assert(ft_isalnum('+') == 0);
	g_assert(ft_isalnum('=') == 0);
	g_assert(ft_isalnum('/') == 0);
	g_assert(ft_isalnum('\\') == 0);
	g_assert(ft_isalnum('-') == 0);


	g_assert(ft_isalnum('@') == 0);
	g_assert(ft_isalnum('`') == 0);
	g_assert(ft_isalnum('[') == 0);
	g_assert(ft_isalnum('{') == 0);


	g_assert(ft_isalnum(0) == 0);
	g_assert(ft_isalnum(127) == 0);
	g_assert(ft_isalnum(-128) == 0);
}


void	isprint_test(void)
{
	g_assert(ft_isprint('A') == 1);
	g_assert(ft_isprint('X') == 1);
	g_assert(ft_isprint('B') == 1);
	g_assert(ft_isprint('T') == 1);
	g_assert(ft_isprint('U') == 1);
	g_assert(ft_isprint('Z') == 1);

	g_assert(ft_isprint('a') == 1);
	g_assert(ft_isprint('x') == 1);
	g_assert(ft_isprint('b') == 1);
	g_assert(ft_isprint('t') == 1);
	g_assert(ft_isprint('u') == 1);
	g_assert(ft_isprint('z') == 1);

	
	g_assert(ft_isprint('0') == 1);
	g_assert(ft_isprint('1') == 1);
	g_assert(ft_isprint('2') == 1);
	g_assert(ft_isprint('3') == 1);
	g_assert(ft_isprint('4') == 1);
	g_assert(ft_isprint('5') == 1);
	g_assert(ft_isprint('6') == 1);
	g_assert(ft_isprint('7') == 1);
	g_assert(ft_isprint('8') == 1);
	g_assert(ft_isprint('9') == 1);

	g_assert(ft_isprint('+') == 1);
	g_assert(ft_isprint('=') == 1);
	g_assert(ft_isprint('/') == 1);
	g_assert(ft_isprint('\\') ==  1);
	g_assert(ft_isprint('-') == 1);


	g_assert(ft_isprint('@') == 1);
	g_assert(ft_isprint('`') == 1);
	g_assert(ft_isprint('[') == 1);
	g_assert(ft_isprint('{') == 1);


	g_assert(ft_isprint(0) == 0);
	g_assert(ft_isprint(31) == 0);
	g_assert(ft_isprint(' ') == 1);
	g_assert(ft_isprint(32) == 1);
	g_assert(ft_isprint(126) == 1);
	g_assert(ft_isprint(127) == 0);
	g_assert(ft_isprint(127) == 0);
	g_assert(ft_isprint(-128) == 0);
}

void	isascii_test(void)
{
	g_assert(ft_isprint('A') == 1);
	g_assert(ft_isprint('X') == 1);
	g_assert(ft_isprint('B') == 1);
	g_assert(ft_isprint('T') == 1);
	g_assert(ft_isprint('U') == 1);
	g_assert(ft_isprint('Z') == 1);

	g_assert(ft_isprint('a') == 1);
	g_assert(ft_isprint('x') == 1);
	g_assert(ft_isprint('b') == 1);
	g_assert(ft_isprint('t') == 1);
	g_assert(ft_isprint('u') == 1);
	g_assert(ft_isprint('z') == 1);

	
	g_assert(ft_isascii('0') == 1);
	g_assert(ft_isascii('1') == 1);
	g_assert(ft_isascii('2') == 1);
	g_assert(ft_isascii('3') == 1);
	g_assert(ft_isascii('4') == 1);
	g_assert(ft_isascii('5') == 1);
	g_assert(ft_isascii('6') == 1);
	g_assert(ft_isascii('7') == 1);
	g_assert(ft_isascii('8') == 1);
	g_assert(ft_isascii('9') == 1);

	g_assert(ft_isascii('+') == 1);
	g_assert(ft_isascii('=') == 1);
	g_assert(ft_isascii('/') == 1);
	g_assert(ft_isascii('\\') ==  1);
	g_assert(ft_isascii('-') == 1);


	g_assert(ft_isascii('@') == 1);
	g_assert(ft_isascii('`') == 1);
	g_assert(ft_isascii('[') == 1);
	g_assert(ft_isascii('{') == 1);

	g_assert(ft_isascii(-1) == 0);
	g_assert(ft_isascii(0) == 1);
	g_assert(ft_isascii(127) == 1);
	g_assert(ft_isascii(128) == 0);
	g_assert(ft_isascii(200) == 0);

}

void tolower_test(void)
{
	g_assert(ft_tolower('A') == 'a');
	g_assert(ft_tolower('X') == 'x');
	g_assert(ft_tolower('B') == 'b');
	g_assert(ft_tolower('T') == 't');
	g_assert(ft_tolower('U') == 'u');
	g_assert(ft_tolower('Z') == 'z');

	g_assert(ft_tolower('a') == 'a');
	g_assert(ft_tolower('x') == 'x');
	g_assert(ft_tolower('b') == 'b');
	g_assert(ft_tolower('t') == 't');
	g_assert(ft_tolower('u') == 'u');
	g_assert(ft_tolower('z') == 'z');

	g_assert(ft_tolower('+') == '+');
	g_assert(ft_tolower('=') == '=');
	g_assert(ft_tolower('/') == '/');
	g_assert(ft_tolower('\\') ==  '\\');
	g_assert(ft_tolower('-') == '-');


	g_assert(ft_tolower('@') == '@');
	g_assert(ft_tolower('`') == '`');
	g_assert(ft_tolower('[') == '[');
	g_assert(ft_tolower('{') == '{');


	g_assert(ft_tolower(0) == 0);
}

void toupper_test(void)
{
	g_assert(ft_toupper('a') == 'A');
	g_assert(ft_toupper('x') == 'X');
	g_assert(ft_toupper('b') == 'B');
	g_assert(ft_toupper('t') == 'T');
	g_assert(ft_toupper('u') == 'U');
	g_assert(ft_toupper('z') == 'Z');

	g_assert(ft_toupper('A') == 'A');
	g_assert(ft_toupper('X') == 'X');
	g_assert(ft_toupper('B') == 'B');
	g_assert(ft_toupper('T') == 'T');
	g_assert(ft_toupper('U') == 'U');
	g_assert(ft_toupper('Z') == 'Z');

	g_assert(ft_toupper('+') == '+');
	g_assert(ft_toupper('=') == '=');
	g_assert(ft_toupper('/') == '/');
	g_assert(ft_toupper('\\') ==  '\\');
	g_assert(ft_toupper('-') == '-');


	g_assert(ft_toupper('@') == '@');
	g_assert(ft_toupper('`') == '`');
	g_assert(ft_toupper('[') == '[');
	g_assert(ft_toupper('{') == '{');


	g_assert(ft_toupper(0) == 0);
}