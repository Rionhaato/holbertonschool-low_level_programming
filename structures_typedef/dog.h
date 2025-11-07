#ifndef STRUCTURES_TYPEDEF_DOG_H
#define STRUCTURES_TYPEDEF_DOG_H

/*
 * File: dog.h
 * Desc: Header file that defines the struct dog type.
 */

/**
 * struct dog - A dog's basic info
 * @name: Pointer to the dog's name
 * @age: Dog's age
 * @owner: Pointer to the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/*
 * init_dog - Initialize a struct dog variable.
 * @d: Pointer to struct dog to initialize
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/*
 * print_dog - Print the contents of a struct dog.
 * @d: Pointer to struct dog to print
 */
void print_dog(struct dog *d);

#endif /* STRUCTURES_TYPEDEF_DOG_H */
