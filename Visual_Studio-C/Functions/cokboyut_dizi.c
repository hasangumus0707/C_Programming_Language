#include <stdio.h>

void printf_array ( int a[][3]);

int main()
{

    int array1[2][3] = { {1 , 2 , 3} , {4 , 5 , 6} };
    int array2[2][3] = {1 , 2 , 3 , 4 , 5};
    int array3[2][3] = {{ 1 , 2} , {4} };

    printf("Array1:\n");
    printf_array( array1 );

    
    printf("Array2:\n");
    printf_array( array2 );

    
    printf("Array3:\n");
    printf_array( array3 );

    return 0;
}

void printf_array ( int a[][3])
{

    int i , j ;
    
    for( i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
}

