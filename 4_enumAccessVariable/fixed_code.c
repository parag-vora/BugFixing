// BUG: 4_enumAccessVariable/original_code.c
// This code has an issue with accessing and modifying an enum variable directly.

// FIX: 4_enumAccessVariable/fixed_code.c
// The enum variable should not be modified directly, and the main function should be defined with a return type of int.

#include<stdio.h>
enum sanfoundry
{
    a,b,c=5
};
enum sanfoundry s;
int main()
{
    // c++;
    int temp = c; // Store the value of c in a temporary variable
    temp++; // Increment the temporary variable
    printf("%d", temp); // Print the incremented value
    return 0; // Added return statement to main function
}