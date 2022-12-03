#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog - function
*@name: var
*@age: var
*@owner: var
*Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;

	if (name == NULL || owner == NULL)
		return (NULL);
	temp = malloc(sizeof(dog_t));
	if (temp == NULL)
		return (NULL);
	temp->name = name;
	temp->age = age;
	temp->owner = owner;
	return (temp);
}
