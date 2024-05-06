#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
	short v1, v2;
	char oper;
	float resultado;
	// Inicializo el USB
    stdio_init_all();
	// Demora para esperar la conexion
	sleep_ms(1000);
	// Cuanto ocupa cada tipo de dato
	printf("Un char ocupa %d byte\n", sizeof(char));
	printf("Un short ocupa %d bytes\n", sizeof(short));
	printf("Un int ocupa %d bytes\n", sizeof(int));
	printf("Un long int ocupa %d bytes\n", sizeof(long int));
	printf("Un float ocupa %d bytes\n", sizeof(float));
	printf("Un double ocupa %d bytes\n", sizeof(double));

    while (true) {
    	puts ("el primer digito es");
    	scanf ("%hd", &v1);
    	fflush (stdin);
    	puts ("el segundo digito es");
    	scanf ("%hd", &v2);
    	fflush (stdin);
        puts ("que operacion quiere hacer:");
        scanf ("%hd", &resultado);
        fflush (stdin);
    	scanf ("%c", &oper);
    	fflush (stdin);
        switch(oper){
            break;
          case('+'):
            resultado =v1+v2;
            break;
          case('-'):
            resultado = v1-v2;
            break;
          case('*'):
            resultado = v1*v2;
            break;
          case('/'):
            resultado = v1/v2;
            break;
        }
                puts ("el resultado es");
        printf("%f \n",resultado);
    }
    return 0;
}   