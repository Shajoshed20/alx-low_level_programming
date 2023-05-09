#include "main.h"


/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int read_file;
	Elf64_Ehdr *header;
	int open_file = open(argv[1], O_RDONLY);

	(void) argc;

	if (open_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		end_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(open_file, header, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(header);
		end_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checks_elf(header->elf_id);
	printf("ELF Header:\n");
	print_elf_magic(header->elf_id);
	print_elf_class(header->elf_id);
	data_print(header->elf_id);
	version_print(header->elf_id);
	osabi_print(header->elf_id);
	abi_print(header->elf_id);
	type_print(header->elf_type, header->elf_id);
	entry_print(header->elf_entry, header->elf_id);
	free(header);
	end_elf(o);
	return (0);
}



/**
 * check_elf - Checks if a file is an ELF file.
 * @elf_id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file, exit with error code 98.
 */

void check_elf(unsigned char *elf_id)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_id[i] != 0x7f &&
				elf_id[i] != 'E' &&
				elf_id[i] != 'L' &&
				elf_id[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}

}



/**
 * print_elf_class - Prints the class of an ELF header.
 * @elf_id: A pointer to an array containing the ELF class.
 */

void print_elf_class(unsigned char *elf_id)
{
	printf("  Class:                             ");

	switch (elf_id[EI_CLASS])
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
			printf("<unknown: %x>\n", elf_id[EI_CLASS]);

	}
}


/**
 * osabi_print - Prints the OS/ABI of an ELF header.
 * @elf_id: A pointer to an array containing the ELF version.
 */

void osabi_print(unsigned char *elf_id)
{
	printf("  OS/ABI:                            ");

	switch (elf_id[EI_OSABI])
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
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_id[EI_OSABI]);
	}
}


/**
 * version_print - Function to print version of an ELF header.
 * @elf_id: A pointer to an array containing
 *			the ELF identification information.
 */

void version_print(unsigned char *elf_id)
{
	printf("  Version:                           %d",
			eid_id[EI_VERSION]);

	switch (elf_id[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;

		default:
			printf("\n");
			break;
	}
}


/**
 * data_print - Function to print data encoding of an ELF file.
 * @elf_id: A pointer to an array containing the
 *				ELF identification bytes.
 */

void data_print(unsigned char *elf_id)
{
	const unsigned char data_encoding = elf_id[EI_DATA];

	printf("  Data:                     ");

	switch (data_encoding)
	{
		case ELFDATANONE:
			printf("None\n");
			break;

		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;

		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;

		default:
			printf("<Unknown: %x>\n", data_encoding);
	}
}


/**
 * type_print - Prints the type of an ELF header.
 * @elf_type: The ELF type.
 * @elf_id: A pointer to an array containing the ELF class.
 */

void type_print(unsigned int elf_type, unsigned char *elf_id)
{
	if (elf_id[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;

		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;

		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;

		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;

		case ET_CORE:
			printf("CORE (Core file)\n");
			break;

		default:
			printf("<unknown: %x>\n", elf_type);
	}
}


/**
 * print_elf_magic - Function to prints the ELF
 *			magic numbers from an ELF header.
 * @elf_id: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */

void print_elf_magic(unsigned char *elf_id)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_id[i]);

		putchar(i == EI_NIDENT - 1 ? '\n' : ' ');
	}
}


/**
 * abi_print - Function to print ABI version of an ELF header.
 * @elf_id: A pointer to an array containing the ELF ABI version.
 */

void abi_print(unsigned char *elf_id)
{
	printf("  ABI Version:                       %d\n",
			ident[EI_ABIVERSION]);
}


/**
 * entry_print - Function to print entry point of an ELF header.
 * @elf_entry: The address of the ELF entry point.
 * @elf_id: A pointer to an array containing the ELF class.
 */

void entry_print(unsigned long int elf_entry, unsigned char *eld_id)
{
	printf("  Entry point address:               ");

	if (elf_id[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}


/**
 * end_elf - Function to close an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */

void end_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);

		exit(98);
	}
}
