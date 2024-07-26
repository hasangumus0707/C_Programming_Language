#include <stdio.h>
#include <stdlib.h>

/* dört işlem operatörlerinden birini ve 
iki reel sayıyı girdi olarak alan ve girilen
operatöre göre işlem sonucunu bulan programı yazalım */

int main(){

char myOperator;
float number1,number2;

  printf("choose operator (+, -, /, *):");
  scanf("%c",&myOperator);

  printf("Enter 2 numbers:");
  scanf("%f%f",&number1,&number2);

  switch(myOperator){
    case '+': printf("%f",number1+number2);
    break;
    case '-': printf("%f",number1-number2);
    break;
    case '*': printf("%f",number1*number2);
    break;
    case '/': printf("%f",number1/number2);
    default : printf("You entered the wrong operator");
 
  }


    return 0;
}