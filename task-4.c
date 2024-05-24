#include<stdio.h>


int main(){

    //Write C program to find sum of first and last digit of a number.

    int num,last,first;


    printf("\n\nEnter a number:- ");
    scanf("%d", &num);//52671

    printf("\nYour number firstdigit & lastdigit sum:- %d", num);

    printf("\n\nLastdigit:- %d", num%10);// 52671 % 10 = 1 & example 54362 % 10 = 2

    last=num%10;

    while(num>10){

        num=num/10; // 52671/10, 5267, 526, 52, 5   5>10 condition false

    }
    printf("\nfirst digit:- %d\n", num);

    first=num;

    printf("firstdigit & lastdigit sum:- %d\n\n", last+first);

    return 0;
}