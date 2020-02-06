#include <stdio.h>
#include <string.h>

/*
    The purpose of this file is to test the differences between char* and char[] in the
    declaration and usages of strings.
*/


int shortenStringPointerEdition(char *str){
    str[strlen(str) - 1] = '\0';
    return 0;
}

int shortenStringArrayEdition(char str[]){
    str[strlen(str) - 1] = '\0';
    return 0;
}

int main(int argc){
    //first we test indexing of char*
    char *str1 = "hello";
    printf("%c\n", str1[1]);
    //indexing works. What about mutation?
    //str1[1] = 'c';
    //we get a segmentation fault, since we do not have permission to change the value.
    //what if we use pointer arithmetic instead of indexing?
    printf("%p", str1);
    /*
        *(str1 + 1) = 'a';
        printf("%s", str1);

        note that the above doesn't work, you get segfault for both indexing and pointer arithmetic.
        This means that the non-mutable property is on the literal itself, not the variable. i.e. the pointer
        is pointing to an address in "read-only" memory where the literal cannot be mutated.
    */

    /*
        Consider: what happens when a string is passed into a function as argument?
        is char* or char[] different in this case? what happens in the 4 parameter-type, argument-type
        combinations?
    */

    char *charStr = "hello";
    char arrayStr[] = "hello";
    // shortenStringPointerEdition(charStr); 
    // This one gives segFault

    // shortenStringPointerEdition(arrayStr);
    // printf("%s", arrayStr);
    // This one works without error

    // shortenStringArrayEdition(charStr);
    // This guy is still a seg fault

    // shortenStringArrayEdition(arrayStr);
    // This one works as intended.

    // Conclusion: mutability depends on the type of the variable being passed in (argument type)
    // and not on the type of the function parameter.
}

