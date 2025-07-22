#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "String parse";

    char* ptr = &str;

    int size = strlen(str); //find the size of the string

    // for(int i = 0; i <= size; i++){
    //     printf(" %c address: %p \n", str[i], (void*)&str[i]);
    // }
    for (int i = 0; str[i] != '\0'; i++ ){
        printf("%c", str[i]);
    }

    
}