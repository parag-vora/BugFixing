#include <stdio.h>
#include <string.h>

int main() {
    // Off-by-one error example:
    int arr[3] = {1, 2, 3};
    for (int i = 0; i <= 3; i++) { // Bug: Loop should go up to 2, not 3
        //printf("%d ", arr[i]); // This will cause a crash due to out-of-bounds access
    }
    
    // Missing null terminator example:
    char str[5] = "hello"; // Missing null terminator
    printf("%s\n", str); // May cause unexpected output or crash

    // Assignment vs. Equality example:
    int x = 5;
    if (x = 10) { // Bug: This assigns 10 to x and the if condition will always be true
        printf("x is 10\n");
    }
    printf("x is %d\n", x); // x is now 10
    
    return 0;
}