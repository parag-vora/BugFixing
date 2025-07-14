// BUG: 3_enumVariableRedeclaration/original_code.c
// This code has an issue with redeclaring an "hi" enum variable with the same name as an "hello" enum member.

// FIX: 3_enumVariableRedeclaration/fixed_code.c
// The enum members should be uniquely named to avoid conflicts.
// The main function should also be defined with a return type of int.

#include<stdio.h>
enum hi{a,b,c};
enum hello{f,d,e};
int main()
{
    enum hi h;
    h=b;
    printf("%d",h);
    return 0;
}