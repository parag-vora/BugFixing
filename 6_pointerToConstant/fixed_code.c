//BUG: 6_pointerToConstant/original_code.c
//pointer to constant: can't modify the value pointed to by a pointer to constant

//fix: 6_pointerToConstant/fixed_code.c
//fix: use a pointer to const int instead of a pointer to int


#include <stdio.h>

void foo(int* const);
int main()
{
const int i = 10;
printf("%d ", i);
foo(&i);
printf("%d", i);
}


void foo(int* const i)
{
*i = 20;
}