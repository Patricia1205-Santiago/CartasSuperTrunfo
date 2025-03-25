#include <stdio.h>

typedef struct {
    int densidadePopulacional;
    int area;
    int recursosNaturais;
    int tecnologia;
    int educacao;
    int saude;
} Carta;

int compararDensidadePopulacional(Carta carta1, Carta carta2) {
    return carta1.densidadePopulacional < carta2.densidadePopulacional ? 1 : 0;
}

int compararOutrasPropriedades(Carta carta1, Carta carta2) {
    int soma1 = carta1.area + carta1.recursosNaturais + carta1.tecnologia + carta1.educacao + carta1.saude;
    int soma2 = carta2.area + carta2.recursosNaturais + carta2.tecnologia + carta2.educacao + carta2.saude;
    return soma1 > soma2 ? 1 : 0;
}

int calcularSuperPoder(Carta carta) {
    return carta.area + carta.recursosNaturais + carta.tecnologia + carta.educacao + carta.saude;
}

void exibirResultado(Carta carta1, Carta carta2) {
    int vitoriaDensidade = compararDensidadePopulacional(carta1, carta2);
    int vitoriaOutrasPropriedades = compararOutrasPropriedades(carta1, carta2);

    printf("Densidade Populacional: ");
    if (vitoriaDensidade) {
        printf("Carta 1 vence\n");
    } else {
        printf("Carta 2 vence\n");
    }

    printf("Outras Propriedades: ");
    if (vitoriaOutrasPropriedades) {
        printf("Carta 1 vence\n");
    } else {
        printf("Carta 2 vence\n");
    }

    printf("Super Poder Carta 1: %d\n", calcularSuperPoder(carta1));
    printf("Super Poder Carta 2: %d\n", calcularSuperPoder(carta2));

    if (calcularSuperPoder(carta1) > calcularSuperPoder(carta2)) {
        printf("Carta 1 vence no Super Poder\n");
    } else {
        printf("Carta 2 vence no Super Poder\n");
    }
}

int main() {
    Carta carta1, carta2;

    printf("Informe as propriedades da Carta 1:\n");
    printf("Densidade Populacional: ");
    scanf("%d", &carta1.densidadePopulacional);
    printf("Área: ");
    scanf("%d", &carta1.area);
    printf("Recursos Naturais: ");
    scanf("%d", &carta1.recursosNaturais);
    printf("Tecnologia: ");
    scanf("%d", &carta1.tecnologia);
    printf("Educação: ");
    scanf("%d", &carta1.educacao);
    printf("Saúde: ");
    scanf("%d", &carta1.saude);

    printf("\nInforme as propriedades da Carta 2:\n");
    printf("Densidade Populacional: ");
    scanf("%d", &carta2.densidadePopulacional);
    printf("Área: ");
    scanf("%d", &carta2.area);
    printf("Recursos Naturais: ");
    scanf("%d", &carta2.recursosNaturais);
    printf("Tecnologia: ");
    scanf("%d", &carta2.tecnologia);
    printf("Educação: ");
    scanf("%d", &carta2.educacao);
    printf("Saúde: ");
    scanf("%d", &carta2.saude);

    exibirResultado(carta1, carta2);

    return 0;
}
