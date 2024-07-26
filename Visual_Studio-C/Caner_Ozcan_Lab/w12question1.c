/*Write C Program to Concatenate Two Strings.
Enter first string: Ahmet
Enter second string: Ali
After concatenation: AhmetAli
*/

#include <stdio.h>

int main()
{
    char string1[100] , string2[100], string3[100];
    int length1 = 0 , length2 = 0;
    int i;

    printf("Enter first string:");
    gets(string1);

    printf("Enter second string:");
    gets(string2);

    while(string1[length1] != '\0')
    {
        length1++;
    }

     while(string2[length2] != '\0')
    {
        length2++;
    }

    for(i = 0 ; i < length1 ; i++)
    {
        string3[i]= string1[i];
    }

     for(i = length1 ; i <= length2 + length1 ; i++)
    {
        if( i == length2)
        {
            string3[i] = '\0';

        }else{

            string3[i]= string2[i - length1];
        }
    }

    printf("After concatenation %s", string3);


    return 0;
}