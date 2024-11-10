#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"

char * strcatm(char *s1, char *s2)
{
	char *s;

	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	strcpy(s, s1);
	strcpy(s + strlen(s1), s2);
	return (s);
}

char *strcat3(char *s1, char *s2, char *s3)
{
	char *s;

	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2)  + strlen(s3) + 1));
	strcpy(s, s1);
	strcpy(s + strlen(s1), s2);
	strcpy(s + strlen(s1) + strlen(s2), s3);
	return (s);
}

void loop_format_array(char **format, char *mode, void *arg, char* output_folder)
{

	int return_value;
	//FILE *stream_ft;
	char *file_ft = strcat3(output_folder, "/output_printf_ft_", mode);
	// remove(file_ft);
	// stream_ft = fopen(file_ft, "w");
	
	freopen(file_ft, "w", stdout);
	free(file_ft);

	FILE *stream_orig;
	char *file_orig = strcat3(output_folder, "/output_printf_or_", mode);
	remove(file_orig);
	stream_orig = fopen(file_orig, "w");
	free(file_orig);
	char *format_newline;

	while (*format)
	{
		//format_newline = strcatm(*format,"\n");
		format_newline = *format;
		if (mode[0] == 'i' || mode[0] == 'd')
		{
			return_value = fprintf(stream_orig, format_newline, *((int *) arg));
			fprintf(stream_orig, "\t(%i)\t%s\n", return_value, format_newline);
			return_value = ft_printf(format_newline, *((int *) arg));
			ft_printf("\t(%i)\t%s\n", return_value, format_newline);
		}
		else if (mode[0] == 'u')
		{
			return_value = fprintf(stream_orig, format_newline, *((int *) arg));
			fprintf(stream_orig, "\t(%i)\t%s\n", return_value, format_newline);
			return_value = ft_printf(format_newline, *((int *) arg));
			ft_printf("\t(%i)\t%s\n", return_value, format_newline);
		}
		else if (mode[0] == 'x' || mode[0] == 'X')
		{
			return_value = fprintf(stream_orig, format_newline, *((int *) arg));
			fprintf(stream_orig, "\t(%i)\t%s\n", return_value, format_newline);
			return_value = ft_printf(format_newline, *((int *) arg));
			ft_printf("\t(%i)\t%s\n", return_value, format_newline);
		}
		else if (mode[0] == 'p')
		{
			return_value = fprintf(stream_orig, format_newline, ((int *) arg));
			fprintf(stream_orig, "\t(%i)\t%s\n", return_value, format_newline);
			return_value = ft_printf(format_newline, ((int *) arg));
			ft_printf("\t(%i)\t%s\n", return_value, format_newline);
		}
		else if (mode[0] == 'c')
		{
			return_value = fprintf(stream_orig, format_newline, *((char *) arg));
			fprintf(stream_orig, "\t(%i)\t%s\n", return_value, format_newline);
			return_value = ft_printf(format_newline, *((char *) arg));
			ft_printf("\t(%i)\t%s\n", return_value, format_newline);
		}
		else if (mode[0] == 's')
		{
			return_value = fprintf(stream_orig, format_newline, (char *) arg);
			fprintf(stream_orig, "\t(%i)\t%s\n", return_value, format_newline);
			return_value = ft_printf(format_newline, (char *) arg);
			ft_printf("\t(%i)\t%s\n", return_value, format_newline);
		}
		//free(format_newline);
		format++;
	}

	fclose(stream_orig);
}