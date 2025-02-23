#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

void changePrice(struct car *c, float new_price) {
    // (*c).price = new_price;
    c->price = new_price;
}

int main(void) {

    struct car marvin = {"Honda", 3.99, 200};
    struct car rebecca = {.name = "Mazda", .price = 500.44};

    printf("Name: %s\n", marvin.name);
    printf("Price: %f\n", marvin.price);
    printf("Speed: %d\n", marvin.speed);


    changePrice(&marvin, 4.99);

    printf("new price: %f\n", marvin.price);


    return 0;
}