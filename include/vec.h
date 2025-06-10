#ifndef VEC_H
# define VEC_H

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct s_vec
{
	unsigned char	*memory;
	size_t			elem_size;
	size_t			alloc_size;
	size_t			len;
}	t_vec;

int	vec_new(t_vec *dst, size_t init_len, size_t elem_size);
int vec_from(t_vec *dst, void *src, size_t len, size_t elem_size);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	vec_free(t_vec *src);

#endif
