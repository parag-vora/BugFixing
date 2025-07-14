#include<stdio.h>
enum sanfoundry
{
    a,b,c=5
};
int main()
{
    enum sanfoundry s;
    int temp = b; // Use a temporary variable to hold the value of b
    temp = 10; // Assign a new value to the temporary variables
    printf("%d",temp);
}