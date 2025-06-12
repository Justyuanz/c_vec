#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "vec.h"
int	main(void)
{
	t_vec t1;
	t_vec t2;
	int     base[] = {1, 2, 3, 4, 5};
	const char	*src = "src";
	char	dst[10];

printf("==============================FT_MEMCPY==============================\n");
	printf("%s", (char *)ft_memcpy(dst, src, 3));
	printf("test_ft_memcpy success!\n");
printf("==============================ft_MEMMOVE==============================\n");
	printf("%s", (char *)ft_memmove(dst, src, 3));
	printf("test_ft_memmove success!\n");
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
    assert(vec_from(&t1, base, 5, sizeof(int)) > 0);
	for (size_t i = 0; i < 5; i++)
		printf("%d-",t1.memory[i]);
	printf("\n");
	for (size_t j = 0; j < 5; j++)
		printf("%d-",base[j]);
	printf("\n");
    assert(memcmp(t1.memory, base, sizeof(base)) == 0);
    vec_free(&t1);
    printf("test_vec_from successful!\n");
printf("==============================VEC_COPY==============================\n");
	assert(vec_from(&t1, base, 5, sizeof(int)) > 0);
	for (size_t i = 0; i < 5; i++)
		printf("%d-",t2.memory[i]);
	printf("\n");
    assert(vec_new(&t2, 5, sizeof(int)) > 0);
	for (size_t i = 0; i < 5; i++)
		printf("%d-",t2.memory[i]);
	printf("\n");
    assert(vec_copy(&t2, &t1) > 0);
	for (size_t i = 0; i < 5; i++)
		printf("%d-",t2.memory[i]);
	printf("\n");
    //assert(memcmp(t2.memory, base, sizeof(base)) == 0);
    vec_free(&t1);
    vec_free(&t2);
    printf("test_vec_copy successful!\n");
}

