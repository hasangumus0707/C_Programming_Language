#include <stdio.h>

/*deger atılmaz ise otomatikmen small yani ilk deger 0 alır
ve bir bir arta arta gider*/

enum level{

    SMALL = 1,
    MEDIUM,
    LARGE,
    XLARGE
};

int main()
{
    enum level my_const;

    my_const = XLARGE;

    switch (my_const){

        case 1: printf("Small Level.\n");
        break;
        case 2: printf("Medium Level.\n");
        break;
        case 3: printf("Large Level\n");
        break;
        case 4: printf("Xlarge Level.");
        break;
    }
    

    return 0;
}