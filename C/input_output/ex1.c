#include <stdio.h>

int main(int argc, char* argv[]){
    int distance = 100;
    char ch = 'a';
    char* location = "New Orleans";

    // this is a comment;
    // This print functions is not using all of its arguments in the string, but 
    // as long as the argument match the format specifications in the string, any
    // left over arguments can be ignored by the compiler

    // however if this mismatched argument was in between used one, the compiler 
    // would have a memory error and crash the program.

    // In another note, there is this thing called posix printf, where you can specify the argument by number and type
    // this allows for argument rearrangements, and can bu used to bypass he inorder segmentation issue from before
    // i don't find it useful tho
    // printf("You are %1$d miles away from %3$c.\n", distance, location, ch);   REMOVE FOR TESTING

    printf("You are %d milas away from %s.\n", distance, location);

    

    return 0;
}