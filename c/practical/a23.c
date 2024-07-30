/*Q23 Write a program that takes as input maximum 100 numbers from user
 (+ve integers) and calculates
 (I)sum 
 (ii) mean 
 (iii)standard deviation and 
 (iv) variance     */

#include <stdio.h>
#include <math.h>

#define MAX_NUMBERS 100

int main()
{
    int numbers[MAX_NUMBERS];
    int count = 0;
    int sum = 0;
    float mean = 0.0;
    float variance = 0.0;
    float standard_deviation = 0.0;

    // Input numbers
    printf("Enter up to %d positive integers (0 to stop):\n", MAX_NUMBERS);
    while (count < MAX_NUMBERS) {
        int n;
        scanf("%d", &n);
        if (n <= 0) break;
        numbers[count++] = n;
        sum += n;
    }

    // Calculate mean
    mean = (float)sum / count;

    // Calculate variance
    for (int i = 0; i < count; i++) {
        float diff = numbers[i] - mean;
        variance += diff * diff;
    }
    variance /= count;

    // Calculate standard deviation
    standard_deviation = sqrt(variance);

    // Output results
    printf("Sum: %d\n", sum);
    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard deviation: %.2f\n", standard_deviation);

    return 0;
}