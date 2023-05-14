#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    printf("Welcome to the Scientific Calculator\n");
    printf("-----------------------------------\n");
    printf("Please select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Logarithm\n");
    printf("-----------------------------------\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("The sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("The difference between %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("The product of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 == 0) {
                printf("Error: division by zero\n");
            } else {
                result = num1 / num2;
                printf("The quotient of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
            }
            break;
        case 5:
            printf("Enter a base number: ");
            scanf("%lf", &num1);
            printf("Enter an exponent: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            printf("%.2lf raised to the power of %.2lf is: %.2lf\n", num1, num2, result);
            break;
        case 6:
            printf("Enter a number to find its square root: ");
            scanf("%lf", &num1);
            if(num1 < 0) {
                printf("Error: square root of a negative number\n");
            } else {
                result = sqrt(num1);
                printf("The square root of %.2lf is: %.2lf\n", num1, result);
            }
            break;
        case 7:
            printf("Enter a number to find its logarithm: ");
            scanf("%lf", &num1);
            if(num1 <= 0) {
                printf("Error: logarithm of a non-positive number\n");
            } else {
                result = log10(num1);
                printf("The logarithm of %.2lf is: %.2lf\n", num1, result);
            }
            break;
        default:
            printf("Error: invalid choice\n");
    }
    return 0;
}
