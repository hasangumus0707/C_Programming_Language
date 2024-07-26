#include <stdio.h>

int x;

void auto_sinif(void) {
    auto int a = 32;
    printf("a nin degeri %d\n", a);
    printf("-------------\n");
}

void register_sinif(void) {
    register char b = 'G';
    printf("b nin degeri %c\n", b);
    printf("-------------\n");
}

void extern_sinif(void) {
    extern int x;
    printf("x degeri: %d\n", x);
    x = 2;
    printf("x degeri : %d\n", x);
    printf("-------------\n");
}

void static_sinif(void) {
    int i = 0;
    for (i = 1; i < 5; i++) {
        static int y = 5;
        int p = 10;
        y++;
        p++;
        printf(" y nin %d . degeri %d \n", i, y);
        printf(" p nin %d . degeri %d \n", i, p);
    }
    printf("-------------\n");
}

int main() {
    auto_sinif();
    register_sinif();
    extern_sinif();
    static_sinif();
    return 0;
}
