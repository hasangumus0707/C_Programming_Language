/* C Program To Merge Two Arrays */

#include <stdio.h>



int main()
{

 int size1 , size2 , size3 , i , k = 0 ;

 printf("Enter size of first array: ");
 scanf("%d" , &size1);

 int array1[size1];

 for( i = 0 ; i < size1 ; i++)
 {
    printf("Array1[%d] = " , i);
    scanf("%d" , &array1[i]);
 }

 
 printf("Enter size of second array: ");
 scanf("%d" , &size2);

 int array2[size2];

 for( i = 0 ; i < size2 ; i++)
 {
    printf("Array2[%d] = " , i);
    scanf("%d" , &array2[i]);
 }

 size3 = size1 + size2;
 int array3[size3];

 printf("\n\n\n");

 for( i = 0 ; i < size3 ; i++)
 {
    if( i < size1 )
    {
        array3[i] = array1[i];
     
    }else{

        array3[i] = array2[k];
        k++;
    }

    printf("Array3[%d] = %d \n" , i , array3[i]);

 }

    return 0;
}