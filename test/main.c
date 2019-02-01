//
//  main.c
//  test
//
//  Created by Brieuc Caillot on 01/02/2019.
//  Copyright © 2019 Brieuc Caillot. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void getWeight(int *weight);
void getHeight(int *height);
void calcIMC(int *height, int *weight);

int main() {
    int weight = 0; // *pointer
    int height = 0; // *pointer
    getWeight(&weight);
    getHeight(&height);
    calcIMC(&height, &weight);
    return 0;
}

void getWeight(int *weight) {
    printf("%d \n", *weight);
    printf("Entrez votre poids: ");
    scanf("%d", weight);
}

void getHeight(int *height) {
    printf("%d \n", *height);
    printf("Entrez votre taille: ");
    scanf("%d", height);
}

void calcIMC(int *height, int *weight) {
    
    float imc = *weight / (pow(*height, 2) / 100) * 100 ;
    
    if (imc <= 16.5) {
        printf("Famine \n");
    } else if (imc > 16.5 && imc <= 18.5) {
        printf("Maigreu \n");
    } else if (imc > 18.5 && imc <= 25) {
        printf("Corpulence normale \n");
    } else if (imc > 25 && imc <= 30) {
        printf("Surpoids \n");
    } else if (imc > 30 && imc <= 35) {
        printf("Obesité mesurée \n");
    } else if (imc > 35 && imc <= 40) {
        printf("Obesité sevère \n");
    } else {
        printf("Obésité morbide ou massive \n");
    }
}
