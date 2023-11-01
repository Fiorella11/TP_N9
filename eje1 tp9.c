#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ceros (int matriz[][4])
{
	int i,j,contador=0;
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			if (matriz[i][j]==0)
			{
				contador++;
			}
		}
	}
	printf ("cantidad de ceros en la matriz: %d",contador);
}

int main() {
	srand (time(NULL));
	int i,j,num;
	int matriz[4][4]={0}; 
		
	matriz[4][4]=rand() % 10;
	
	printf ("la matriz aleatoria es:\n");
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			num = rand() % 10;
			matriz[i][j]=num;
			printf ("%d ",matriz[i][j]);
		}
		printf ("\n");
		
	}
	ceros (matriz);
	
	return 0;
}
