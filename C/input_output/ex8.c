#include <stdio.h>

// conditional in C

int main(int argc, char* argv[]){
    int i = 0;

    if(argc == 1){ 
        printf("You don't have enought arguments. You suck\n");
    } else if(argc > 1 && argc < 4){
        printf("Here are your arguments\n");
        for(i = 0; i < argc; i++){
            printf("%s\n", argv[i]);
        }

    // if you have a condition that cannot be met, and edge case.
    // the whole conditional structure will be skipped    
    } else{
        printf("You have too many arguments\n");
    }
    if(argc == 3){
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);

        if(((num1 + num2) & 0b1)== 0b1){
            printf("The sum of the two numbers is odd");
        } else{
            printf("The sum of the two number is even");
        }
    }   
    return 0;
}