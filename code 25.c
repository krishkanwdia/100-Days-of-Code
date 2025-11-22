#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;
    
    // Input operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    
    // Input two operands
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    
    return 0;
}
