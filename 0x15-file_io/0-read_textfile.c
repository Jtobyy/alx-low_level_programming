#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX stdout
 *@filename: file to read from
 *@letters: no of letters it should read and print
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t f;
ssize_t n;
ssize_t w;
char *p;
if (filename == NULL)
return (0);
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
p = malloc(sizeof(*p) * letters);
if (p == NULL)
return (0);
n = read(f, p, letters);
close(f);
w = write(STDOUT_FILENO, p, n);
if (w != n)
{
free(p);
return (0);
}
free(p);
return (w);
}
