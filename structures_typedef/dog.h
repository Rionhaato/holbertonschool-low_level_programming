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

/*
 * new_dog - Create a new dog instance with copied strings.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner);

/*
 * free_dog - Free a dog instance and its strings.
 * @d: pointer to dog_t to free
 */
void free_dog(dog_t *d);

#endif /* STRUCTURES_TYPEDEF_DOG_H */
