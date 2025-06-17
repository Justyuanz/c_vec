#include "vec.h"

int	vec_resize(t_vec *src, size_t target_len)
{
	t_vec	tmp;

	if(!src)
		return (-1);
	if(!src->memory)
	{
		return (vec_new(src, target_len, src->elem_size));
	}
	else
	{
		if (vec_new(&tmp, target_len, src->elem_size) == -1)
		{
			return (-1);
		}
		else
		{
			ft_memcpy(tmp.memory, src->memory, src->alloc_size);
			tmp.len = src->len;
			vec_free(src);
			*src = tmp;
		}
	}
	return (1);
}
