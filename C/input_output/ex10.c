// Switch statements
#include <stdio.h> 

int main(int argc, char* argv[]){
    if(argc != 2){
        printf("ERROR: You need one argument.\n");
        return 1;
    }

    printf("this is how many arguments you have: %d", argc);

    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i ++){
        char letter = argv[1][i];

        // in switch statement the argument is inside the switch
        // switch will check in which case the condition fits. If it doesn't fit
        // a case, it will move into the next one until it accepts a condition or it reaches default 
        // condition
        switch (letter)
        {
        
        //we can multiple conditions run the same code 
        case 'a':
        case 'A':
            printf("%d: 'A'\n", i);
            break;
        case 'e':
        case 'E':
            printf("%d: 'E'\n", i);
            break;
        case 'i':
        case 'I':
            printf("%d: 'I'\n", i);
            break;
        case 'o':
        case 'O':
            printf("%d: 'O'\n", i);
            break;
        case 'u':
        case 'U':
            printf("%d: 'U'\n", i);
            break;

        case 'y':
        case 'Y':
            if(i > 2){
                printf("%d: 'Y'\n", i);
            }
            break;
        default:
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }
}