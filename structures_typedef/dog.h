#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */
