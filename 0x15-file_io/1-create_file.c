#include "holberton.h"

/**
*create_file - creates a file
*@filename: name of the file to create
*@text_content: a null terminated string to write to the file
*Return: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int f;
int i;
int w;
int c;
i = 0;
if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
return (-1);
if (text_content == NULL)
{
text_content = malloc(sizeof(*text_content) * 1);
if (text_content == NULL)
return (-1);
text_content[0] = '\0';
}
while (text_content[i] != '\0')
i++;
w = write(f, text_content, (i + 1));
if (w == -1)
return (-1);
c = close(f);
if (c = -1)
return (-1);
if (i == 0)
free(text_content);
return (1);
}
