#include "vec.h"

int vec_copy(t_vec *dst, t_vec *src)
{
	if (!dst || ! src || !src->memory)
		return (-1);
	dst->len = src->len;
	dst->elem_size = src->elem_size;
	dst->alloc_size = dst->elem_size * dst->elem_size;
	ft_memcpy(dst->memory, src->memory, dst->alloc_size);
	return (1);
}

