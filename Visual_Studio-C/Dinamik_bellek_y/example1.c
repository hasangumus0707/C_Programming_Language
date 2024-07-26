#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i,n, *ptr, sum=0;
    printf("eleman sayisini giriniz:\n");
    scanf("%d",&n);
    
    ptr = (int *)malloc(n*sizeof(int));
    
    if( ptr == NULL){

        printf("Yeterli hafiza yok");
    }else{

        printf("Dizi elemanlarini girin:\n");

        for(i=0 ; i<n ; i++){

            scanf("%d", ptr+i);
            sum += *(ptr+i);
        }

        printf("Toplam = %d", sum);
        getchar();
    }



    return 0;
}
