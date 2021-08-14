#include "holberton.h"
#include "main.h"
#include <elf.h>

void det_abi(int);
void det_type(int);
/**
 *main - displays the information contained in the ELF
 *header at the start of an ELF file.
 *@argc: no of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
int p;
int r;
char buf[28];
char *titles[] = {"ELF Header:", "Magic:", "Class:", "Data:", "Version:", "OS/ABI:", "ABI Version:", "Type:", "Entry point address:"};
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: ./elfheader file_name\n");
exit(98);
}
p = open(argv[1], O_RDONLY);
r = read(p, buf, 28);
close(p);
if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
{
dprintf(STDERR_FILENO, "File given is not an Executable and Linkable Format(ELF) file.\n");
exit(98);
}
printf("%s\n  %s   %.2x %.2x %.2x %.2x %.2x", titles[0], titles[1], buf[0], buf[1], buf[2], buf[3], buf[4]);
printf(" %.2x %.2x %.2x %.2x %.2x", buf[5], buf[6], buf[7], buf[8], buf[9]);
printf(" %.2x %.2x %.2x %.2x %.2x %.2x\n", buf[10], buf[11], buf[12], buf[13], buf[14], buf[15]);
printf("  %s", titles[2]);
if (buf[4] == 1)
printf("%29sELF32\n", "");
else
printf("%29sELF64\n", "");
printf("  %s", titles[3]);
if (buf[5] == 1)
printf("%30s2's complement, little endian\n", "");
else
printf("%30s2's complement, big endian\n", "");
printf("  %s", titles[4]);
if (buf[6] == 1)
printf("%27s1 (current)\n", "");
else
printf("%27s%d\n", "", buf[6]);
printf("  %s", titles[5]);
det_abi((int) buf[7]);
printf("  %s", titles[6]);
if (buf[8] == 0)
printf("%23s0\n", "");
else
printf("%23s%x\n", "", buf[8]);
printf("  %s", titles[7]);
det_type((int) buf[16]);
printf("  %s", titles[8]);
printf("%15s0x%x%x%x%x\n", "", buf[27], buf[26], buf[25], buf[24]);
return (0);
}

/**
 *det_abi - determines the application binary interface for the elf file
 *@hex: hex value
 *Return: void
 */
void det_abi(int hex)
{
int i;
int value[] = {0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
char *ABI[] = {"Unix - System V", "HP-UX", "NetBSD", "Linux", "GNU Hurd", "Solaris", "AIX", "IRIX", "FreeBSD", "Tru64", "Novell Modesto", "OpenBSD", "OpenVMS", "NonStop Kernel", "AROS", "Fenix OS", "CloudABI", "Stratus Technologies OpenVOS"};
for (i = 0; i < 19; i++)
{
if (value[i] == hex)
break;
}
if (i == 19)
printf("default: %28s%s", "",  ABI[0]);
printf("%28s%s\n", "", ABI[i]);
return;
}

/**
 *det_type - determines the type of the object file
 *@hex: hex value
 *@hex: hex value at next byte
 *Return: void
 */
void det_type(int hex)
{
int i;
int value[] = {0, 1, 2, 3, 4};
char *types[] = {"NONE", "REL (Relocatable file)", "EXEC (Executable file)", "DYN (Shared object file)"};
for (i = 0; i < 5; i++)
{
if (value[i] == hex)
break;
}
if (i == 5)
printf("%30s%s", "", types[0]);
printf("%30s%s\n", "", types[i]);
return;
}
