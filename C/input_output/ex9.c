#include <stdio.h> 

int main(int argc, char* argv[]){
    int i = 25;

    int user_in;

    while( i > 0){
        // Why do we use reference to read the input of an user; it doesn't 
        // re-initialized the value in the variable?
        // when we scan for a variable, we cannot print any text in this function
        // THIS IS NOT A PRINT FUNCTION WITH MORE STEPS
        scanf("%d", &user_in);
        if(user_in == 0){
            break;
        }
        printf("This is the number you have chose:%d\n", user_in);
        
        i --;
    }

    return 0;
}