#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100.0;

    // Calculate compound interest
    compound_interest = principal * pow((1 + rate / 100.0), time) - principal;

    // Display the results
    printf("Simple Interest = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);

    return 0;
}
