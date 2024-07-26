#include <stdio.h>
#include <stdlib.h>

int main()
{

int* dizi;
int eleman_sayisi, i;

printf("Dizinin eleman sayisini girini:");
scanf("%d", &eleman_sayisi);

dizi = (int*)malloc(eleman_sayisi*sizeof(int));

if(dizi == NULL){

printf("Hafizada yeterli alan yok.");

return 1;

}else{

    for(i=0 ; i<eleman_sayisi ; i++){

        scanf("%d", dizi+i);
    }

    for(i=0 ; i<eleman_sayisi ; i++){

        printf("%d.Elemanin Adresi:%x  ve Degeri:%d\n",i+1 , &dizi[i], dizi[i]);
    }


}



    return 0;
}