#include<stdio.h>
#include<stdlib.h>

/*Faktöriyel Hesaplama*/

int main(){
    int number,factorial,i;
    
     factorial=1;
    printf("Enter a whole number that not negative:");
    scanf("%d",&number);
    if(number<0){
        printf("You entered a negative number!!!");
        return 0;
    }else if(number==0){
        factorial=1;
     printf("Factorial of the number:%d",factorial);
     return 0;
     
    }
     for(i=1;i<=number;i++){
        
        factorial*=i;
        


    }
    printf("Factorial of the number:%d",factorial);


 return 0;
}
