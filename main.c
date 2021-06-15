#include <stdio.h>

int main(void) {

    float temp, far;
    printf("Digite a temmperatura em Celsius:\n");
    scanf("%f", &temp);
    far = (9 * temp / 5) + 32;
    printf("A temperatura em Fahrenheit é %.1fF\n", far);


  return 0;
}