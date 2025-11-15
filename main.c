#include <stdio.h>

int main() {
    float weight;
    float height;
    float bmi;

    printf("INPUT \n");
    printf("WEIGHT? \n");
    scanf("%f", &weight);


    printf("HEIGHT? \n");
    scanf("%f", &height);   
 
    printf("OUTPUT \n");
    bmi = weight / (height * height);
    printf("BMI: %1.2f \n", bmi);
    
    return 0;
}
