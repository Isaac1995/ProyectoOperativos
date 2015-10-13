#include<stdio.h>

char *cadena = "hola";
int i, j;
char *aux;

void main()
{
	for(i = 0; i < 4; i++)
	{
	   j = 0;
	   aux = cadena[i];
	   while(*(aux+j) != '\0')
	   {
		j++;
	   }
	   printf("%c\n",*(aux+j-4));
	 }
}

