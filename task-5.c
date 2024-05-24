#include<stdio.h>

int main(){

    //Write C program to calculate factorial of a number.

    int a,b=1;

    printf("\n\nEnter a number:- ");
    scanf("%d", &a);//5

    for(int i=1; i<=a; i++){

        b = b*i; //b=1 1*1=1++>condition 1*2=2++>condition 3*2=6++>condition 6*4++>condition 24*5++condition 120<=a condition false  

    }
    printf("Factorial number :- %d\n\n", b);

    return 0;
}