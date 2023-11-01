#include <stdio.h>
#include <stdlib.h>
	
	int main() {
	
	int matriz[5][6]={0};
	int i,j,horas=0,sueldo=0;
	int totalHoras[5]={0},sueldoTotal[5]={0};
	int totalEmpresa=0,horasMaximas=0;
	
	for (i=0; i<5; i++)
	{
		printf ("chofer #Nro %d\n",i+1);
		for (j=0; j<6; j++)
		{
			printf ("ingrese horas trabajadas del dia %d: ",j+1);
			scanf ("%d",&matriz[i][j]);
			printf ("ingrese sueldo: ");
			scanf ("%d",&sueldo);
			
			totalHoras[i]+=matriz[i][j];
			sueldoTotal[i]+=matriz[i][j]*sueldo;
			totalEmpresa+=sueldo;
			
			if (matriz[i][j]>horasMaximas)
			{
				horasMaximas=matriz[i][j];
			}
		}
	}
	
	printf ("el total de la empresa a pagar es de: %d$\n",totalEmpresa);
	printf ("el legajo que mas horas trabajo fue de: %d\n",horasMaximas);
	
	for (i=0; i<5 ; i++)
	{
		printf ("LEGAJO NRO #%d\n",i+1);
		printf ("horas trabajadas: %d\n",totalHoras[i]);
		printf ("sueldo semanal: %d$\n",sueldoTotal[i]);
	}
	
	return 0;
}
	
