#include <stdio.h>

int main(int charg, char* charv[]){
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char* first_name = "Anthony";
    char* last_name = "Aleman";

    printf("You are %d miles away \n", distance);
    // When a character is a float. you can set the precision of the decimal by
    // specifying the number of digits after the dot in the format specification
    printf("You have %.1f levels of power\n", power);
    printf("You have %.1f awesome power levels\n", super_power);
    printf("I have an initial %c\n", initial);
    printf("I have a first name %s\n", first_name);
    printf("I have a last name %s \n", last_name);
    printf("my full name is: %s %c %s\n", first_name, initial, last_name);

    int bugs= 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);

    // C num type suffixes.
    // to specify the compiler that a number is something more than an integer, one must include
    // a suffix at the end of each number.
    // Failing to do so, will, in the case for long, will cause an overflow issue in the compiler 
    // and the program will not run
    // As long as one number has the suffix, the program will treat the whole R value as its designated type
    long universe_of_defects = 1024L * 1024 * 1024 * 1024;

    // format specifier tell the compiler to print the number as a long decimal
    // failing to match the type, will output 0
    printf("The entire universe has %ld bugs.\n", universe_of_defects);


    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs. \n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    // e specifies a scientific notation number
    printf("That is only a %e portion of the universe . \n", 
        part_of_universe);


    // Introduction on how C gives you direct access to the machine 
    // = \000
    char nul_byte = '\0';

    // nul as integer is treated as zero
    int care_percentage = nul_byte;

    // double % will print the actual character
    // printing null characters as c doesn't print it.
    // using the string type will print(null)
    printf("Which means you should care %s%%.\n", care_percentage);

    // Why can you multiply a character by an int. Because characters as treated as numbers, their acii values 
    // in low level languages. Whenever the compiler read this, it will be treated as their number value

    return 0;
}