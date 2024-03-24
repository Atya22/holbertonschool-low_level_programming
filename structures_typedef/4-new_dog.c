#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
    int name_length = 0, owner_length = 0;
	char *sec_name, *sec_owner;
    dog_t *sec_dog;

    while (name[name_length])
        name_length++;
    while (owner[owner_length])
        owner_length++;

    sec_dog = malloc(sizeof(dog_t));
    sec_name = malloc(name_length + 1);
    sec_owner = malloc(owner_length + 1);

	if (sec_dog == NULL || sec_name == NULL || sec_owner == NULL)
	{
		free(sec_dog);
		free(sec_name);
		free(sec_owner);
		return (NULL);
	}

	strcpy(sec_name, name);
	strcpy(sec_owner, owner);
	sec_dog->name = sec_name;
	sec_dog->age = age;
	sec_dog->owner = sec_owner;
	return (sec_dog);
}
