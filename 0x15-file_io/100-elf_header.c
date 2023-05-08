#include "main.h"

/**
 * my_strncpy - Copies a string up to a given number of characters, padding the
 *              destination string with null characters if necessary.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *my_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

/**
 * my_memcmp - Compares two blocks of memory.
 *
 * @s1: A pointer to the first block of memory.
 * @s2: A pointer to the second block of memory.
 * @n: The number of bytes to compare.
 *
 * Return: An integer less than, equal to, or greater than zero if the first
 *         n bytes of s1 are respectively less than, equal to, or greater than
 *         the first n bytes of s2.
 */
int my_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;
    size_t i;

    for (i = 0; i < n; i++)
    {
        if (p1[i] < p2[i])
        {
            return -1;
        }
        else if (p1[i] > p2[i])
        {
            return 1;
        }
    }

    return 0;
}

/**
 * my_strlen - Computes the length of a string.
 *
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
size_t my_strlen(const char *s)
{
    size_t i;

    for (i = 0; s[i] != '\0'; i++)
    {
        /* Do nothing. */
    }

    return i;
}

/**
 * print_elf_header - Prints the ELF header of a given file.
 *
 * @filename: The name of the file.
 */
void print_elf_header(const char *filename)
{
    int fd;
    Elf64_Ehdr header;
    ssize_t num_read;
    size_t i;

    fd = open(filename, O_RDONLY);

    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    num_read = read(fd, &header, sizeof(header));

    if (num_read == -1)
    {
        perror("read");
        exit(EXIT_FAILURE);
    }

    if (num_read != sizeof(header) ||
        my_memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
    {
        fprintf(stderr, "File is not an ELF object.\n");
        exit(EXIT_FAILURE);
    }

    printf("ELF Header:\n");

    printf("  Magic:   ");

    for (i = 0; i < sizeof(header.e_ident); i++)
    {
        printf("%02x ", header.e_ident[i]);
    }

    printf("\n");

    printf("  Class:                             ");

    switch (header.e_ident[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
            break;
    }

    printf("  Data:                              ");

    switch (header.e_ident[EI_DATA])
    {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
            break;
    }

    printf("  Version:                           %d\n", header.e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");

    switch (header.e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
            break;
    }

    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");

    switch (header.e_type)
    {
        case ET_NONE:
            printf("NONE (none)\n");
            break;
        case ET_REL:
            printf("REL (relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (core file)\n");
            break;
        default:
            printf("<unknown: %x>\n", header.e_type);
            break;
    }

    printf("  Entry point address:               %lx\n", (unsigned long) header.e_entry);

    printf("  Start of program headers:          %ld (bytes into file)\n", (long) header.e_phoff);

    printf("  Start of section headers:          %ld (bytes into file)\n", (long) header.e_shoff);

    printf("  Flags:                             %lx\n", (unsigned long) header.e_flags);

    printf("  Size of this header:               %d (bytes)\n", header.e_ehsize);

    printf("  Size of program headers:           %d (bytes)\n", header.e_phentsize);

    printf("  Number of program headers:         %d\n", header.e_phnum);

    printf("  Size of section headers:           %d (bytes)\n", header.e_shentsize);

    printf("  Number of section headers:         %d\n", header.e_shnum);

    printf("  Section header string table index: %d\n", header.e_shstrndx);

    if (close(fd) == -1)
    {
        perror("close");
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    print_elf_header(argv[1]);

    return 0;
}
