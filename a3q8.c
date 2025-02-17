#include <stdio.h>
#include <math.h>

int main() {
    int numbers[5];
    int sum = 0, max, min;
    float mean, variance = 0.0, std_dev;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize max and min with the first element
    max = min = numbers[0];

    // Compute sum, max, and min
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
    }

    // Compute mean (average)
    mean = sum / 5.0; // Use floating-point division

    // Compute variance
    for (int i = 0; i < 5; i++) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= 5.0;

    // Compute standard deviation
    std_dev = sqrt(variance);

    // Output results
    printf("\nAverage: %.2f", mean);
    printf("\nMax: %d, Min: %d", max, min);
    printf("\nStandard Deviation: %.2f\n", std_dev);

    return 0;
}

