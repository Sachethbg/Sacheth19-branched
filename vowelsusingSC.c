#include <stdio.h>
#include <conio.h>
int main(){
    char n;
    printf("Enter the letter to check if it is a vowel or consonant. \n");
    scanf("%c", &n);
    switch(n){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Its a Vowel");
        break;
        default:
        printf("Its a Consonant");
        break;
    }
}