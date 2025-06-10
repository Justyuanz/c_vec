#include "vec.h"

int vec_from(t_vec *dst, void *src, size_t len, size_t elem_size)
{
	if(!src || elem_size == 0)
		return (-1);
	//len is the quatity size is the bytes per quantity, len might be 0.
	
}