   {

       printf("failed to allocate memory\n");

       return (1);

   }

   simple_print_buffer(buffer, 98);

   free(buffer);

   return (0);

}


========== 0-create_array.c ============


#include "main.h"

#include <stdlib.h>


/**

* create_array - creates an array of chars,

* and initializes it with a specific char.

* @size: the size of the array

* @c: initial value

*

* Return: a pointer to the array, or NULL if it fails

*/

char *create_array(unsigned int size, char c)

{

  char *array;

  unsigned int i;


  if (size == 0)

     return (NULL);


  array = (char *)malloc(sizeof(char) * size);

  if (array == NULL)

     return (NULL);


  for (i = 0; i < size; i++)

     array[i] = c;


  return (array);

}
