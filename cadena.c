#include<stdio.h>

char *meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
int i, j;
char *aux;

void main()
{
	for(i = 0; i < 12; i++)
	{
	   j = 0;
	   aux = meses[i];
	   while(*(aux+j) != '\0')
	   {
		j++;
	   }
	   printf("%c\n",*(aux+j-3));
	   printf("%c\n",*(aux+j-2));
	   printf("%c\n",*(aux+j-1));
	   printf("\n");
	}	
}

