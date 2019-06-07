#include<stdio.h>
#include<conio.h> //contene una funcionllamada sizeof

int main(){
	
	
	printf("la variable de tipo entero ocupa %d bytes de memoria\n\n", sizeof(int));
	printf("la variable de tipo entero corto ocupa %d bytes de memoria\n\n", sizeof(short int));
	printf("la variable de tipo entero largo ocupa %d bytes de memoria\n\n", sizeof(long int));
	printf("la variable de tipo flotante  ocupa %d bytes de memoria\n\n", sizeof(float));
	printf("los enteros con decimal ocupan %d bytes de memoria\n\n", sizeof(double));
    printf("los enteros largos con decimal ocuan %d bytes de memoria\n\n", sizeof(long double));
	printf("las varibles de tipo char (caracteres) ocupan %d bytes de memoria\n\n", sizeof(char));
				
		
	
	return 0;
}
