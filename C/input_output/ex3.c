// This is a program where we will review how to use MAKEfile

#include <stdio.h>

int main(int argc, char* argv[]){
    int age = 0b10001;
    int height = 0b1001000;

    // Reminder: Allocation of variables in the print function can be swappable 
    // with a numerical indentification $, but otherwise they should be provided
    // in the order the type specifier are arranged in the string.
    printf("I am %d years old.\n", age);
    printf("\n"); // new line
    printf("I am %d inches tall\n", height);

    // While doing this program I also learned some debuggin on the side
    // which again was the basic, but it was a good learning experience.

    // For starters, you have to enable debuggin in your build in order to 
    // run the debugger. 
    // Here I will provide some of the important commands needed to run basic debugging
    //  gdb [executable name]
    // run - it runs the debugger on the specified command 
    // b main - it sets a breakpoint on the main function
    // b fn - it sets a breakpoint on a specified function
    // b N - it sets a breakpoint on line N
    // b +N - it sets a breakpoint N lines from the current point 
    // Next or n - to jump to the next function
    // step or s - jumps to the next line in the current context
    // p [var name]- it displays the contents of a static variable
    return 0;
}