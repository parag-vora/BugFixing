// BUG: 1_enumWrongDefination/original_code.c
// The original code has a syntax error in the enum definition.

// FIX: 1_enumWrongDefination/fixed_code.c
// The fixed code removes the semicolon after the last enumerator.
// The fixed code also adds a return type to the main function.
// The fixed code also includes a return statement in main.

#include<stdio.h>
enum hello
{
    a,b,c
};

int main()
{
    enum hello m;
    printf("%d",m);   // m is uninitialized, so it may print an indeterminate value but this is valid C code.

    return 0;
}