#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the calculate_the_maximum function
void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Outer loop picks the first number 'a'
    for (int a = 1; a < n; a++) {
        // Inner loop picks the second number 'b' (ensuring a < b)
        for (int b = a + 1; b <= n; b++) {
            
            // 1. Bitwise AND
            int current_and = a & b;
            if (current_and < k && current_and > max_and) {
                max_and = current_and;
            }
            
            // 2. Bitwise OR
            int current_or = a | b;
            if (current_or < k && current_or > max_or) {
                max_or = current_or;
            }
            
            // 3. Bitwise XOR
            int current_xor = a ^ b;
            if (current_xor < k && current_xor > max_xor) {
                max_xor = current_xor;
            }
        }
    }

    // Print results on separate lines in order: AND, OR, XOR
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    // Read n and k from standard input
    if (scanf("%d %d", &n, &k) == 2) {
        calculate_the_maximum(n, k);
    }
    
    return 0;
}
