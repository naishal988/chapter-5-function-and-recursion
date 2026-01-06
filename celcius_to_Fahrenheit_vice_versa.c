#include<stdio.h>
float celcius_to_fahrenheit(int celcius);
float celcius_to_fahrenheit(int celcius){
    return (celcius*1.8)+32;
}
float fahrenheit_to_celcius(int fahrenheit);
float fahrenheit_to_celcius(int fahrenheit){
    return (5.0/9.0)*(fahrenheit-32);
}
int main(){
    int a,c,d;
    printf("Enter (1) for celcius to fahrenheit\nEnter (2) for fahrenheit to celcius\n");
    scanf("%d",&d);
    if (d==1)
    {
        printf("Enter the value:");
        scanf("%d",&a);
        float b=celcius_to_fahrenheit(a);
        printf("%f\n",b);
    }
    else if (d==2)
    {
        printf("Enter the value:");
        scanf("%d",&c);
        float e=fahrenheit_to_celcius(c);
        printf("%f\n",e);   
    }
    return 0;
}
