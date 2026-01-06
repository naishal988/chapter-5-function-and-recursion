#include<stdio.h>
float force(int m);

float force(int m){
    float f;
    float g=9.8;
    f=m*g;
    printf("force is: %f",f);
}
int main(){
    force(90);
    return 0;
}
