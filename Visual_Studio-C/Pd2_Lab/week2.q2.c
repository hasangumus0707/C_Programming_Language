#include <stdio.h>

int main()
{
    int number1, number2, operation;

    printf("Enter two numbers:");
    scanf("%d %d", &number1, &number2);

    printf("\nEnter operation:");
    scanf("%s", &operation);

    int sum(int number1, int number2);
    int cikar(int number1, int number2);
    int multiply(int number1, int number2);
    float divide(int number1, int number2);
    void print_result(float result);

    switch (operation)
    {
    case '-':
        print_result(cikar(number1, number2));
        break;

    case '+':
        print_result(sum(number1, number2));
        break;

    case '/':
        if (number2 == 0)
        {
            printf("Wrong Entry Try Again.");
            break;
        }
        print_result(divide(number1, number2));
        break;

    case '*':
        print_result(multiply(number1, number2));
        break;

    default:
        printf("Wrong entry. Try Again");
        break;
    }

    return 0;
}

int sum(int number1, int number2)
{
    return number1 + number2;
}

int cikar(int number1, int number2)
{
    return number1 - number2;
}

int multiply(int number1, int number2)
{
    return number1 * number2;
}

float divide(int number1, int number2)
{
    if (number2 == 0)
    {
        printf("Wrong entry. Try again");
        return 0;
    }
    return number1 / number2;
}

void print_result(float result)
{
    printf("Result:%f ", result);
}