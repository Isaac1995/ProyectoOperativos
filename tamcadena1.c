#include<stdio.h>

int tam (char *);
int tam (char *cadena){
int i,j;

	for (i = 0;i < *cadena;i++){
        	j = 0;
        	while(*(cadena+j) != '\0'){
        	j++;
		}
	}

        printf("%d\n",j);
}

int main(){

char *cadena = "palabra";
//char *meses[1] = {"Eneroo"};
	tam(cadena);
//	tam(*meses);
}

