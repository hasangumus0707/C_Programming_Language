/*Aşağıdaki kod parçalarını yazarak ekran çıktılarını yorumlayınız*/


#include <stdio.h>

void fonk(void);

int gid = 287;

int main(void)
{
    printf("deneme1.c gid degisken degeri: %d\n", gid);

    fonk();

    return 0;
}

extern int gid;

void fonk(void)
{
    printf("deneme2.c gid degisken degeri: %d", gid);
}