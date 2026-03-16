#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]){
    int numbers[4] = {7,2};
    char name[4] = {'a'};

    printf("Numbers: %d %d %d %d\n",
        numbers[0], numbers[1], numbers[2], numbers[3]
    ); 

    printf("name each: %c %c %c %c\n", 
        name[0], name[1], name[2], name[3]
    );

    const char* lex = "Hello World";
    char * dynamic;
    size_t len = sizeof(lex)/sizeof(lex[0]);
    dynamic = (char *)malloc(sizeof(lex[0]));

    if(dynamic == NULL){
        perror("Malloc Failer!");
        return 1;
    }

    strcpy(dynamic, lex);

    printf("Dynamic Allocations: %s\n", dynamic);

    free(dynamic);
    dynamic = NULL;
    return 0;
}