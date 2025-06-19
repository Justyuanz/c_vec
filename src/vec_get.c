#include "vec.h"
#include <stdio.h>
void *vec_get(t_vec *src, size_t index)
{
	if (!src || !src->memory || src->len == 0 || index >= src->len)
		return (NULL);
	printf("in function: len-%lu  index-%lu\n", src->len, index);
	return (&src->memory[index]);
}
