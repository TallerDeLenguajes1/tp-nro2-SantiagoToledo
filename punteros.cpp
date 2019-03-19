#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, Buff[5] = {5,15,40,10,35};
	int *p;
	p = Buff;B

	printf("\n\nArreglo, notacion subindexada: ");
	for(i=0 ; i<5 ; i++){
		printf("%d ", Buff[i]);
	}

	printf("\n\nPuntero, notacion aritmetica: ");
	for(i=0 ; i<5 ; i++){
		printf("%d ", *(p+i));	
	}
	
	printf("\n\nArreglo, notacion aritmetica: ");
	for(i=0 ; i<5 ; i++){
		printf("%d ", *(Buff+i));	
	}

	
	printf("\n\nDirecccion de memoria por arreglo: ");
	for(i=0 ; i<5 ; i++){
		printf("%p ", Buff+i);	
	}

	printf("\nDirecccion de memoria por puntero: ");
	for(i=0 ; i<5 ; i++){
		printf("%p ", p+i);	
	}


	printf("\nArreglo: %d\n", sizeof(Buff));
	printf("\nPuntero: %d\n", sizeof(p));
	return 0;
}