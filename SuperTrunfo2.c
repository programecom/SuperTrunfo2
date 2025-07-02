#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

    // variaveis da carta 1
    char estado[20];
    char codigo[20];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int numero;
    float populacaoArea1;
    float populacaPIB1;
    float popoulacaoAreaPIB1;
    float superPoder1;

    // variaves da carta 2
    char estado2[20];
    char codigo2[20];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero2;
    float populacaoArea2;
    float populacaPIB2;
    float popoulacaoAreaPIB2;
    float superPoder2;

    //**dados da carta 1 que devem aparecer */

    // estado = paraiba
    // codigo = "A01
    // nome da cidade = cajazeiras
    // populacao = 63239
    // area = 562.703
    // PIB = 1.20
    // numero de pontos turisticos = 50

     //**dados da carta 2 que devem aparecer */
    
    // estado = céara
    // codigo = B01
    // nome da cidade = fortaleza
    // populacao = 2428708
    // area = 321.353
    // PIB = 73.40
    // numero de pontos turisticos = 150


    // inserir dados da carta 1: 
    printf("*** Dados da carta 1: *** \n");
    printf("\n"); // comando usado para pular uma linha extra
    printf("Digite seu estado: \n"); //comando usando para impressão de informações 
    scanf("%s", estado); //comando usado para entrada de dados

    printf("Digite seu codigo: \n");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome);

    printf("Digite sua população: \n");
    scanf("%lu", &populacao);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite seu pib: \n");
    scanf("%f", &pib);

    printf("Digite seu numero de pontos turisticos: \n");
    scanf("%d", &numero);
    printf("\n");

    // Inserir dados da carta 2:
    printf("*** Dados da carta 2: *** \n");
    printf("\n");
    printf("Digite seu estado: \n");
    scanf("%s", estado2);

    printf("Digite seu codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome2);

    printf("Digite sua população: \n");
    scanf("%lu", &populacao2);

    printf("Digite sua area: \n");
    scanf("%f", &area2);

    printf("Digite seu pib: \n");
    scanf("%f", &pib2);

    printf("Digite seu numero de pontos turisticos: \n");
    scanf("%d", &numero2);
    printf("\n");

    // resultado da carta 1
    printf("    Resultado da Carta 1 é: \n");
    printf("\n");
    printf("O Estado é: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("O Nome da Cidade é: %s\n", nome);   
    printf("A População é: %lu\n", populacao); 
    printf("A aréa é: %f Km²\n", area);
    printf("O pib é: %f Bilhões de Reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numero);
    printf("\n");

    ////Calculo da densidade populacional e do pib per capita da carta 1
    populacaoArea1 = (float)populacao / area; //densidade populacional

    printf("A densidade populacional é: %f hab/km²\n", populacaoArea1);

    populacaPIB1 = (pib * 1000000000.0) / populacao; //pib per capita

    printf("PIB per capita: %f Reais\n", populacaPIB1);

    popoulacaoAreaPIB1 = area / pib; // densidade demografica

    printf("Calculo da densidade populacional e PIB per capita da carta 1 é: %f\n", popoulacaoAreaPIB1);

    superPoder1 = (populacao + area + pib + numero + populacaPIB1 + popoulacaoAreaPIB1); // calculo do super poder

    printf("Super poder da carta 1 é: %.4f\n", superPoder1);
    printf("\n");


      // resultado da carta 2
    printf("    Resultado da Carta 2 é: \n");
    printf("O Estado é: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("O Nome da Cidade é: %s\n", nome2);   
    printf("A População é: %lu\n", populacao2); 
    printf("A aréa é: %f Km²", area2);
    printf("O pib é: %f Bilhões de Reais \n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numero2);

    //Calculo da densidade populacional e do pib per capita da carta 2
    populacaoArea2 = (float)populacao2 / area2; // Densidade populacional
    printf("A densidade populacional é: %f hab/km²\n", populacaoArea2);

    populacaPIB2 = (pib2 * 1000000000.0) / populacao2;
    printf("PIB per capita: %f Reais\n", populacaPIB2);
    
    popoulacaoAreaPIB2 = area2 / pib2; //densidade demografica

    printf("Calculo da densidade populacional e PIB per capita da carta 2 é: %f\n", popoulacaoAreaPIB2);

    superPoder2 = (populacao2 + area2 + pib2 + numero2 + populacaPIB2 +  populacaoArea2); // calculo do super poder

    printf("Super poder da carta 2 é: %.4f\n", superPoder2);
    printf("\n");

    //comparação das cartas 

    printf(" Comparação das Cartas\n");
    printf("\n");
    printf("Populacão: Carta 1 venceu %d\n", populacao > populacao2);
    printf("Populacão: Carta 2 venceu %d\n", populacao < populacao2);
    printf("Aréa: Carta 1 venceu %d\n", area > area2);
    printf("Aréa: Carta 2 venceu %d\n", area < area2);
    printf("PIB: Carta 1 venceu %d\n", pib > pib2);
    printf("PIB: Carta 2 venceu %d\n", pib < pib2);
    printf("Numero de Pontos turisticos: Carta 1 venceu %d\n", numero > numero2);
    printf("Numero de Pontos turisticos: Carta 2 venceu %d\n", numero < numero2);
    printf("Densidade Populacional: Carta 1 venceu %d\n", populacaoArea1 < populacaoArea2);
    printf("Densidade Populacional: Carta 2 venceu %d\n", populacaoArea1 > populacaoArea2);
    printf("PIB per capita: Carta 1 venceu %d\n", populacaPIB1 > populacaPIB2);
    printf("PIB per capita: Carta 1 venceu %d\n", populacaPIB1 < populacaPIB2);
    printf("Super Poder: Carta 1 venceu %d\n", superPoder1 > superPoder2);
    printf("Super Poder: Carta 2 venceu %d\n", superPoder1 < superPoder2);
    printf("\n");

    // comparação de atributos usando if-else
    printf("Compação de Atributo: (PIB per capita) \n");
    printf("\n");
    printf("Carta 1 - %s ", nome);
    printf(" %s ", estado);
    printf(" %f\n ", populacaPIB1);
    printf("\n");
    printf("Carta 2 - %s ", nome2);
    printf(" %s ", estado2);
    printf(" %f\n ", populacaPIB2);
    printf("\n");
    

    if (populacaPIB1 > populacaPIB2)
    {
        printf("Resultado - Carta 1 (%s) Venceu!\n", nome);
    } else {
        printf("Resultado - Carta 2 (%s) Venceu!\n", nome2);
    }

    printf("\n");

    // primeiro menu interativo, usado apenas para compara um inuco atributo
    int opcao;

 printf("Menu Principal\n");
 printf("1. Nome dos Estados\n");
 printf("2. Comparar Atributos \n");
 printf("3.Sair\n");
 printf("Escolha uma Opção\n");
 scanf("%d", &opcao);

 switch (opcao)
 {
 case 1:
    printf("Carta 1 : %s\n", estado);
    printf("Carta 2 : %s\n", estado2);
    break;
 case 2:
    printf("1. Comparar População!\n");
    printf("2. Comparar Aréa!\n");
    printf("3. Comparar PIB!\n");
    printf("4. Comparar Número de Pontos Turísticos! \n");
    printf("5. Comparar Densidade Demografica!\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    // comparar a Populção
    case 1: if (populacao > populacao2)
    {
        printf(" Carta 1: %s Venceu! - %lu Habitantes \n", nome, populacao);
        printf(" Carta 2: %s Perdeu! - %lu Habitantes \n", nome2, populacao2);
    } else if (populacao < populacao2)
    {
        printf(" Carta 1: %s Perdeu! - %lu Habitantes \n", nome, populacao);
        printf(" Carta 2: %s Venceu! - %lu Habitantes \n", nome2, populacao2);
    } else {
        printf("EMPATE\n");
        printf(" Carta 1: %s ! - %lu Habitantes \n", nome, populacao);
        printf(" Carta 2: %s ! - %lu Habitantes \n", nome2, populacao2);
    }
       break;
    //Comparar a Aréa
    case 2: if (area > area2)
    {
        printf(" Carta 1: %s Venceu! - %f Km² \n", nome, area);
        printf(" Carta 2: %s Perdeu! - %f Km² \n", nome2, area2);
    } else if (area < area2)
    {
        printf(" Carta 1: %s Perdeu! - %f Km² \n", nome, area);
        printf(" Carta 2: %s Venceu! - %f Km² \n", nome2, area2);
    } else {
        printf("EMPATE\n");
        printf(" Carta 1: %s ! - %f Bilhões de Reais \n", nome, area);
        printf(" Carta 2: %s ! - %f Bilhões de Reais  \n", nome2, area2);
    }
    break;
    //Comparar o PIB
    case 3: if (pib > pib2)
    {
        printf(" Carta 1: %s Venceu! - %f Bilhões de Reais  \n", nome, pib);
        printf(" Carta 2: %s Perdeu! - %f Bilhões de Reais  \n", nome2, pib2);
    } else if (pib < pib2)
    {
        printf(" Carta 1: %s Perdeu! - %f Bilhões de Reais  \n", nome, pib);
        printf(" Carta 2: %s Venceu! - %f Bilhões de Reais  \n", nome2, pib2);
    } else {
        printf("EMPATE\n");
        printf(" Carta 1: %s ! - %f Bilhões de Reais  \n", nome, pib);
        printf(" Carta 2: %s ! - %f Bilhões de Reais  \n", nome2, pib2);
    }
    break;
    // Comparar Numero de pontos turisticos
    case 4: if (numero > numero2)
    {
        printf(" Carta 1: %s Venceu! - %d Pontos Turísticos  \n", nome, numero);
        printf(" Carta 2: %s Perdeu! - %d Pontos Turísticos \n", nome2, numero2);
    } else if (numero < numero2)
    {
        printf(" Carta 1: %s Perdeu! - %d Pontos Turísticos  \n", nome, numero);
        printf(" Carta 2: %s Venceu! - %d Pontos Turísticos  \n", nome2, numero2);
    } else {
        printf("EMPATE\n");
        printf(" Carta 1: %s ! - %d Pontos Turísticos  \n", nome, numero);
        printf(" Carta 2: %s ! - %d Pontos Turísticos  \n", nome2, numero2);
    }
    break;
    //Comparar Densidade Demografica
    case 5: if (populacaoArea1 < populacaoArea2) // a carta com menor valor vence 
    {
        printf(" Carta 1: %s Venceu! - %f Densidade populacional \n", nome, populacaoArea1);
        printf(" Carta 2: %s Perdeu! - %f Densidade populacional \n", nome2, populacaoArea2);
    } else if (populacaoArea1 > populacaoArea2)
    {
        printf(" Carta 1: %s Perdeu! - %f Densidade populacional \n", nome, populacaoArea1);
        printf(" Carta 2: %s Venceu! - %f Densidade populacional \n", nome2, populacaoArea2);
    } else {
        printf("EMPATE\n");
        printf(" Carta 1: %s ! - %f Densidade populacional  \n", nome, populacaoArea1);
        printf(" Carta 2: %s ! - %f Densidade populacional \n", nome2, populacaoArea2);
    }
    break;
    default:
        printf("Opcão invalida\n");
        break;
    }
    break;
 case 3:
    printf("Saindo do Jogo\n");
    break;   
 default:
    printf("Opcão invalida\n");
    break;
 }

 
 // incluindo sistema de comparação de 2 atributos diferentes 


 int resultado1, resultado2;
 char primeiroAtributo, segundoAtributo;


// inicio do jogo com menu interativo para comparar dois atributos diferentes

 printf("Bem-Vindo ao Jogo \n");
 printf("\n");
 printf("1. Nome dos Estados\n");
 printf("2. Comparar Atributos \n");
 printf("3.Sair\n");
 printf("Escolha uma Opção\n");
 scanf("%d", &opcao);

 switch (opcao)
 {
 case 1:
    printf("Carta 1 : %s\n", estado);
    printf("Carta 2 : %s\n", estado2);
    break;
 case 2:
    printf(" *** Escolha o Atributo ***\n");
    printf("A. Comparar População!\n");
    printf("B. Comparar Aréa!\n");
    printf("C. Comparar PIB!\n");
    printf("D. Comparar Número de Pontos Turísticos! \n");
    printf("E. Comparar Densidade Demografica!\n");
    
    printf("Escolha o seu Primeiro Atributo \n");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'a':    
    case 'A':
        printf("Você Escolheu: População \n");
        resultado1 = (populacao > populacao2) ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("Você Escolheu: Aréa \n");
        resultado1 = (area > area2) ? 1 : 0;
        break;    
    case 'C':
    case 'c':
        printf("Você Escolheu: PIB \n");
        resultado1 = (pib > pib2) ? 1 : 0;
        break; 
    case 'D':
    case 'd':
        printf("Você Escolheu: Pontos Turisticos \n");
        resultado1 = (numero > numero2) ? 1 : 0;
        break; 
    case 'E':
    case 'e':
        printf("Você Escolheu: Densidade Demografica \n");
        resultado1 = (populacaoArea1 < populacaoArea2) ? 1 : 0;
        break;          
    
    default:
        printf("Opção Invalida!");
        break;
    }
    
    printf(" *** Escolha o Segundo Atributo ***\n");
    printf("A. Comparar População!\n");
    printf("B. Comparar Aréa!\n");
    printf("C. Comparar PIB!\n");
    printf("D. Comparar Número de Pontos Turísticos! \n");
    printf("E. Comparar Densidade Demografica!\n");
    
    printf("Escolha o seu Segundo Atributo \n");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Opção invalida! Você escolheu o Mesmo Atributo\n");
    } else {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
        printf("Você Escolheu: População \n");
        resultado2 = (populacao > populacao2) ? 1 : 0;
        break;
        case 'B':
        case 'b':
        printf("Você Escolheu: Aréa \n");
        resultado2 = (area > area2) ? 1 : 0;
        break;    
        case 'C':
        case 'c':
        printf("Você Escolheu: PIB \n");
        resultado2 = (pib > pib2) ? 1 : 0;
        break; 
        case 'D':
        case 'd':
        printf("Você Escolheu: Pontos Turisticos \n");
        resultado2 = (numero > numero2) ? 1 : 0;
        break; 
        case 'E':
        case 'e':
        printf("Você Escolheu: Densidade Demografica \n");
        resultado2 = (populacaoArea1 < populacaoArea2) ? 1 : 0;
        break;          
    
    default:
        printf("Opção Invalida!");
        break;
    }
       
    if (resultado1 && resultado2)
    {
        printf("PARABÉNS VOCÊ GANHOU!!! \n");
    } else if (resultado1 != resultado2)
    {
        printf("VOCÊ EMPATOU! \n");
    } else {
        printf("VOCÊ PERDEU! \n");
    }
    

    }

    break;
 case 3:
    printf("Saindo do Jogo\n");
    break;   
 default:
    printf("Opcão invalida\n");
    break;
 }

    
    return 0;


}