#include <stdio.h>

int main()
{
 int ogrenci_tablosu[5][8];
 int i,j;

 for (i=0 ; i<5 ; i++)
 {
    for(j=0 ; j<8 ; j++)
    {
        printf("%d. ogrencinin %d. notunu giriniz:",i+1,j+1);
        scanf("%d",&ogrenci_tablosu[i][j]);
    }
 }

 for(i=0 ; i<5 ; i++)
 {
    for(j=0 ; j<8 ; j++)
    {
        printf("%d  ",ogrenci_tablosu[i][j]);

            if(j==7)
            {
                printf("\n");
            }                    
    }
 }

 return 0;
}
   

