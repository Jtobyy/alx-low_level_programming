#include "holberton.h"

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
int w __attribute__((unused));
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
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(98);
}
c = 0;
do {
lseek(from, 0, c);
r = read(from, buf, 1024);
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit (98);
}
w = write(to, buf, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(98);
}
c += r;
} while (r != 0);
x = close(from);
if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
exit(100);
}
y = close(to);
if (y == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
exit(100);
}
return (0);
}

