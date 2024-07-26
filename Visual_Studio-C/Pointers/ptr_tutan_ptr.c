#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m[3][4];
  int i, j ;

  for(i=0 ; i<3 ; i++){

    for(j=0 ; j<4 ; j++){

         m[i][j] = i*10 + j+1;
         printf("%3d",m[i][j]);
    }

    printf("\n");
  }


    return 0;
}