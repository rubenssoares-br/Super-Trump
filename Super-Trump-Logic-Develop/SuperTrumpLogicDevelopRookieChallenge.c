#include <stdio.h>
#include <string.h>

int main() {
    char card1_state[3];
    char card1_letterCode[5];
    char card1_cityName[50];
    int card1_population;
    float card1_area;
    float card1_pib;
    int card1_touristAttractions;
    float card1_populationDensity;
    float card1_gdpPerCapita;

    char card2_state[3];
    char card2_letterCode[5];
    char card2_cityName[50];
    int card2_population;
    float card2_area;
    float card2_pib;
    int card2_touristAttractions;
    float card2_populationDensity;
    float card2_gdpPerCapita;

    const char* comparison_attribute = "population";

    printf("--- Enter Data for Card 1 ---\n");
    printf("State (e.g., SP): ");
    scanf("%2s", card1_state);
    getchar();

    printf("Letter Code: ");
    scanf("%4s", card1_letterCode);
    getchar();

    printf("City Name: ");
    fgets(card1_cityName, sizeof(card1_cityName), stdin);
    card1_cityName[strcspn(card1_cityName, "\n")] = 0;

    printf("Population: ");
    scanf("%d", &card1_population);

    printf("Area (in km²): ");
    scanf("%f", &card1_area);

    printf("PIB (in billions of reais): ");
    scanf("%f", &card1_pib);

    printf("Number of Tourist Attractions: ");
    scanf("%d", &card1_touristAttractions);

    card1_populationDensity = (card1_area > 0) ? (float)card1_population / card1_area : 0;
    card1_gdpPerCapita = (card1_population > 0) ? (card1_pib / card1_population) * 1000000000 : 0;

    printf("\n--- Enter Data for Card 2 ---\n");
    printf("State (e.g., RJ): ");
    scanf(" %2s", card2_state);
    getchar();

    printf("Letter Code: ");
    scanf("%4s", card2_letterCode);
    getchar();

    printf("City Name: ");
    fgets(card2_cityName, sizeof(card2_cityName), stdin);
    card2_cityName[strcspn(card2_cityName, "\n")] = 0;

    printf("Population: ");
    scanf("%d", &card2_population);

    printf("Area (in km²): ");
    scanf("%f", &card2_area);

    printf("PIB (in billions of reais): ");
    scanf("%f", &card2_pib);

    printf("Number of Tourist Attractions: ");
    scanf("%d", &card2_touristAttractions);

    card2_populationDensity = (card2_area > 0) ? (float)card2_population / card2_area : 0;
    card2_gdpPerCapita = (card2_population > 0) ? (card2_pib / card2_population) * 1000000000 : 0;

    printf("\n--- Card 1 Registered Data ---\n");
    printf("City: %s (%s)\n", card1_cityName, card1_state);
    printf("Population