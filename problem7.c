#include<stdio.h>

int main(){
    int n=3;
    for (int i = 0; i < 3; i++)
    {
        // This loop runs from 0 to 2
        //no_of_stars =(2*i+1)
    //     if (i==0)
    //     {
    //         printf("*\n");
    //     }
    //     else if (i==1)
    //     {
    //         printf("***\n");
    //     }
    //     else if (i==2)
    //     {
    //         printf("*****\n");
    //     }
        
    for (int j = 0; j < 2*i+1; j++)
    {
        printf("*");
    }
    printf("\n");
    
}
    return 0;
}