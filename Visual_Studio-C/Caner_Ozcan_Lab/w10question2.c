/*Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini
ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.)*/

#include <stdio.h>

int main()
{
    float array[10] , square ;
    int i = 0 , k = 0;

    printf("Enter values of array.\n");

    do
    {
       printf("array[%d] = ", i );
       scanf("%f" , &array[i] ); 
       i++;

    }while( array[i-1] != -1);


    for( k = 0 ; k <i-1 ; k++)
    {
       
        square = array[k] * array[k];
        printf("%d. square of value: %f\n", k +1  , square);

    }
    


    return 0;

} 