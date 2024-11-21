#include <stdio.h>

int main()
{
 int a[] = { 6, 2 , 1 , 5 , 3 };
 int b = 10;
 int *p , *q;

 p = &b;
 q = a;

 printf("%d\n" , b);
 printf("%d\n" , *p);
 printf("%p\n" , &b);
 printf("%p\n\n" , p);

 printf("%p\n" , a);
 printf("%p\n" , q);


 q++;
 

 printf("%p\n" , a);
 printf("%p\n" , q);
 printf("%d\n\n" , *q);

 printf("%d\n", a[2]);
 printf("%d\n", *( a + 2 ));
 printf("%d\n", *( q + 1 ));
 printf("%d\n" , 2[a]);
 printf("%d\n\n" , 2[q]);

//  a[i] = *( a + i ) = *( q + i )

//  *( i + a ) = i[a] = i[q]

printf("%p\n" , a );
printf("%p\n" , a + 1 );
printf("%p\n", &a + 1); //anlamadım
//printf("%p\n" , &( a + 1 )); //?

printf("----%p\n",&q[0]);



    return 0;
}