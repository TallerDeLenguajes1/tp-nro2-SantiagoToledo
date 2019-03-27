/*
Escribe un programa en el que se cargue una matriz de 15 filas con números enteros
aleatorios entre 100 y 999. Cada fila se cargará en forma dinámica. La cantidad de
columnas estará dada por un número aleatorio entre [5, 15]. Mostrar por pantalla la matriz.

a) Luego determinar para cada fila cuántos números son pares.

b) Por último generar un nuevo vector dinámico de 15 elementos con la cantidad de
pares por fila obtenidos en el punto anterior.

c) Subir los cambios al repositorio remoto
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>   


int main()
{

	int **arre,c ,f = 15,*pares,cont;	// columnas: c  filas: f

	srand (time(NULL));	//semilla 

	c = (rand() % 11) + 5;
	arre = (int **) malloc (sizeof(int) * 15 );

	for (int i = 0; i < f; i++)
	{	
		(arre[i]) = (int *) malloc (sizeof(int) * c);
		for (int j = 0; j < c; j++){
			(arre[i])[j] = (rand() % 900) + 100;
		}
	}

//--------------------MOSTRAR-----------------

	printf("Numero de columnas: %d\n", c);

	for (int i = 0; i < f; i++)
	{	
		printf("\n");
		for (int j = 0; j < c; j++){
			printf(" %d ", (arre[i])[j]);
		}
	}	
//---------------------PARES-------------------

	pares = (int *) malloc ( sizeof(int) * 15 );

	for (int i = 0; i < f; i++)
	{
		cont = 0;
		for (int j = 0; j < c; j++){
			if( (arre[i])[j] % 2 == 0 )		cont++;
		}
		pares[i] = cont;
	}


	printf("\n\nVector cantidad de pares por filas: ");
	for (int i = 0; i < f; ++i)
		{
			printf(" %d ", pares[i]);
		}	

	return 0;
}