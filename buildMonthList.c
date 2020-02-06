#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
    This function returns an array of 3 strings with values
    "January", "February", "March". All of the strings are mutable.
*/
char **build_month_list(){
    char **strArray = malloc(sizeof(char*)*3);
    for(int i = 0; i < 3; i++){
        strArray[i] = malloc(sizeof(char)*20);
    }
    char jan[] = "January";
    char feb[] = "February";
    char mar[] = "March";
    strcpy(strArray[0], jan);
    strcpy(strArray[1], feb);
    strcpy(strArray[2], mar);

    return strArray;
}

int main(void){
    char **str2d = build_month_list();
    for(int i = 0; i < 3; i++){
        str2d[i][0] = 'Z';
    }

    for(int i = 0; i < 3; i++){
        printf("%s\n", str2d[i]);
    }
}