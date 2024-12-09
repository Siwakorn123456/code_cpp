#include<stdio.h> 

main(void){
    float weight=0, height=0, calbmi; 
    
    printf("Your weight :"); 
    scanf("%f",&weight);
    
    printf("Your height (m):"); 
    scanf("%f",&height); \
    
    calbmi = weight / (height * height); 
    
    printf("Your BMI :%f\n", calbmi); 
    

    if (calbmi < 18.5) { 
        printf("Underweight\n");
    } else if (calbmi <= 22.9) {
        printf("Slim\n");
    } else if (calbmi <= 24.9) {
        printf("Overweight\n");
    } else if (calbmi <= 29.9) {
        printf("Obesity\n");
    } else {
        printf("Dangerous\n"); 
    }
}
