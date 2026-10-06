#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+')
        result = num1 + num2;
    else if (operator == '-')
        result = num1 - num2;
    else if (operator == '*')
        result = num1 * num2;
    else if (operator == '/')
        result = num1 / num2;
    else
    {
        printf("Invalid operator");
        return 0;
    }

    printf("Result = %.2lf\n", result);

    return 0;
}
