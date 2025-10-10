#include<stdio.h>

int main(){
    int a=4;
    printf("%d %d %d \n",a,++a,a++);
    //same type variable hai so compiler right to left decode karega
    //so 6 6 4 will be the output instead of 4 5 5.
    return 0;
}