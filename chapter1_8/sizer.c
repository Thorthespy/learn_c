#include <stdio.h>

int main(void) {

    int a = 999;
    
    // %zu is the format specifier for type size_t
    
    printf("%zu\n", sizeof a);  // Prints 4 on my system
    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
    printf("%zu\n", sizeof 3.14);
 
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(char));

    return 0;
}