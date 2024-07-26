/*C Program to Add Two Complex Numbers */

#include <stdio.h>

int main()
{
    int reel1 , reel2 , virtual1 , virtual2 , sum_reel , sum_virtual ;

    printf("1. karmaşik sayinin reel kismini ve sanal kismini giriniz:");
    scanf("%d %d", &reel1 , &virtual1);

    printf("2. karmaşik sayinin reel kismini ve sanal kismini giriniz:");
    scanf("%d %d", &reel2 , &virtual2);

    printf("1. Karmaşik sayi : %d + %di \n 2.Karmaşik sayi: %d + %di", reel1 , virtual1 , reel2 , virtual2);

    sum_reel = reel1 + reel2;
    sum_virtual = virtual1 + virtual2;

    printf("\nSum:%d + %di", sum_reel , sum_virtual);

    


    return 0;
}