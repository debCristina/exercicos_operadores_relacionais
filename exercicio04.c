#include<stdio.h>

main(){

    //4. Leia o peso e imprima se é menor que 60kg;

    float peso;

    printf("Informe o seu peso: ");
    scanf("%f", &peso);

    if(peso < 60){
        printf("Voce tem menos que 60 kg");

    }else{
        printf("Voce possui mais ou o equivalente a 60 kg");
    }


}