// BUG: 5_enumTypoError/original_code.c
// This code contains a typo in the enum type name which causes compilation errors.

// FIX: 5_enumTypoError/fixed_code.c
// The typo has been fixed, and the code now compiles successfully.
// include <stdio.h>
// main function should return int, not void

#include <stdio.h>

int main()
{
    enum resut {pass, fail};
    //enum result s1,s2;
    enum resut s1, s2; // Fixed typo in enum type name
    s1=pass;
    s2=fail;
    printf("%d",s1);
}