#include <stdio.h>
#include <stdlib.h>

void mayor(int ventas[][5])
{
	int i,j,mayorVenta=0;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			if(ventas[i][j]>mayorVenta)
			{
				mayorVenta=ventas[i][j];
			}
		}
	}
	printf ("la mayor venta fue de %d el dia %d",mayorVenta,i);
}

int main() {
	
	int ventas[5][5]={0};
	int i,j;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			printf ("dia #%d. ingrese la venta #%d: ",i+1,j+1);
			scanf ("%d",&ventas[i][j]);
		}
	}
	
	mayor(ventas);

	return 0;
}

