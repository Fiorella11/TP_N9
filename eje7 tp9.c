#include <stdio.h>
#include <stdlib.h>

void negativos (int matriz[][3])
{
	int i,j;
	for (i=0; i<12; i++)
	{
		for (j=0; j<19; j++)
		{
			if (matriz[i][j]<0)
			{
				matriz[i][j]=0;
			}
		}
	}
	printf ("matriz nueva:\n");
	for (i=0; i<12; i++)
	{
		for (j=0; j<19; j++)
		{
			printf ("%d ",matriz[i][j]);
		}
		printf ("\n");
	}
}printf ("la cantidad de negativos entre la fila 5 y 9 son: %d",cantNegativos);

int main() {
	
	int i,j;
	int matriz[12][19]={0};
	
	printf ("ingrese valores para la\n");
	
	for (i=0; i<12; i++)
	{
		for (j=0; j<19; j++)
		{
			printf ("fila %d y columna %d: ",i+1,j+1);
			scanf ("%d",&matriz[i][j]);
		}
	}
	
	negativos (matriz);
	
	return 0;
}

