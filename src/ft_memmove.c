#include "vec.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dest;
	const unsigned char *source;
	if (!dst || !src || n == 0)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	i =  0;
	if (dest <= source)
	{
		while(i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest[n] = source[n];
	}
	return (dst);
}
