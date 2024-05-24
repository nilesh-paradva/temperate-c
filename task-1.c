#include<stdio.h>


int main(){

    //Write C program to print all alphabets from a to z. using do while loop

    char a;

    a='a';
    do{

        printf("\nAlphabets from a to z:- %c\n\n", a);
        a++;

    }while(a <= 'z');

    return 0;

}