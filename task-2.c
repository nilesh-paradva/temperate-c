#include<stdio.h>

int main(){

    //Write C program to print multiplication table of any number.

    int a,b;

    printf("\n\nmultiplication table");
    printf("\n\nInput the number:- ");
    scanf("%d",&a);

    for(b=1 ; b<=10 ; b++){

        printf("\n%d * %d = %d\n\n", a, b, a * b);

    }

    return 0;
}