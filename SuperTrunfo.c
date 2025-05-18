#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis para a primeira carta
    char Estado1;
    char CodigoDaCarta1[3];
    char Cidade1[100];
    unsigned long int Populacao1 = 0;
    float Area1 = 0;
    float PIB1 = 0;
    float DensidadePopulacional1 = 0;
    float PIBperCapita1 = 0;    
    int PontosTuristicos1 = 0;
    
    char Estado2;
    char CodigoDaCarta2[10];
    char Cidade2[20];
    unsigned long int Populacao2 = 0;
    float Area2 = 0;
    float PIB2 = 0;
    float DensidadePopulacional2 = 0;
    float PIBperCapita2 = 0;
    int PontosTuristicos2 = 0;
    
    int pontosCidade1 = 0;
    int pontosCidade2 = 0;

    

    // Lê os dados da primeira carta
    printf("Insira uma letra de A a H para o estado da primeira carta: \n");
    scanf(" %c", &Estado1);
    printf("Estado: %c\n", Estado1);
    
    // Lê os codigos da carta
    printf("Insira o Codigo da Carta com numeros de 01 a 04: \n");
    scanf(" %s", CodigoDaCarta1);
    printf("Codigo da Carta: %s\n", CodigoDaCarta1);
    
    // Lê o nome da cidade
    printf("Insira o nome da Cidade: ");
    getchar(); // Consome o caractere de nova linha
    fgets(Cidade1, sizeof(Cidade1), stdin);
    printf("Cidade: %s\n", Cidade1);

    // Lê a populacao
    printf("Insira a Populacao da cidade selecionada sem pontuacao: \n");
    scanf(" %lu", &Populacao1);
    printf("Populacao: %d\n", Populacao1);

    // Lê a area
    printf("Qual e a area da Cidade selecionada em mk²?: \n");
    scanf(" %f", &Area1);
    printf("Area: %.2f\n", Area1);
    
    // Lê o PIB
    printf("Qual o PIB da Cidade selecionada?: \n");
    scanf(" %f", &PIB1);
    printf("PIB: %.2f\n", PIB1);

    // Lê os pontos turisticos
    printf("Quantos pontos turisticos tem a Cidade que voce selecionou?: \n");
    scanf(" %d", &PontosTuristicos1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    
    
    DensidadePopulacional1 = Populacao1 / Area1;
    
    PIBperCapita1 = PIB1 / Populacao1;  

    // Variáveis para a segunda carta
    

    // Lê os dados da segunda carta
    printf("\nInsira uma letra de A a H para o estado da segunda carta: \n");
    scanf(" %c", &Estado2);
    printf("Estado: %c\n", Estado2);

    printf("Insira o Codigo da Carta com numeros de 01 a 04: \n");
    scanf(" %s", CodigoDaCarta2);
    printf("Codigo da Carta: %s\n", CodigoDaCarta2);

    printf("Insira o nome da Cidade: ");
    getchar();
    fgets(Cidade2, sizeof(Cidade2), stdin);
    printf("Cidade: %s\n", Cidade2);

    printf("Insira a Populacao da cidade selecionada sem pontuacao: \n");
    scanf(" %d", &Populacao2);
    printf("Populacao: %d\n", Populacao2);

    printf("Qual e a area da Cidade selecionada em mk²?: \n");
    scanf(" %f", &Area2);
    printf("Area: %.2f\n", Area2);

    printf("Qual o PIB da Cidade selecionada?: \n");
    scanf(" %f", &PIB2);
    printf("PIB: %.2f\n", PIB2);

    printf("Quantos pontos turisticos tem a Cidade que voce selecionou?: \n");
    scanf(" %d", &PontosTuristicos2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    DensidadePopulacional2 = Populacao2 / Area2;
    
    PIBperCapita2 = PIB2 / Populacao2;
  
    printf("Dados coletados...\n");
    
    // Imprime os dados da primeira carta
    printf("Dados de cadastro a seguir... \n");
    printf("\nDados da primeira carta:\n");
    printf("Codigo da Carta: %c%s\n", Estado1, CodigoDaCarta1);
    printf("Cidade: %s", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.30f\n", PIBperCapita1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
   

    // Imprime os dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Codigo da Carta: %c%s\n", Estado2, CodigoDaCarta2);
    printf("Cidade: %s", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.30f\n", PIBperCapita2); 
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("\nSuas cartas foram cadastardas com sucesso!\n");

    
    // Inicia o duelo de cartas
    printf("\nBem vindo ao Duelo de Cartas: Qual cidade sera a vencedora desse duelo? \n1 para a primeira carta e 0 para a Segunda carta cadastrada!\n");

    printf("\nQual cidade tem a maior populacao? \n");
    printf("A cidade com a maior populacao e? %d\n", Populacao1 > Populacao2 );
   
    printf("\nQual cidade tem a maior area? \n");
    printf("A cidade com a maior area e? %d\n", Area1 > Area2 );
    
    printf("\nQual cidade com o maior PIB? \n");
    printf("A cidade com o maior PIB e? %d\n", PIB1 > PIB2 );

    
    printf("\nQual cidade tem a Densidade Populacional mais forte? sendo 0 para a cidade 1 e 1 para a cidade dois \n");
    printf("A Densidade Populacional vencedora e? %d\n", DensidadePopulacional1 < DensidadePopulacional2 );

    printf("\nQual cidade tem o maior PIB per Capita? \n");
    printf("A cidade com o maior PIB per Capita e? %d\n", PIBperCapita1 > PIBperCapita2 );

    printf("\nQual cidade tem o maior numero de pontos turisticos? \n");
    printf("A cidade com o maior numero de pontos turisticos e? %d\n", PontosTuristicos1 > PontosTuristicos2 );

    float somaCidade1 = Populacao1 + Area1 + PIB1 + DensidadePopulacional1 + PIBperCapita1 + PontosTuristicos1;
    float somaCidade2 = Populacao2 + Area2 + PIB2 + DensidadePopulacional2 + PIBperCapita2 + PontosTuristicos2;

    // Determina qual cidade usará o superpoder
    float superpoder = (somaCidade1 > somaCidade2);   
    printf("\nHORA DO SUPER PODER!!!? \n");
    printf("Qual cidade ira usar o super poder? 1 para a primeira Cidade e 0 para a segunda cidade \n");
    printf("\n Cidade %d usou o Super Poder!\n", superpoder);
   
    // Inicio a comparacão dos atributos e pontuação
    printf("\nHora de comparar os atributos!\n");

    if (Populacao1 > Populacao2) {
        printf("A cidade 1 venceu com a maior populacao!\n");
        pontosCidade1++; // Incrementa a pontuação da Cidade 1
    } else if (Populacao1 < Populacao2) {
        printf("A cidade 2 venceu com a maior populacao!\n");
        pontosCidade2++; // Incrementa a pontuação da Cidade 2
    } else {
        printf("As cidades tem a mesma populacao!\n");
    }

    if (Area1 > Area2) {
        printf("A cidade 1 venceu com a maior area!\n");
        pontosCidade1++; 
    } else if (Area1 < Area2) {
        printf("A cidade 2 venceu com a maior area!\n");
        pontosCidade2++; 
    } else {
        printf("As cidades tem a mesma area!\n");
    }

    if (PIB1 > PIB2) {
        printf("A cidade 1 tem o maior PIB1!\n");
        pontosCidade1++; 
    } else if (PIB2 > PIB1) {
        printf("A cidade 2 tem o maior PIB!\n");
        pontosCidade2++; 
    } else {
        printf("as cidades tem o mesmo PIB!\n");
    }

    if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("A cidade 1 tem a maior Densidade Populacional!\n");
        pontosCidade1++; 
    } else if (DensidadePopulacional2 < DensidadePopulacional1) {
        printf("A cidade 2 tem a maior Densidade Populacional!\n");
        pontosCidade2++;
    } else {
        printf("As cidades tem a mesma Densidade Populacional!\n");
    }

    if (PIBperCapita1 > PIBperCapita2) {
        printf("A cidade 1 tem o maior PIB per Capita!\n");
        pontosCidade1++; 
    } else if (PIBperCapita2 > PIBperCapita1) {
        printf("A cidade 2 tem o maior PIB per Capita!\n");
        pontosCidade2++; 
        printf("As cidades tem o mesmo PIB per Capita!\n");
    }

    if (PontosTuristicos1 > PontosTuristicos2) {
        printf("A cidade 1 tem o maior numero de pontos turisticos!\n");
        pontosCidade1++; 
    } else if (PontosTuristicos2 > PontosTuristicos1) {
        printf("A cidade 2 tem o maior numero de pontos turisticos!\n");
        pontosCidade2++; 
    } else {
        printf("As cidades tem o mesmo numero de pontos turisticos!\n");
    }

    // Determinar o vencedor com base nos pontos
    printf("\nResultados do Duelo:\n");
    printf("Cidade 1: %d pontos\n", pontosCidade1);
    printf("Cidade 2: %d pontos\n", pontosCidade2);

    if (pontosCidade1 > pontosCidade2) {
        printf("A cidade 1 venceu o duelo!\n");
    } else if (pontosCidade2 > pontosCidade1) {
        printf("A cidade 2 venceu o duelo!\n");
    } else {
        printf("O duelo terminou em empate!\n");
    }
 
  // Cálculo das somas
    float total1 = (float)Populacao1 + Area1 + PIB1 + DensidadePopulacional1 + PIBperCapita1 + (float)PontosTuristicos1;
    float total2 = (float)Populacao2 + Area2 + PIB2 + DensidadePopulacional2 + PIBperCapita2 + (float)PontosTuristicos2;

    // Comparação e impressão do maior total
    if (total1 > total2) {
        printf("A cidade com o maior valor somado e a cidade 1: %.2f\n", total1);
    } else if (total2 > total1) {
        printf("A cidade com o maior valor somado e a cidade 2: %.2f\n", total2);
    } else {
        printf("As cidades têm o mesmo valor somado: %.2f\n", total1);
    }

    return 0;
}