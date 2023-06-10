#include <stdlib.h>
#include <stdio.h>



int main() {
    float celsius, resultado;
    int escolha;
      
      
    do{
	
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    printf("\nEscolha a opcao de conversao:\n");
    printf("1. Fahrenheit\n");
    printf("2. Kelvin\n");
    printf("3. Rankine\n");
    printf("0. Sair");
    printf("Opcao: ");
    scanf("%d", &escolha);


    switch (escolha) {
        case 1:
            resultado = (celsius * 9 / 5) + 32;
            printf("\n%.2f graus Celsius sao %.2f graus Fahrenheit.\n", celsius, resultado);
            break;
        case 2:
            resultado = celsius + 273.15;
            printf("\n%.2f graus Celsius sao %.2f graus Kelvin.\n", celsius, resultado);
            break;
        case 3:
            resultado = (celsius + 273.15) * 9 / 5 + 491.67;
            printf("\n%.2f graus Celsius sao %.2f graus Rankine.\n", celsius, resultado);
            break;
        case 0:
        	printf("\ndesenvolvido por: Vinicius de souza silva\n");
        	exit(0);
        	break;
        default:
            printf("\nOpcao invalida.\n");
           
    }
    
    }while(escolha!=0);

    return 0;
}
