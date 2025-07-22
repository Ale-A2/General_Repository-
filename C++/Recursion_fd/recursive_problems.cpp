#include <iostream> 
#include <string> 

bool is_palindrome(std::string str){

    //Solution using string indices 
    /*
    if(str.length() <= 1){
        return true;
    } if(str[0] != str[str.length() - 1]){
        return false;
    } return is_palindrome(str.substr(1, str.length() - 2));*/

    //Solution using iterators 
    if(str.length() <= 1){
        return true;
    } else if(*str.begin() != *(str.end() - 1)){ //dereference pointer at beginning and end of string 
        return false;                            //to get the character in the corresponding positions
    } else return is_palindrome(std::string(str.begin() + 1, str.end() - 1)); // String constructor with iterators   
}

int power(int num, int exponent){
    if(exponent == 1){
        return  num * 1;
    } else return num * power(num, exponent - 1);
}

int main(){
    std::string exa = "acar";
    std::string exa2 = "palindrome";
    std::string par = "(()()())";
    std::string tome = "kayak";
    std::string tome2 = "civic";
    std::cout << is_palindrome(exa);
    std::cout << is_palindrome(exa2);
    std::cout << is_palindrome(par);
    std::cout << is_palindrome(tome);
    std::cout << is_palindrome(tome2);
    std::cout << std::endl << std::endl;
    std::cout << power(2,4);
}