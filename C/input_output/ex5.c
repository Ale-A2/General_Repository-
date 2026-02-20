// This exercise is dedicated for the practice of C operators
// I went on a little of a tangent implementing bitwise operators 


#include <stdio.h>

int main(int argc, char* argv[]){
    // scanf("%s",argv);
    printf("The number of arguments in this program is: %d\n\n", argc);

    for(int i = 0; i < argc; i++){
        printf("Argument %d: %s\n", i, argv[i]);
    }

    printf("\n");

    int num1 = 0b101;
    int num2 = ~num1;
    num1 = (num1 ^ 0b101) | 0b1;
    

    printf("Original Value: %d, second value: %d", num1, num2);


    return 0;
}
