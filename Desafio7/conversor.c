#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);


    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperatura em Fahrenheit: %.2f ºF\n", fahrenheit);

    return 0;
}

