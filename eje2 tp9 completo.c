#include <stdio.h>

void dias(int km[][7])
{
	int totalkm=0;
	int i,j;
	
	for (i=0; i<2; i++)
	{
		printf ("el legajo #%d hizo %d km en toda la semana\n",i+1,totalkm);
		for (j=0; j<7; j++)
		{
			totalkm+=km[i][j];
			printf ("el legajo #%d hizo %d km en el dia #%d \n",i+1,km[i][j],j+1);
			
		}
	}
	
}
	int main() {
	
	int km[20][7]={0};
	int i,j,legajo;
	
	for (i=0; i<20; i++)
	{
		printf("ingrese su numero legajo: ");
		scanf ("%d",&legajo);
		
		while(legajo<1 || legajo>20)
		{
			printf ("numero invalido. ingrese otro: ");
			scanf ("%d",&legajo);
		}
		
		for (j=0; j<7; j++)
		{
			printf("ingrese kilometros recorridos del dia #%d: ",j+1);
			scanf ("%d",&km[i][j]);
			
		}
	}
	dias(km);

	return 0;
}
