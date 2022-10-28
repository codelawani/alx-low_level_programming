#include <stdlib.h>
/**
* _realloc - reallocates memory
* @ptr: pointer to memory
* @old_size: size of old memory
* @new_size: size of new memory
* Return: Pointer to new memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	char *filler
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	ptr = malloc(new_size);
	if (ptr == 0)
		return (NULL);
	if (new_size < old_size)
		for (i = 0 ; i < new_size ; i++)
		{
			ptr[i] = ptr[i];
		}
	if (new_size == 0 && ptr != 0)
		free(ptr);
	return (ptr);
}
