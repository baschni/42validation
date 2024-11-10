#include <stdlib.h>
#include "pairs.h"
#include "string.h"

t_pair *ipair(int a, int b)
{
	t_pair *p;
	p = malloc(sizeof(t_pair));
	p->i.a = a;
	p->i.b = b;
	return (p);
}


t_pair *cpair(char a, char b)
{
	t_pair *p;
	p = malloc(sizeof(t_pair));
	p->chr.a = a;
	p->chr.b = b;
	return (p);
}

t_pair *spair(char *a, char *b)
{
	t_pair *p;
	p = malloc(sizeof(t_pair));
	(p->str).a = strdup(a);
	(p->str).b = strdup(b);
	return (p);
}