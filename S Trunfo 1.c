#include <stdio.h>

// Definição de estrutura para a carta
struct carta
{
    char estado;
    char codigo_carta[4];
    char nome_cidade[50];
    int populacao;
    float area_km2;
    float pib;
    int num_pontos_turisticos;
    float num_densidade;
    float pib_capita;
};

// Função para exibir os dados da carta
void exibir_carta(struct carta t)
{
    printf("---- Dados da Carta ----\n");
    printf("Estado: %c\n", t.estado);
    printf("Codigo da Carta: %s\n", t.codigo_carta);
    printf("Nome da Cidade: %s\n", t.nome_cidade);
    printf("População: %d habitantes\n", t.populacao);
    printf("Area: %.2f km2\n", t.area_km2);
    printf("PIB: %.2f\n", t.pib);
    printf("Numero de Pontos Turisticos: %d\n", t.num_pontos_turisticos);
    printf("Densidade Populacional: %f\n", t.num_densidade);
    printf("PIB per Capita: %.3f\n", t.pib_capita);
}

// Função para calcular a densidade e o PIB per capita
void calcular_dados(struct carta *c)
{
    c->num_densidade = (float)c->populacao / c->area_km2;
    c->pib_capita = c->pib / (float)c->populacao;
}

int main()
{
    // Declaração de duas cartas
    struct carta carta1, carta2;

    // Coleta de dados da carta1
    printf("---- Insira os dados da primeira carta ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo_carta);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1.nome_cidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1.area_km2);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    // Calcula os dados
    calcular_dados(&carta1);

    // Coleta de dados da carta2
    printf("\n---- Insira os dados da proxima carta ----\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta2.codigo_carta);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2.nome_cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2.area_km2);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    // Calcula os dados derivados
    calcular_dados(&carta2);

    // Exibição de dados
    printf("\n Dados Cadastrais \n\n");

    printf(" Carta 1 \n");
    exibir_carta(carta1);

    printf("\n Carta 2 \n");
    exibir_carta(carta2);

    // ------------------------Comparando com o maior vencendo------------------------

    // Compara as cartas
    // printf(" Comparação de Cartas \n\n");

    // Exibe os valores de população de cada carta
    // printf("Carta 1 - %s (%s): %d\n", carta1.nome_cidade, carta1.estado, carta1.populacao);
    // printf("Carta 2 - %s (%s): %d\n", carta2.nome_cidade, carta2.estado, carta2.populacao);

    // Compara os valores e exibe o vencedor
    // if (carta1.populacao > carta2.populacao)
    // {
    //     printf("Carta 1 Venceu: (%s) \n", carta1.nome_cidade);
    // }
    // else
    // {
    //     (carta1.populacao > carta2.populacao);

    //     printf("Carta 2 Venceu: (%s) \n", carta2.nome_cidade);
    // }

    //----------------------------------------------------------------------------------

        // ------------------------Comparando com o memor vencendo------------------------

    //Comparação de cartas (Atributo: Densidade Populacional)
    printf("\n Comparação de cartas \n\n");

    printf("Carta 1 - %s (%s): %f\n", carta1.nome_cidade, carta1.estado, carta1.num_densidade);
    printf("Carta 2 - %s (%s): %f\n", carta2.nome_cidade, carta2.estado, carta2.num_densidade);

    if (carta1.num_densidade < carta2.num_densidade)
    { // O MENOR valor vence!
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    }
    else
    {
        (carta2.num_densidade < carta1.num_densidade);
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    }
    return 0;
}