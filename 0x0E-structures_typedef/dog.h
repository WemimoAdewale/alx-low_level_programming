#ifndef DOG_H
#define DOG_H
/*
* File:dog.h
* Desc: Header file that defines a new type struct dog.
*/

/**
* struct dog - struct containing dog
* @name: the name of yhe dog
* @age:the age of the fog
* @owner:the owner of the dog
* struct dog:struct containing dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
* dog_t - typedef dor dog struct
*/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
