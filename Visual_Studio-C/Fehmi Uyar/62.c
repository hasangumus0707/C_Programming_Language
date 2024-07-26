/*Fahrenheit to Celsius or Celsius to Fahrenheit*/

#include <stdio.h>
#include <stdlib.h>

float fahrenheit_to_celsius(int);
float celsius_to_fahrenheit(int);
int choose;
float celsius,fahrenheit;

 int main(){

    printf("Please enter your choose\n1-Fahrenheit to Celsius\n2-Celsius to Fahrenheit\n");
    scanf("%d",&choose);

    if(choose!=1 && choose!=2){
        printf("Wrong choose.");
        return 0;
    } 

    int temperature;
    scanf("%d",&temperature);

    if(choose==1){
        
        printf("%.1f",fahrenheit_to_celsius(temperature));
    }
    else{

        printf("%.1f",celsius_to_fahrenheit(temperature));
    }


    return 0;
 }


 float fahrenheit_to_celsius(int x){

    celsius=(x-32)*5/9;
    return celsius;

 }

 float celsius_to_fahrenheit(int x){

    fahrenheit=(x*9/5)+32;
    return fahrenheit;
 }