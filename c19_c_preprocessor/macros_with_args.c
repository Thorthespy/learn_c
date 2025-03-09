#include <math.h> // For sqrt()
#include <stdio.h>

#define SQR(x) ((x) * (x)) // Not quite right, but bear with me
#define TRIANGLE_AREA(w, h) (0.5 * (w) * (h))

#define QUADP(a, b, c) ((-(b) + sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a)))
#define QUADM(a, b, c) ((-(b) - sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a)))
#define QUAD(a, b, c) QUADP(a, b, c), QUADM(a, b, c)

int main(void) {

  printf("%d\n", SQR(12)); // 144

  printf("2*x^2 + 10*x + 5 = 0\n");
  printf("x = %f or x = %f\n", QUAD(2, 10, 5));
}