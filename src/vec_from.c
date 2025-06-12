#include "vec.h"

int vec_from(t_vec *dst, void *src, size_t len, size_t elem_size)
{
	if(!src || elem_size == 0)
		return (-1);
	//len is the quantity, size is the bytes per quantity, len might be 0.
	int	i;

	i = 0;
	if (vec_new(dst, len, elem_size) < 0)
	{
		return (-1);
	}
	else
	{
		ft_memcpy(dst->memory, src, dst->alloc_size);
		if (!dst->memory)
			return (-1);
	}
	return (1);
}
