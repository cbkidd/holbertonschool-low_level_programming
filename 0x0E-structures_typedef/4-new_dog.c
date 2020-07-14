#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates new dog
* @name: name of dog
* @age: age of dog
* @owner: owner name
*
*
*
* Return: NULL or new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *newgoodboi;
char *n = name;
char *o = owner;

newgoodboi = malloc(sizeof(dog_t));

if (newgoodboi == NULL)
	return (NULL);

newgoodboi->name = n;
newgoodboi->age = age;
newgoodboi->owner = o;

return (newgoodboi);
}
