/*Palindrom Kontrolü Cümle al cümlenin harflerini stack e ve queue ye 
ekle karşılaştır boşlukları noktama işaretlerini dikkate alma yalnızca harfleri karşılaştır.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

char stack[SIZE];
char queue[SIZE];
char sentence[SIZE];

int top = -1;
int front = -1;
int rear = -1;

void push(char letter);
void enqueue(char letter);
char pop();
char dequeue();


int main()
{
    int length , i;
    int isPalindrome = 1;
    printf("Enter a sentence: ");
    gets(sentence);

    length = strlen(sentence);

    for( i = 0 ; i < length ; i++ )
    {
        if( (sentence[i]>='a' && sentence[i]<='z') || (sentence[i]>='A' && sentence[i]<='Z')  ){

            push(sentence[i]);
            enqueue(sentence[i]);
        }
    }

     for( i = 0 ; i < length ; i++ )
    {
        if( sentence[i] == ' '){

        }else{ 

            if( pop() != dequeue() ){

            isPalindrome = 0;
            
         }
        }
       
    }

    if( isPalindrome )
    {
        printf("Your sentence is palindrome.");

    }else{

        printf("Your sentence is not palindrome.");
    }
    

    return 0;
}

void push(char letter)
{
    top++;
    stack[top] = letter;
}

char pop()
{
    return( stack[top--] );
}

void enqueue(char letter)
{
    if( rear == -1 && front == -1 )
    {
        front = rear = 0;
        queue[rear] = letter;

    }else{

        rear++;
        queue[rear] = letter;
    }

}

char dequeue()
{
    return(queue[front++]);
}