#include <stdio.h>
#include <stdlib.h>

void diagonal (int matrizUno[3][3],int matrizDos[3][3])
{
	int i,j,contador=0;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if(i==j)
			{
				if(matrizUno[i][j]==matrizDos[i][j])
				{
				contador++;
				}
			}
		}
	}
	if (contador==3)
	{
		printf ("la diagonal de la primera matriz es igual al de la segunda matriz\n");
	}
	else
	{
		printf ("no son iguales ambas diagonales\n");
	}
	
	printf ("primera matriz:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",matrizUno[i][j]);
		}
		printf ("\n");
	}
	printf ("segunda matriz:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",matrizDos[i][j]);
		}
		printf ("\n");
	}
}

int main() {
	
	int matrizUno[3][3]={0};
	int matrizDos[3][3]={0};
	int i,j;
	
	printf ("ingrese valores para la primera matriz\n");
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("fila %d y columna %d: ",i+1,j+1);
			scanf ("%d",&matrizUno[i][j]);
		}
	}
	printf ("ingrese valores para la segunda matriz\n");
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("fila %d y columna %d: ",i+1,j+1);
			scanf ("%d",&matrizDos[i][j]);
		}
	}
	diagonal (matrizUno,matrizDos);
	
	return 0;
}

