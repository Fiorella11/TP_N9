#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float matriz[2][2][2]={0};
	//7=torres - 20=pisos - 6=depa
	int i,j,k;
	float totalComplejo=0;
	float totalTorre[2]={0},promedioTorre[2]={0},promedioPisos=0;
	
	for (i=0; i<7; i++)
	{
		printf ("TORRE: %d\n",i+1);
		for (j=0; j<20; j++)
		{
			for (k=0; k<6; k++)
			{
				printf ("ingrese habitantes del piso: %d y departamento: %d\n",j+1,k+1);
				scanf ("%f",&matriz[i][j][k]);
				
				totalComplejo+=matriz[i][j][k];
				totalTorre[i]+=matriz[i][j][k];
				
				promedioTorre[i]=totalTorre[i]/7;
				promedioPisos=totalTorre[i]/6;
			}
		}
	}
	
	printf ("habitantes de todo el complejo: %.0f\n",totalComplejo);
	
	
	for (i=0; i<20; i++)
	{
		printf ("habitantes de la torre %d: %.0f\n",i+1,totalTorre[i]);
		printf ("promedio de habitantes en la torre %d: %.2f\n",i+1,promedioTorre[i]);
	}
	for (k=0; k<6; k++)
	{
		printf ("promedio de habitantes del piso %d: %.2f\n",k+1,promedioPisos);
	}
	
	
	return 0;
}

