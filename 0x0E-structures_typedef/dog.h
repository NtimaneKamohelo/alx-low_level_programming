#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type struct dog with the following elements
 * @name: type char *
 * @age: type float
 * @owner: type char *
 *
 * Description: a new type struct dog with the following elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
