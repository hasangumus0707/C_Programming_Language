/*: Dinamik bellek ayırma yöntemi kullanılarak en büyük sayıyı bulan programı C dilinde yazınız.
Dizinin boyutunu kullanıcıya sorunuz ve dizinin elemanlarını kullanıcıdan alınız.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int size_array, i, max;
int* array;


printf("Enter value of array's size:");
scanf("%d",&size_array);

array = (int*)malloc(size_array * sizeof(int));

if(array == NULL){

    puts("There is no size in the memory.");

}
else{

for(i=0 ; i<size_array ; i++){

scanf("%d",array+i);

}

max = *array;
i = 0;

while(1){

 if(i != size_array-1){

    if(*(array+i+1) > *(array+i)){

        max = *(array+i+1);
    }
    i++;
 }
 else{

    break;
 }
}

printf("Max value of the array:%d",max);
}

    return 0;

}