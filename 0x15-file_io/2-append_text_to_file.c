#include "holberton.h"

/**
 *append_text_to_file - appends a text to a file
 *@filename: name of file
 *@text_content: content to append
 *Return: 1 on success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i;
int f;
int w;
i = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
while (text_content[i] != '\0')
i++;
w = write(f, text_content, (i + 1));
if (w == -1)
return (-1);
return (1);
}
