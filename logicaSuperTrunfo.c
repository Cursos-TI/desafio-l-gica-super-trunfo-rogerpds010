#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    char estado;
    char codigodacarta [10];
    char nomedacidade [30];
    unsigned long int populacao;
    float areaemkm;
    float PIB;
    int pontosturisticos;
    
    char Estado;
    char Codigodacarta [10];
    char Nomedacidade [30];
    unsigned long int Populacao;
    float Areaemkm;
    float pIB;
    int Pontosturisticos;
    
    printf("Digite uma letra entre A a H para identificar o Estado:\n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta:\n");
    scanf(" %[^\n]", codigodacarta);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomedacidade);
    
    printf("Digite a população:\n");
    scanf(" %lu", &populacao);
    
    printf("digite a área em KM²:\n");
    scanf(" %f",&areaemkm);
    
    printf("digite o PIB:\n");
    scanf(" %f",&PIB);
    
    printf("digite o número de pontos turísticos:\n");
    scanf(" %d",&pontosturisticos);
    
    //cadatro da segunda carta
    
    printf("\n");
    printf("Atenção!\nAgora vamos criar a segunda carta:\n");
    printf("\n");
    
    printf("Digite uma letra entre A a H para identificar o Estado:\n");
    scanf(" %c", &Estado);
    
    printf("Digite o código da carta:\n");
    scanf(" %[^\n]", Codigodacarta);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", Nomedacidade);
    
    printf("Digite a população:\n");
    scanf(" %lu", &Populacao);
    
    printf("digite a área em KM²:\n");
    scanf(" %f",&Areaemkm);
    
    printf("digite o PIB:\n");
    scanf(" %f",&pIB);
    
    printf("digite o número de pontos turísticos:\n");
    scanf(" %d",&Pontosturisticos);
    
    float pibpercapita = PIB / populacao;
    float densidade = populacao / areaemkm;
    
    float Pibpercapita = pIB / Populacao ;
    float Densidade = Populacao / Areaemkm;
    
    float superpoder = populacao + areaemkm + PIB + pontosturisticos + pibpercapita;
    float Superpoder = Populacao + Areaemkm + pIB + Pontosturisticos + Pibpercapita;
    
    printf("\nDADOS DA CARTA 01:\n");
    
    printf("Estado: %c\n",estado);
    printf("Código da carta: %s\n",codigodacarta);
    printf("Nome da cidade: %s\n",nomedacidade);
    printf("População: %lu\n",populacao);
    printf("Área: %.2f KM²\n",areaemkm);
    printf("PIB: %.2f bilhões de reais\n",PIB);
    printf("Números de pontos turísticos: %d\n",pontosturisticos);
    printf("Densidade populacional: %.2fhab/km²\n",densidade);
    printf("PIB per capita : %.2f reais\n",pibpercapita);
    printf("\n");
    
    printf("\nDADOS DA CARTA 02:\n");
    
    printf("Estado: %c\n",Estado);
    printf("Código da carta: %s\n",Codigodacarta);
    printf("Nome da cidade: %s\n",Nomedacidade);
    printf("População: %lu\n",Populacao);
    printf("Área: %.2f KM²\n",Areaemkm);
    printf("PIB: %.2f bilhões de reais\n",pIB);
    printf("Números de pontos turísticos: %d\n",Pontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n",Densidade);
    printf("PIB per capita : %.2f reais\n",Pibpercapita);
    printf("\n");
    
    /*printf("Comparação de Cartas:\n");
    
    printf("População: %d\n",populacao > Populacao);
    printf("Área: %d\n",areaemkm > Areaemkm);
    printf("PIB: %d\n",PIB > pIB);
    printf("Pontos Turísticos: %d\n",pontosturisticos > Pontosturisticos);
    printf("Densidade populacional: %d\n",densidade < Densidade);
    printf("PIB per capita: %d\n",pibpercapita > Pibpercapita);
    printf("Super Poder: %d\n",superpoder > Superpoder);*/
    
    int opcao;
    
    printf("\nComparação das cartas:\n");
    // País?
    printf("Ecolha uma das opções para ter uma comparação:\n");
    printf(" 1 . Os nomes das cidades serão comparados\n");
    printf(" 2 . A populaçao será comparada\n");
    printf(" 3 . A área em km² será comparada\n");
    printf(" 4 . O PIB será comparado\n");
    printf(" 5 . O número de pontos turísticos serão comparados\n");
    printf(" 6 . A densidade demográfica será comparada\n");
    printf("Opção:");
    scanf("%d",&opcao);
    
    switch (opcao)
    {
    case 1:
        printf("Cidade da carta 1 : %s - Cidade da carta 2 : %s \n",nomedacidade,Nomedacidade);
        break;
    case 2:
    if (populacao > Populacao){
        printf(" %s é a cidade Vencedora com: %lu habitantes!\n",nomedacidade,populacao);
    } else if (populacao < Populacao){
        printf(" %s é a cidade Vencedora com: %lu habitantes!\n",Nomedacidade,Populacao);
    } else {
        printf(" Houve um empate!\n");
    } break;
    case 3:
    if (areaemkm > Areaemkm){
        printf(" %s é a cidade Vencedora com uma área de: %2f KM²!\n",nomedacidade,areaemkm);
    } else if (areaemkm < Areaemkm){
        printf(" %s é a cidade Vencedora com uma área de: %2f KM²!\n",Nomedacidade,Areaemkm);
    } else {
        printf(" Houve um empate!\n");
    } break;
    case 4:
    if (PIB > pIB){
        printf(" %s é a cidade Vencedora com o PIB de: %.2f bilhões de reais!\n",nomedacidade,PIB);
    } else if (PIB < pIB){
        printf(" %s é a cidade Vencedora com o PIB de: %.2f bilhões de reais!\n",Nomedacidade,pIB);
    } else {
        printf(" Houve um empate!\n");
    } break;
    case 5:
    if (pontosturisticos > Pontosturisticos){
        printf(" %s é a cidade Vencedora com: %d pontos turísticos!\n",nomedacidade,pontosturisticos);
    } else if (pontosturisticos < Pontosturisticos){
        printf(" %s é a cidade Vencedora com: %d pontos turísticos!\n",Nomedacidade,Pontosturisticos);
    }  else {
        printf(" Houve um empate!\n");
    } break;
    case 6:
    if (densidade < Densidade){
        printf(" %s é a cidade Vencedora com uma densidade de: %.2f hab/km²!\n",nomedacidade,densidade);
    } else if (densidade > Densidade){
        printf(" %s é a cidade Vencedora com uma densidade de: %.2f hab/km²!\n",Nomedacidade,Densidade);
    } else {
        printf(" Houve um empate!\n");
    } break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    
    
    /*printf("População:");
    if (populacao > Populacao){
        printf(" %s é a cidade Vencedora!\n",nomedacidade);
    } else if (populacao < Populacao){
        printf(" %s é a cidade Vencedora!\n",Nomedacidade);
    } else {
        printf(" Houve um empate!\n");
    }
    printf("Àrea em km²:");
    if (areaemkm > Areaemkm){
        printf(" %s é a cidade Vencedora!\n",nomedacidade);
    } else if (areaemkm < Areaemkm){
        printf(" %s é a cidade Vencedora!\n",Nomedacidade);
    } else {
        printf(" Houve um empate!\n");
    }
    printf("PIB:");
    if (PIB > pIB){
        printf(" %s é a cidade Vencedora!\n",nomedacidade);
    } else if (PIB < pIB){
        printf(" %s é a cidade Vencedora!\n",Nomedacidade);
    } else {
        printf(" Houve um empate!\n");
    }
    printf("Pontos turísticos:");
    if (pontosturisticos > Pontosturisticos){
        printf(" %s é a cidade Vencedora!\n",nomedacidade);
    } else if (pontosturisticos < Pontosturisticos){
        printf(" %s é a cidade Vencedora!\n",Nomedacidade);
    }  else {
        printf(" Houve um empate!\n");
    }  
    printf("Densidade populacional:");
    if (densidade < Densidade){
        printf(" %s é a cidade Vencedora!\n",nomedacidade);
    } else if (densidade > Densidade){
        printf(" %s é a cidade Vencedora!\n",Nomedacidade);
    } else {
        printf(" Houve um empate!\n");
    }   
    printf("PIB per capita:");
    if (pibpercapita > Pibpercapita){
        printf(" %s é a cidade Vencedora!\n",nomedacidade);
    } else if (pibpercapita < Pibpercapita){
        printf(" %s é a cidade Vencedora!\n",Nomedacidade);
    } else {
        printf(" Houve um empate!\n");
    }   
    printf("Super poder:");
    if (superpoder > Superpoder){
        printf(" %s é a cidade Vencedora!\n",nomedacidade);
    } else if (superpoder < Superpoder){
        printf(" %s é a cidade Vencedora!\n",Nomedacidade);
    } else {
        printf(" Houve um empate!\n");
    }   
    */
    return 0;
    
    
    }
