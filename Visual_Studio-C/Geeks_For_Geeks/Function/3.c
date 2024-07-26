/*C Program for Quadratic Equation Roots*/

#include <stdio.h>
#include <math.h>

void find_roots( int a , int b , int c );

int main()
{
    int a , b , c;

    printf("ax^2 + bx + c\n Enter numbers of a, b , c : ");
    scanf("%d%d%d", &a , &b ,&c);

    find_roots( a , b , c );


    return 0;
}

void find_roots ( int a , int b , int c)
{
 int discriminant ;
 float root1 , root2 , root ;

 discriminant = (b * b) - (4 * a * c) ;

 if( discriminant > 0)
 {
 root1 = ( -b + sqrt(discriminant) ) / ( 2 * a);
 root2 = ( -b - sqrt(discriminant) ) / ( 2 * a);

 printf("There are two roots \n First Root = %.2f\n Second Root = %.2f" , root1 , root2);

 }
 else if( discriminant == 0){

    root = ( -b / ( 2 * a) );
    
    printf("There is one root: &d", root);

 }else{

    printf("There aren't any roots.");
 }
}