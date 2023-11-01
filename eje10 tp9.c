#include <stdio.h>
#include <stdlib.h>

void filas (int matriz[][10])
{
	int sumaFilas[10]={0};
	int i,j;
	
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			sumaFilas[i]+=matriz[i][j];
		}
	}
	printf ("la suma de todas las filas es:\n");
	for (i=0; i<10; i++)
	{
		printf ("%d\t",sumaFilas[i]);
	}
}

void columnas (int matriz[][10])
{
	int sumaColumnas[10]={0};
	int i,j;
	
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			sumaColumnas[j]+=matriz[i][j];	
		}
	}
	
	printf ("\nla suma de todas las columnas es:\n");
	for (j=0; j<10; j++)
	{
		printf ("%d\n",sumaColumnas[j]);
	}
	
}

int main() {
	
	int matriz[10][10]={0};
	int i,j;
	
	printf ("ingrese valores para la\n");
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			printf ("fila %d y columna %d: ",i+1,j+1);
			scanf ("%d",&matriz[i][j]);
		}	
	}
	printf("matriz:\n");
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}

	filas (matriz);
	columnas (matriz);
	
	return 0;
}

