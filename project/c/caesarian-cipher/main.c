/*
*Our program will:
* 1. Ask for a character from the user
* 2. Take that character and shift by some amount 
* 3. Print the rezult
*/

#include <stdio.h>

int main(){
    int shift = 2;

    char message[] = "Please input a letter from a to z.\n";
    printf("%s", message);

    char input;
    scanf("%c", &input);

    char rezult = input + shift;

    printf("%c\n", rezult);
    
    return 0;
}