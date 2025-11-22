#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Find the last digit
    lastDigit = num % 10;
    
    // Count the number of digits - 1
    digits = (int)log10(num);
    
    // Find the first digit
    firstDigit = (int)(num / pow(10, digits));
    
    // Remove the first digit from the number
    swappedNum = num - firstDigit * pow(10, digits);
    
    // Add the last digit as the first digit
    swappedNum += lastDigit * pow(10, digits);
    
    // Remove the last digit from original position
    swappedNum = swappedNum - lastDigit;
    
    // Add the first digit as the last digit
    swappedNum += firstDigit;
    
    // Output the swapped number
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    
    return 0;
}
