
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *char_to_str(const char c)
{
	char *s;
	s = malloc(2);
	s[0] = c;
	s[1] = 0;
	return (s);
}

char* concat(const char *s1, const char *s2)
{
    const size_t len1 = strlen(s1);
    const size_t len2 = strlen(s2);
    char *result = malloc(len1 + len2 + 1); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    memcpy(result, s1, len1);
    memcpy(result + len1, s2, len2 + 1); // +1 to copy the null-terminator
    return result;
}

char *read_file_to_str(char *filename)
	{

	char * buffer = 0;
	long length;
	FILE * f = fopen (filename, "rb");

	if (f)
	{
		fseek (f, 0, SEEK_END);
		length = ftell (f);
		fseek (f, 0, SEEK_SET);
		buffer = malloc (length + 1);
		if (buffer)
		{
			fread (buffer, 1, length, f);
			buffer[length] = 0;
		}
		fclose (f);
	}

	return (buffer);
}