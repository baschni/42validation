#include <stdio.h>
#include <unistd.h>


int	main(void)
{
	//FILE *stdout;
	
	freopen("test.txt", "w", stdout);
	write (STDOUT_FILENO, "1\n", 2);
	freopen("test.txt", "r", NULL);
	//stdout = fdopen(STDOUT_FILENO, "w");
	write (STDOUT_FILENO, "1\n", 2);
}