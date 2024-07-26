/* X ve Y tamsayılarının ortak bölenlerinin en büyüğü (0BEB) , her ikisini de tam bölen tam sayıların
en büyüğüdür. X ve Y ta sayılarının OBEB ini bulan ve döndüren bir obeb yineleme (recursive)
fonksiyonunu C dilinde yazınız. X ve Y değerleri kullanıcı tarafından girilecektir.*/

#include <stdio.h>

int obeb(int a, int b, int i);

int main()
{
    int x, y;
    int i = 2;
    printf("Please enter numbers:");
    scanf("%d%d", &x ,&y);

    if(x>y)
    {
        printf("%d",obeb(x,y,i));
    }
    else
    {
        printf("%d",obeb(y,x,i));
    }


    return 0;
}

int obeb(int a, int b, int i)
{
   static int ebob = 1 ;
 if(i<=a)
 {
   if((a%i == 0) && (b%i == 0))
    {

      ebob = i;
    
    }
    return obeb(a,b,++i);
    
 }
    return ebob;
}






/*

#include <stdio.h>

int obeb(int, int, int);

int main()
{

    int x, y;


    printf("x ve y degerlerini giriniz:");
    scanf("%d%d",&x,&y);

    printf("%d",obeb(x,y,1));



    return 0;
}

int obeb(int a, int b, int k){

    static int ebob;

  if(k <= a){

        if(a%k == 0 && b%k == 0){

       ebob = k;
  }

  return(obeb(a, b, k+1));
    
  }
    return ebob;
}

*/