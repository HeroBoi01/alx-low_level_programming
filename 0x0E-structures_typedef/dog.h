#ifndef DOG_H
#define DOG_H

/* Definition of struct dog */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
