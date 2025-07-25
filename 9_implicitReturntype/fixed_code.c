//BUG: Implicit return type in function definition
// This code does not specify the return type of the function getFun, which can lead to undefined behavior

// Fix: 9_implicitReturntype/fixed_code.c
// The function getFun should explicitly declare its return type as float

#include<stdio.h>

float getFun(float n1, float n2){
    return n1 + n2; // Implicit return type, should be specified
}

int main(){

    float num1 = 5.5, num2 = 3.2;
    float result = getFun(num1, num2);
    printf("The sum is: %.2f\n", result);

    return 0;

}