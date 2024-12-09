#include <stdio.h>

main(void) {
    float height_cm, height_m, weight, BMI;
    
    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);
    
    height_m = height_cm / 100.0;
    
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    
    BMI = weight / (height_m * height_m);
    printf("Your BMI is %.2f\n", BMI);
   
	 }