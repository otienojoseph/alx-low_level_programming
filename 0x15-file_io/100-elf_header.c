#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>

/**
 * display_elf_header - Entry point
 * @header: header pointer
 * Return: void
 */
void display_elf_header(const Elf64_Ehdr *header)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf(" %02x", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                         %s\n",
            (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
    printf("  Data:                          %s\n",
            (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian"
            : "2's complement, big endian");
    printf("  Version:                       %d (current)\n",
            header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                        %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                   %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                          %d\n", header->e_type);
    printf("  Entry point address:           %lx\n", header->e_entry);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        return (98);
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
    {
        fprintf(stderr, "Not an ELF file\n");
        close(fd);
        return (98);
    }

    if (lseek(fd, 0, SEEK_SET) < 0)
    {
        perror("Error seeking file");
        close(fd);
        return (98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        return (98);
    }

    display_elf_header(&header);

    close(fd);
    return (0);
}
