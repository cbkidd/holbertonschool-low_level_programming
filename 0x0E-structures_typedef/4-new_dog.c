#include "holberton.h"
/**
* _strdup - copies string into new allocation of mem
*
* @str: pointer to array
*
* Return: Null or New location address
*
*
*
*/

char *_strdup(char *str)
{

char *p;
unsigned int i = 0;

if (str == 0)
{
	return (NULL);
}

while (str[i] != 0)
{
	i++;
}

i++;

p = malloc(sizeof(char) * i);

if (p == NULL)
{
	return (NULL);
}

for (i = 0; str[i] != 0; i++)
{
	p[i] = str[i];
}
p[i] = 0;
return (p);
}

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
char *n = _strdup(name);
char *o = _strdup(owner);

newgoodboi = malloc(sizeof(dog_t));
if (newgoodboi == NULL)
	return (NULL);

newgoodboi->name = n;
newgoodboi->age = age;
newgoodboi->owner = o;

return (newgoodboi);
}
