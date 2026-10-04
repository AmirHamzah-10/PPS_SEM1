#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    
    // Read the interval boundaries from standard input
    if (scanf("%d\n%d", &a, &b) != 2) {
        return 1;
    }

    // Lookup array for numbers 1 to 9. Index 0 is left empty or padded.
    const char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Loop through each integer in the closed interval [a, b]
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the lowercase English representation using the lookup array
            printf("%s\n", words[i]);
        } 
        else if (i > 9) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
