#include <stdio.h>
#include <string.h>

int main() {
	char state;
	char letterCode[4];
	char cityName[20];
	int population;
	float area;
	float pib;
	int numberTouristAttractions;
	double populationDensity;
	double gdpPerCapita;

	printf("Letter 1: \n");

	printf("State: ");
	scanf("%c", &state);

	printf("Letter Code: ");
	scanf("%s", letterCode);

	printf("City Name: ");
	scanf("%s", cityName);

	printf("Population: ");
	scanf("%d", &population);

	printf("Area: ");
	scanf("%f", &area);

	printf("PIB: ");
	scanf("%f", &pib);

	printf("Number of Tourist Attractions: ");
	scanf("%d", &numberTouristAttractions);

	populationDensity = (double)population / area;

	gdpPerCapita = (pib * 1000000000) / population;

	printf("\nLetter 1 respective stored data: \n");
	printf("%c\n", state);
	printf("%s\n", letterCode);
	printf("%s\n", cityName);
	printf("%d\n", population);
	printf("%f km\u00B2\n", area);
	printf("%.2f billions of reais \n", pib);
	printf("%d\n", numberTouristAttractions);
	printf("Population Density: %.2f hab/km\u00B2\n", populationDensity);
	printf("GDP Per Capita: %.2f reais\n", gdpPerCapita);

	printf("\nLetter 2: \n");

	printf("State: ");
	scanf(" %c", &state);

	printf("Letter Code: ");
	scanf("%s", letterCode);

	printf("City Name: ");
	fgets(cityName, sizeof(cityName), stdin);
	scanf("%s", cityName);

	printf("Population: ");
	scanf("%d", &population);

	printf("Area: ");
	scanf("%f", &area);

	printf("PIB: ");
	scanf("%f", &pib);

	printf("Number of Tourist Attractions: ");
	scanf("%d", &numberTouristAttractions);

	populationDensity = (double)population / area;

	gdpPerCapita = (pib * 1000000000) / population;

	printf("\nLetter 2 respective stored data: \n");
	printf("%c\n", state);
	printf("%s\n", letterCode);
	printf("%s\n", cityName);
	printf("%d\n", population);
	printf("%f km\u00B2\n", area);
	printf("%.2f billions of reais \n", pib);
	printf("%d\n", numberTouristAttractions);
	printf("Population Density: %.2f hab/km\u00B2\n", populationDensity);
	printf("GDP Per Capita: %.2f reais\n", gdpPerCapita);

	return 0;
}