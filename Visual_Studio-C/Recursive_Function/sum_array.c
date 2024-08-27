/*N elemanlı tamsayı tipinde bir dizideki elemanların toplamını bulan programı rekürsif
fonksiyon kullanarak C dilinde yazınız. Dizi boyutunu ve dizi elemanları kullanıcı tarafından
girilecektir*/

#include <stdio.h>

int sum( int a[], int n , int j);

int main()
{
   int size, i;

   printf("Enter size of array: ");
   scanf("%d", &size);

   int array[size];

   for( i = 0 ; i < size ; i++)
   {
      printf("Array[%d]= " , i);
      scanf("%d", &array[i] );
   }

   printf("%d", sum( array , size , 0));

   return 0;
}

int sum( int a[] , int n , int j)
{
   if( j < n )
   {
      return ( a[j] + sum( a ,  n , j + 1));
   }
   else
   {
      return 0;
   }
   
}