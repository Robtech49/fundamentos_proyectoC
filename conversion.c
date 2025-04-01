#include <stdio.h>

#define TASA_DOLAR 0.13  // 1 Quetzal = 0.13 USD (ejemplo)
#define TASA_EURO  0.12  // 1 Quetzal = 0.12 EUR (ejemplo)

int main() {
    float quetzales, dolares, euros;
    
    // Solicitar cantidad en quetzales
    printf("Ingrese la cantidad en Quetzales (GTQ): ");
    scanf("%f", &quetzales);
    
    // Conversión
    dolares = quetzales * TASA_DOLAR;
    euros = quetzales * TASA_EURO;
    
    // Mostrar resultados
    printf("\n%.2f Quetzales equivalen a:\n", quetzales);
    printf("%.2f Dólares (USD)\n", dolares);
    printf("%.2f Euros (EUR)\n", euros);
    
    return 0;
}
