#include<stdio.h>

void function(int *arr, int size){
    for (size_t i = 0; i <= (size); i++)
    {
        printf("%d ", *(arr+i));
    }
    
}

int main(){
    int arr[5] = {5,10,15,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    function(arr, size);
    

    return 0;
}