// BUG: 8_whileloopwithcontinue/original_code.c
// This code contains a bug that leads to an infinite loop due to the continue statement


// Fix: 8_whileloopwithcontinue/fixed.c
// The continue statement skips the increment of i when i is 2, causing an infinite loop

#include<stdio.h>

int main(){
    int i = 0;
    while(i < 5){

        if(i == 2) {
            i++; // Fix: Increment i to avoid infinite loop  
            continue;
        }
        printf("%d ", i);
        i++;
    }
}