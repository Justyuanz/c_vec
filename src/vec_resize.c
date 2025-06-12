#include "vec.h"

/*Create a function vec_resize which will take in a target_size parameter
and either shrink (destructively) or grow the vector to the target size,
copying the old contents over to the new allocation.*/

int	vec_resize(t_vec *src, size_t target_size)
{
	t_vec	*dst;

	if(!src)
		return (-1);
	if(!src->memory)
	{
		return (vec_new(src, target_size, src->elem_size));
	}
	else
	{
		dst->alloc_size = target_size;
		dst->len = src->len;
		dst->elem_size = src->elem_size;
		ft_memcpy(dst->memory, src->memory, target_size);
		vec_free(src);
		dst = src;
		return(vec_new(src, src->alloc_size, src))
	}
}
