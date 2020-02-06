#include <stdio.h>

/*
    If you assign a char array to a char pointer variable, is the result string mutable?
*/

int main(void){
    char str[] = "hello there";
    char *strPointer = str;
    strPointer[1] = 'd';
    printf("%s", strPointer);


    char *str2 = "bye bye";
    char *strPointer2 = str2;
    strPointer2[1] = 'd';
}