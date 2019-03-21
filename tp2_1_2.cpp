#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5

int main()
{
	int 	f,c,i=0;
	double mt[M][N];



	for(f = 0 ; f<M ; f++){
		for (c = 0; c<N ; c++)
		{
			mt[f][c] = 1+i;
			i++;
		}
		printf("\n");
	}
	

	for(f = 0 ; f<M ; f++){
		for (c = 0; c<N ; c++)
		{
			printf(" %.1lf ", mt[0][0]+c+f*N);
		}
		printf("\n");
	}	

	return 0;
}