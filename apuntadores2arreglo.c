#include<stdio.h>

int arreglo[10];
int i = 0;
int *ptr;
int numero = len(arreglo);


int main()
{
	arreglo[0] = 4;
	arreglo[1] = 5;
	arreglo[2] = 3;
	arreglo[3] = 9;
	arreglo[4] = 8;
	arreglo[5] = 0;
	arreglo[6] = 1;
	arreglo[7] = 7;
	arreglo[8] = 2;
	arreglo[9] = 6;
	ptr = arreglo;

	//printf("posicion 1 %d\n",*ptr);

	for(i = 0; i < 10; i++)
		printf("Arreglo[%d] = %d\n",i,*(ptr+i));

}
