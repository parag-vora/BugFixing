//BUG: Implicit return type in function definition
// This code does not specify the return type of the function getFun, which can lead to undefined behavior  

#include<stdio.h>

getFun(float n1, float n2){
    return n1 + n2; // Implicit return type, should be specified
}

int main(){

    float num1 = 5.5, num2 = 3.2;
    float result = getFun(num1, num2);
    printf("The sum is: %.2f\n", result);

    return 0;

}