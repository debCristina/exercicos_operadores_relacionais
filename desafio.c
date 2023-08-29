#include<stdio.h>

main(){
    //leia a media de um aluno
    // Se media >= 7 -> APROVADO
    //Se media < 4 -> REPROVADO
    //Senao media>= 4 < 7 -> RECUPERACAO

    float nota1, nota2, media;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 7.0){
        printf("APROVADO");

    }else if(media < 4.0){
        printf("REPROVADO");

    }else{
        printf("RECUPERACAO");

    }

}

