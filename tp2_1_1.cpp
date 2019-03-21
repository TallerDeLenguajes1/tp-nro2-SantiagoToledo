#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5

int main()
{
	int 	f,c,i=1;
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
			printf(" %.1f ", mt[f][c]);
		}
		printf("\n");
	}

	

	return 0;
}