#include <stdio.h>
/*
Autor: C�sar Gonz�lez
Entradas: limite
Salidas: jContador
Procedimiento general:
Leer hasta d�nde se va a contar.
Se hace un ciclo que determina los valores que tendr� cada l�nea.
Dentro del ciclo principal, uno secundario se efectuar� por cada iteraci�n del primero.
El ciclo secundario contar� desde 1 hasta el valor proporcionado por el primer ciclo.
En cada iteraci�n del segundo ciclo se va a imprimir el valor de su contador.
Terminando el segundo ciclo se hace un salto de l�nea.
 
QA
Entrada		Salida		Resultado
 
0		S/S		S/S
 
		1		1
3		1 2		1 2
		1 2 3		1 2 3
 
		1		1
		1 2		1 2
5		1 2 3		1 2 3
		1 2 3 4		1 2 3 4
		1 2 3 4 5		1 2 3 4 5
 
*/
int main(int argc, char *argv[]) {
	int iContador, jContador, limite;
	printf("Escribir el n�mero hasta donde se va a contar\n");
	/*Lectura*/
	scanf("%d",&limite);
	if(limite>0){
		/*Ciclo que da el n�mero de l�nea*/
		for(iContador=1; iContador<=limite;iContador++){
			/*Ciclo que cuenta desde 1 hasta iContador*/
			for(jContador=1;jContador<=iContador;jContador++){
				/*Salidas*/
				printf("%d ",jContador);
			}
			/*Salto de l�nea*/
			printf("\n");
		}
	}
	return 0;
}
