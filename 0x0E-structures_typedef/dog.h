#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog information
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the name of the owner of the dog
 *
 * Description: structure that holds basic information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif /* DOG_H */

