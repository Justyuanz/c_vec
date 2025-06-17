#include "vec.h"

int vec_push(t_vec *dst, void *element)
{
	int	i;

	i = 0;
	if (!dst || !element)
		return (-1);
	if (!dst->memory)
		vec_new(dst, 1, dst->elem_size);
	if (dst->len * dst->elem_size >= dst->alloc_size)
	{
		if (vec_resize(dst, dst->len * 2) == -1)
			return (-1);
	}
	ft_memcpy(&dst->memory[dst->len * dst->elem_size], element, dst->elem_size);
	dst->len += 1;
	return (1);
}
