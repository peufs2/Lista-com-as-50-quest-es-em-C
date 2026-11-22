#include <stdio.h>

int main () {
	
	float celsius;
	float fahrenheit;
	
	printf("Digite a temperatura que está fazendo em celsius: " );
	scanf ("%f", &celsius);
	
	fahrenheit = celsius * 1.8 + 32;
	
	printf("Conversor de temperaturas:\n");
	printf("Celsius %.2f\n", celsius);
	printf("Fahrenheit %.2f\n", fahrenheit);
	
	return 0; 	
	
}