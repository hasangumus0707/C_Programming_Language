/*Verilen bir sayısı dizisi içerisinde yer alan sayalara ait ortalamayı rekürsif fonksiyonla bulan
programı yazınız?*/

#include <stdio.h>

float sum(int my_array[], int size);


int main()
{
    int n,i;
    printf("Enter size of the array:",n);
    scanf("%d",&n);
    int my_array[n];

    for( i=0 ; i<n ; i++ )
    {
        printf("Enter %dth value of the array:",i+1);
        scanf("%d",&my_array[i]);
    }

    printf("%.1f",(sum(my_array,n))/n);


    return 0;
}

float sum(int my_array[], int size)
{
    if(size !=0)
    {
        return my_array[size-1] + sum(my_array, size-1);
    }

    return 0;

}



/*float toplam(int dizi[], int);


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

 printf("Ortalama:%.2f",(toplam(dizi,n)/n));
   

    return 0;
}

float toplam(int dizi[], int k){

    if(k != 1){

        return (dizi[k-1] + toplam(dizi, k-1));

    }
    else{

        return dizi[0];
    }
}*/