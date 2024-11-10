#ifndef PAIRS_H
# define PAIRS_H

typedef struct s_int_pair
{
	int a;
	int b;
}	t_int_pair;

typedef struct s_char_pair
{
	char a;
	char b;
}	t_char_pair;


typedef struct s_str_pair
{
	char *a;
	char *b;
}	t_str_pair;

typedef union u_pair
{
	t_int_pair i;
	t_char_pair chr;
	t_str_pair str;
} t_pair;

t_pair *cpair(char a, char b);
t_pair *ipair(int a, int b);
t_pair *spair(char *a, char *b);

#endif
