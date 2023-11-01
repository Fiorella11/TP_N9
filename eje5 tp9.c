#include <stdio.h>
#include <stdlib.h>

void suma (int matriz[][12])
{
	int i,j,sumaCincoFi=0;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<12; j++)
		{
			sumaCincoFi+= matriz[i][j];
		}
	}
	printf ("la suma de las primeras cinco filas es: %d\n",sumaCincoFi);
	
}

void negativos(int matriz[][10])
{
	int i,j,cantNegativos=0;
	
	for (i=0; i<15; i++)
	{
		for (j=0; j<12; j++)
		{
			if (matriz[i][j]<0)
			{
				cantNegativos++;
			}
		}
	}
	printf ("la cantidad de negativos entre la fila 5 y 9 son: %d",cantNegativos);
	
}

int main() {
	
	int matriz[15][12]={0};
	int i,j,valorMenor=1000000;
	int sumaCincoFi=0,cantNegativos=0;
	
	printf ("ingrese valores para la\n");
	
	for (i=0; i<15; i++)
	{
		for (j=0; j<12; j++)
		{
			printf ("fila %d y columna %d: ",i+1,j+1);
			scanf ("%d",&matriz[i][j]);
			
			if (matriz[i][j]<valorMenor)
			{
				valorMenor=matriz[i][j];
			}
		}
	}
	printf ("el valor menor del arreglo es: %d\n",valorMenor);
	
	suma (matriz);
	negativos (matriz);
	
	
	return 0;
}

