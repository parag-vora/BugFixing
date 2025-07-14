// BUG: 2_enumVariableInitialization/original_code.c
// This code has an issue with enum initialization where a floating-point value is assigned to an enum member.

// FIX: 2_enumVariableInitialization/fixed_code.c
// The enum members should be initialized with integer values only.
// The main function should also be defined with a return type of int.


#include<stdio.h>
enum sanfoundry
{
    a=2,b=3
};
enum sanfoundry s;
int main()
{
    printf("%d%d",a,b); // Corrected to use integer values for enum members
    return 0;
}