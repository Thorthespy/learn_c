#include <stdio.h>

typedef struct mushroom {
    char *name;
    int size, diameter;
} mushroom;

struct mushroom shiitake;
mushroom truffle;

struct animal {
char *name;
int leg_count, speed;
};
 
// original name      new name
//      |-----------| |----|
typedef struct animal animal;

struct animal y;
animal z;
 
// anonymous struct
typedef struct {
    char *name;
    int leg_count, speed;
} human;

human h;

typedef struct {
    int x, y;
} point;

int main(void) {

    point p = {.x=20, .y=40};

    printf("%d, %d\n", p.x, p.y);

    return 0;
}