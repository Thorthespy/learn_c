#include <stdio.h>

#include <string.h>

struct antelope {
    int speed;
} antelope;

struct antelope my_antelope;
struct antelope my_clone_antelope;

void *my_memcpy(void *dest, void *src, int byte_count) {
    // Convert void*s to char*s
    char *s = src, *d = dest;
    // Now that we have char*s, we can dereference and copy them
    while (byte_count--) {
        *d++ = *s++;
    }

    return dest;
}

int main(void) {

    char s[] = "Goats!";
    char t[100];

    memcpy(t, s, 7);
    // Copy 7 bytes--including the NUL terminator!

    printf("%s\n", t);
    // "Goats!"
    memcpy(&my_clone_antelope, &my_antelope, sizeof antelope);

    int a[] = {11, 22, 33};
    int b[3];
    memcpy(b, a, 3 * sizeof(int)); // Copy 3 ints of data
    printf("%d\n", b[1]);          // 22

    char d = 'F';
    char e;

    void *dest = my_memcpy(&e, &d, sizeof e);
    printf("dest: %p, e: %c", dest, e);
    return 0;
}