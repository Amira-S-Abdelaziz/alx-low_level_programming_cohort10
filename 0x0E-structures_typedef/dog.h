#ifndef _MAIN_
#define _MAIN_

/**
* struct dog - structure for dogs
*@name: var
*@age : var
*@owner: var
*
*Description: a struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
