#include "vec.h"

int	vec_new(t_vec *dst, size_t init_len, size_t elem_size)
{
	if(elem_size == 0 || !dst)
		return (-1);
	dst->elem_size = elem_size;
	dst-> len = init_len;
	dst->alloc_size = elem_size * init_len;
	if (init_len == 0)
	{
		dst->memory = NULL;
	}
	else
	{
		dst->memory = malloc(dst->alloc_size);
		if(!dst->memory)
			return(-1);
	}
	return (1);
	}
