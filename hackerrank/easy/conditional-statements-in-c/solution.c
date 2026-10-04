#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    
    // Read the integer from standard input
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // Lookup array for numbers 1 to 9. Index 0 is padded with an empty string.
    const char* words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Conditional evaluation using if-else
    if (n >= 1 && n <= 9) {
        // Print the corresponding lowercase English word
        printf("%s\n", words[n]);
    } 
    else {
        // Executed if n is greater than 9
        printf("Greater than 9\n");
    }

    return 0;
}
