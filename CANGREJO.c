#include<stdio.h>
#include<stdlib.h>
int inicio=3;
int final;
int a;
int b;
int dia=0;
int main()
{
	printf("DISTANCIA QUE CAE\n");
	scanf("%d",&final);
	printf("DISTANCIA QUE SUBE\n");
	scanf("%d",&a);
	printf("DISTANCIA QUE BAJA\n");
	scanf("%d",&b);
	
	while(inicio<=final)
	{
	    dia=dia+1;
		if (final>=0)
		{
		inicio=inicio+a;
		}
	    printf("%d",inicio);
		if (final>=0)
		{
			inicio=inicio-b;
		}
	}
	printf("EL DIA EN QUE SALDRA EL CANGREJO SERA:  %d \n ",dia);
	system("PAUSE");
}
