#include <stdio.h>

#define MAX_PASSENGER 5

struct Passenger {
  char *name;
  int age;
  int rich; // bool
};

struct Spaceship {
  int length;
  int height;

  struct Passenger passenger[MAX_PASSENGER];
};

int main(void) {

  struct Spaceship s = {.height = 20,
                        .length = 40,
                        .passenger = {
                            [0].age = 20,
                            [0].name = "Peter",
                            [0].rich = 0,

                            [3] = {.age = 30, .name = "Hannelore", .rich = 1},
                        }};

  printf("print passengers\n");

  for (int i = 0; i < MAX_PASSENGER; i++) {
    if ((*(s.passenger + i)).name == NULL) {
      continue;
    }
    printf("Passenger: name:%s, age:%d, is %s\n", (*(s.passenger + i)).name,
           (*(s.passenger + i)).age,
           (*(s.passenger + i)).rich ? "rich" : "not rich");

    /* normally it would look like this:
    for (int i = 0; i < MAX_PASSENGER; i++) {
    // Access the current passenger using pointer arithmetic
    if ((s.passenger[i].name) == NULL) {
        continue;  // Skip if the passenger's name is NULL
    }

    // Print passenger details
    printf("Passenger: name:%s, age:%d, is %s\n", s.passenger[i].name,
           s.passenger[i].age, s.passenger[i].rich ? "rich" : "not rich");
    }
    */
  }
  return 0;
}