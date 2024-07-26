#include<stdio.h>
#include<stdlib.h>
/*Girilen harfin sesli veya sessiz harf oldugunu yazma Tekrar yap    */
int main(){

 char letter;
 printf("Enter a letter:");
 scanf("%c",&letter);

 switch(letter){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': printf("The letter is a vowel"); 
    break;
    default : printf("The letter is consonant or you entered thing is not a letter");

 }

    return 0;
}