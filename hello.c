#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip the rest of the loop body if i is even
        }
        printf("%d ", i); // Print the odd numbers
    }
    return 0;
}

// Output is 1 3 5 7 9

