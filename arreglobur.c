#include<stdio.h>

void imprimir(int *arreglo,int tam)
{
	int i = 0;
	for(i = 0; i<tam; i++)
		printf("Arreglo[%d] = %d\n",i,*(arreglo+i));
}

void burbuja(int *arreglo,int tam)
{
	int i = 0;
	
	

}

int main()
{
	int arreglo[5];
	arreglo[0] = 15;
	arreglo[1] = 2;
	arreglo[2] = 9;
	arreglo[3] = 12;
	arreglo[4] = 4;
	imprimir(arreglo,5);
	
}
