#include <stdio.h>

/* 
 * Helper function to find the maximum of two integers.
 * This makes the main max_of_four logic cleaner and reusable.
 */
int max(int x, int y) {
    return (x > y) ? x : y;
}

/*
 * Task function: Compares four integers and returns the greatest.
 */
int max_of_four(int a, int b, int c, int d) {
    // Compare a and b, then compare c and d, and finally find the max of both results.
    int left_max = max(a, b);
    int right_max = max(c, d);
    
    return max(left_max, right_max);
}

int main() {
    int a, b, c, d;
    
    // Read four integers from standard input
    if (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        int ans = max_of_four(a, b, c, d);
        printf("%d\n", ans);
    }
    
    return 0;
}
