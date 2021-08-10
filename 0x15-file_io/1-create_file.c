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
i = 0;
if (filename == NULL)
return (-1);
f = open(filename, O_CREAT | O_RDWR, 0600);
if (f == -1)
return (-1);
if (text_content == NULL)
{
text_content = malloc(sizeof(*text_content) * 1);
text_content[0] = '\0';
}
while (text_content[i] != '\0')
i++;
write(f, text_content, i + 1);
close(f);
return (1);
}
