#ifndef DOG
#define DOG
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct
{
	char *name;
	float age;
	char *owner;
}dog_t;
#endif
