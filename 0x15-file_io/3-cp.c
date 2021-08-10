#include "holberton.h"

void print_errmssg(char, ...);

/**
 *main - copies one file to another
 *@argc: no of arguments passed to program
 *@argv: array of arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
int from;
int to;
int r;
int w;
int x;
int y;
int c;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
from = open(argv[1], O_RDONLY);
if (from == -1)
print_errmssg('r', argv[1]);
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to == -1)
print_errmssg('w', argv[2]);
c = 0;
do {
lseek(from, 0, c);
r = read(from, buf, 1024);
if (r == -1)
print_errmssg('r', argv[1]);
w = write(to, buf, r);
if (w == -1)
print_errmssg('w', argv[2]);
c += r;
} while (r != 0);
x = close(from);
if (x == -1)
print_errmssg('c', from);
y = close(to);
if (y == -1)
print_errmssg('c', to);
return (0);
}

/**
 *print_errmssg - variadic function that prints out
 *the error messages for file descriptors that return -1.
 *@rwc: character indicating operation fd was trying to run.
 *Return: void
 */
void print_errmssg(char rwc, ...)
{
va_list ap;
va_start(ap, rwc);
if (rwc == 'c')
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", va_arg(ap, int));
exit(100);
}
if (rwc == 'w')
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", va_arg(ap, char *));
exit(99);
}
if (rwc == 'r')
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", va_arg(ap, char *));
exit(98);
}
va_end(ap);
return;
}


