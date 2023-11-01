#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int matriz[4][7]={0};
	int i,j;
	float totalVentas[7]={0};
	float promedioVentas[7]={0};
	int ventaMayor=0,acu=0;
	
	for (i=0; i<4; i++)
	{
		printf ("SEMANA NRO #%d\n",i+1);
		for (j=0; j<7; j++)
		{
			printf ("dia Nro #%d\n",j+1);
			printf ("ingrese ventas del dia: ");
			scanf ("%d",&matriz[i][j]);
			
			totalVentas[i]+=matriz[i][j];
			
			if (matriz[i][j]>ventaMayor)
			{
				ventaMayor=matriz[i][j];
			}
		}	
		promedioVentas[i]=(totalVentas[i])/7;
	}
	
	system("cls");
	
	for (i=0; i<4; i++)
	{
		printf ("SEMANA NRO #%d\n",i+1);
		printf ("ventas: %.0f\n",totalVentas[i]);
	 	printf ("promedio de ventas: %.1f\n",promedioVentas[i]);	
	}
	printf ("la mayor venta fue de: %d\n",ventaMayor);
	
	return 0;
}

