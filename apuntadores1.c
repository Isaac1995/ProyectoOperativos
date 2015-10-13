#include<stdio.h>

/*int variable;
int *apuntador;*/

int suma(int a, int b, int *resultado)
{
	*resultado = a + b;
	return *resultado;
}

int main()
{
	/*variable = 1;
	apuntador = &variable;	
	//*apuntador = 5;
	//apuntador = 0;*/
	
	int a,b,c;
	a = 1;
	b = 2;	
	c = 0;
	suma(a,b,&c);
	printf("\n El resultado es: %d\n",c);
}
