#include <stdio.h>

void add(int num1, int num2)
{
    int sum = num1 + num2;
    printf("Sum = %d\n", sum);
}

void sub(int num1, int num2)
{
    int Diff = num1 - num2;
    printf("Diff = %d\n", Diff);
}

void mul(int num1, int num2)
{
    int mul = num1 * num2;
    printf("Product = %d\n", mul);
}

void Div(int num1, int num2)
{
    int Quotient = num1 / num2;
    printf("Quotient = %d\n", Quotient);
}

int main()
{
    int num1, num2;
    void (*fptr[4])(int, int) = {add, sub, mul, Div};
    printf("Enter value for num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    int option;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter option: ");
    scanf("%d", &option);
    switch(option)
    {
        case 1: fptr[0](num1, num2);
        break;
        case 2: fptr[1](num1, num2);
        break;
        case 3: fptr[2](num1, num2);
        break;
        case 4: fptr[3](num1, num2);
        break;
        default: printf("Invalid option\n");
        break;
    }

    return 0;
}