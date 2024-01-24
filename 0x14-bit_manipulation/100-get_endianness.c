/**
 * get_endianness - Get endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *endian;

	num = 1, endian = (char *) &num;
	if (*endian == 1)
		return (1);
	return (0);
}
