//write a program using function to find average of three numbers.
#include<stdio.h>
float average_of_numbers(int a,int b,int c);

float average_of_numbers(int a,int b,int c){
    return (a+b+c)/3.0;
}

int main(){
    int d=average_of_numbers(1,2,3);
    printf("%d\n",d);
    return 0;
}
