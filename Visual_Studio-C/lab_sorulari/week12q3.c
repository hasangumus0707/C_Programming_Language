/* Girilen dizideki en büyük elemanı rekürsif olarak bulan programı C dilinde yazınız*/

#include <stdio.h>

int max(int array[], int size,int max_number);

int main() {
    int n, i;
    int max_number;
    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);
    int array[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
   	max_number = array[0];
   	
   	printf("%d",max(array,n,max_number));
    
    return 0;
}

int max(int array[], int size,int max_number)
{
    static int i = 0 ;
    
    if(i < size)
    {
        if(array[i] > max_number)
        {
            max_number = array[i];
        }
        
        i++;
		
        return max(array,size,max_number);
    }
    
        return max_number;
}




/*

#include <stdio.h>

int max(int array[] ,int, int);

int main()
{

    int n, max_number;

    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&n);

    int array[n];

    for(int i = 0 ; i<n ; i++){

        printf("Dizinin %d. elemanini giriniz:",i+1);
        scanf("%d", &array[i]);
    }

    max_number = array[n-1];
    printf("%d",max(array ,n, max_number));




    return 0;
}

int max(int array[], int a, int k){

    if( a != 1){

        if(array[a-2] > array[a-1]){

            k = array[a-2];
        }

        return (max(array, a-1, k));
    }

 return k;

}
*/