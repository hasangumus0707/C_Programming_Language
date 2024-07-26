/*C Program To Print Character Pyramid Pattern


A 
B B 
C C C 
D D D D 
E E E E E                                             */


#include <stdio.h>

int main()
{
    char letter;
    int rows , i ,j ;

    printf("Please enter a uppercase letter: ");
    scanf("%c", &letter);

    if(letter > 64 && letter < 91)
    {

        rows = letter - 64;
        letter = 65;

        for( i = 1 ; i <= rows ; i++)
        {
            for(j = 1 ; j <= i ; j++)
            {
                printf("%c" , letter);
                printf(" ");
            }
            letter = letter + 1;
            printf("\n");
            
        }


    }else{

        printf("Wrong entry.");
        return 0;
    }


    return 0;
}