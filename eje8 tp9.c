#include <stdio.h>
#include <stdlib.h>

void negativos (int matriz[][6])
{
	int i,j;
	int negativos=0;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<6; j++)
		{
			if (matriz[i][j]<0)
			{
				negativos++;
			}
		}
	}
	printf ("la cantidad de negativos son: %d\n",negativos);
}

void ceros(int matriz[][6])
{
	int i,j;
	int ceros=0;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<6; j++)
		{
			if(i==j)
			{
				if(matriz[i][j]==0)
				{
					ceros++;
				}
			}
		}
	}
	printf ("la cantidad de ceros en la diagonal principal son: %d",ceros);
}
	
int main() {
	
	int i,j;
	int matriz[5][6]={0};
	
	printf ("ingrese valores para la\n");
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<6; j++)
		{
			printf ("fila %d y columna %d: ",i+1,j+1);
			scanf ("%d",&matriz[i][j]);
		}
	}

	negativos (matriz);
	ceros (matriz);
	
	return 0;
}
