#ifndef DOG_H
#define DOG_H
/**
 * struct dog  - animal
 * @name: name of dog
 * @owner: its owners name
 * @age: age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
