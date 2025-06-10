#include <assert.h>
#include <stdio.h>
#include "vec.h"
int	main(void)
{
	t_vec t1;
	const char	*src = "src";
	char	*dst;
	size_t n = 3;
	
	dst = ft_memcpy(dst, src, n);
	printf("%s", dst);
printf("==============================VEC_NEW==============================\n");
	assert(vec_new(&t1, 0, 0) == -1);
	assert(vec_new(&t1, 0, 1) > 0);
	assert(t1.memory == NULL);
	assert(vec_new(&t1, 1, 0) == -1);
	assert(vec_new(&t1, 10, 1) > 0);
	assert(t1.memory != NULL);
	free(t1.memory);
	printf("test_vc_new success!\n");
printf("==============================VEC_FREE==============================\n");
	assert(vec_new(&t1, 10, 1) > 0);
	vec_free(&t1);
	assert(t1.len  == 0);
	assert(t1.alloc_size == 0);
	assert(t1.elem_size == 0);
	assert(t1.memory == NULL);
	printf("test vec_free success!\n");
printf("==============================VEC_FROM==============================\n");
	}
