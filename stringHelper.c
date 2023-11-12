/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strCp - copy a string
 * @dest: dest string arg
 * @src: source arg
 * Return: string value
 */
char *_strCp(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strNCp - copy n char
 * @dest: string argument
 * @src: string argument for src
 * @n: integer argument
 * Return: dest
 */
char *_strNCp(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * _strCat - This function appends the src string to the dest string
 * @dest: string agument
 * @src: string argument
 * Return: String
 */
char *_strCat(char *dest, char *src)
{
	int len = 0, lend = 0, j;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[lend] != '\0')
	{
		lend++;
	}
	for (j = 0; j < len; j++)
	{
		dest[lend + j] = src[j];
	}
	dest[lend + len] = '\0';
	return (dest);
}

/**
 * _strCmp - unction that compares two strings
 * @s1: first function
 * @s2: second function
 * Return: val
 */
int _strCmp(char *s1, char *s2)
{
	int cmp = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		cmp = *s1 - *s2;

	return (cmp);
}
