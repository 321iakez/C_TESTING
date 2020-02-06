#include <stdio.h>
#include <string.h>

void editString(char str[]){
    printf("%s", str);
}

int main(void){
    char str[] = "hello";
    editString(str);
    printf("%p", str + 1);
    printf("%c", *(str + 1));
}

