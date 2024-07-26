   #include <stdio.h>

   int main()
   {
      int i, j , toplam = 0 , max , min ;
      int dizi[2][3];
      int dizi_2[2][3];
      int dizi_3[2][3];

      for(i = 0 ; i < 2 ; i++)
      {
         for(j = 0 ; j < 3 ; j++)
         {
            printf("dizi[%d][%d] = ", i , j);
            scanf("%d", &dizi[i][j]);
         }
      }

      for(i = 0 ; i < 2 ; i++)
      {
         for(j = 0 ; j < 3 ; j++)
         {
            printf("dizi_2[%d][%d] = ", i , j);
            scanf("%d", &dizi_2[i][j]);
         }
      }

      for(i = 0 ; i < 2 ; i++)
      {
         for(j = 0 ; j < 3 ; j++)
         {
            dizi_3[i][j] = dizi[i][j] + dizi_2[i][j]; 
         }
      }

      for(i = 0 ; i < 2 ; i++)
      {
         for(j = 0 ; j < 3 ; j++)
         {
            printf("dizi_3[%d][%d] = %d\n", i , j, dizi_3[i][j]);
            
         }
      }

      for( i = 0 ; i < 2 ; i++)
      {
         for(j = 0 ; j < 3 ; j++)
         {
            toplam += dizi[i][j];
         }
      }

      max = dizi[0][0];
      min = dizi[0][0];

      for(i = 0 ; i < 2 ; i++)
      {
         for(j = 0 ; j < 3 ; j++)
         {
            if( dizi[i][j] >  max)
            {
               max = dizi[i][j];
            }

            if( dizi[i][j] < min)
            {
               min = dizi[i][j];
            }
         }
      }

      int simetri = 1;

      for(i = 0 ; i < 2 ; i++)
      {
         for(j = 0 ; j < 3 ; j++)
         {
           if( dizi[i][j] != dizi[j][i])
           {
             simetri = 0;
             break;
           }
         }
      }

      if( simetri == 1)
      {
         printf("matris simetriktir.");
      }
      else
      {
         printf("matris simetrik degildir.");
      }

      

      printf("Toplam = %d\n", toplam);
      printf("Max = %d  Min = %d", max , min );

      int array[2][3] = {{1 , 2 , 3},
                         {4 , 5 , 6}};

      return 0;
   }