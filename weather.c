#include <stdio.h>

int main() {
    char city[50];
    char condition[50];
    float temperature;
    int humidity;

    // Collecting weather data from the user
    printf("Enter the city name: ");
    scanf("%s", city);

    printf("Enter the weather condition (e.g., Sunny, Rainy): ");
    scanf("%s", condition);

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("Enter the humidity percentage: ");
    scanf("%d", &humidity);

    // Displaying the weather report
    printf("\nWeather Report for %s:\n", city);
    printf("Condition: %s\n", condition);
    printf("Temperature: %.2f °C\n", temperature);
    printf("Humidity: %d%%\n", humidity);

    return 0;
}