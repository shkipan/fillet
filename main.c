#include "fillit.h"

int	main(int argc, char **argv)
{
	char	***tetras;
	char	*buffer;

	if (argc != 2)
		return (1);
	tetras = NULL;
	buffer = reader(argv[1]);
	printf("%s", buffer);
	return (0);
}
