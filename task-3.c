#include<stdio.h>


int main(){

    //Write C program to count number of digits in a number.

    int a,b=0;

    printf("\n\nEnter a number:- ");
    scanf("%d",&a);//222

    while(a>0){

        a=a/10;// 222/10  22.2,2.2,.2
        b++;//count 3 number

    }
    printf("total digits:- %d\n\n",b);

    return 0;
}