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
	int i  = 0, j = 0;

	temp = malloc(sizeof(dog_t));
	if (temp == NULL)
		return (NULL);
	while (*(name + i) != '\0')
		i++;
	while (*(owner + j) != '\0')
		j++;
	temp->name = malloc(i);
	temp->owner = malloc(j);
	if (temp->name == NULL || temp->owner == NULL)
		return (NULL);
	i = j = 0;
	while (*(name + i) != '\0')
	{
		temp->name[i] = name[i];
		i++;
	}
	while (*(owner + j) != '\0')
	{
		temp->owner[j] = owner[j];
		j++;
	}
	temp->age = age;
	return (temp);
}
