/*N elemanlı tamsayı tipinde bir dizideki elemanların toplamını bulan programı rekürsif
fonksiyon kullanarak C dilinde yazınız. Dizi boyutunu ve dizi elemanları kullanıcı tarafından
girilecektir.*/

#include <stdio.h>

int n, i;
int max(int array[],int n);

int main()
{
  printf("dizinin eleman sayisini giriniz:");
  scanf("%d",&n);
 int array[n];

 for(i=0 ; i<n ; i++)
 {
    scanf("%d",&array[i]);
 }

 printf("%d",max(array,n));


    return 0;
}

int max(int array[], int n)
{
    if(n==0)
    {
        return 0;
    }

    else
    {
       return (array[n-1] + max(array,n-1));
    }

}





/*

#include <stdio.h>

int topla(int, int dizi[], int);

int main()
{
    int n;

    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&n);

    int dizi[n];

    for(int i = 0 ; i<n ; i++){

        printf("Dizini %d. elemanin degerini gir:",i+1);
        scanf("%d",&dizi[i]);
    }

   printf("Dizinin elemanlarinin toplami:%d",topla(n-1, dizi, n));


    return 0;
}

int topla(int a, int dizi[], int k){

    if( a != 0){

        return(dizi[a] + topla(a-1,dizi, k));
    }
    else{

        return(dizi[0]);
    }
}


*/