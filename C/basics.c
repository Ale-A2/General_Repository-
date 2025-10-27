#include <stdio.h>
#include <string.h>

// a simple function to test compilation using gcc and printing a string 
void printHello(){
    printf("Hello World!");
}

void varibles(){
    // C doesn't have a boolean type, they are usually defined in the program itself for example
    // #define BOOL char
    // #define FALSE 0
    // #define TRUE 1

    // string themselves are a sequence of characters 
    char string[] = "universal studios";

    printf("How to print a string variable : %s", string);
}

int main(){
    // printHello()
    varibles();

}