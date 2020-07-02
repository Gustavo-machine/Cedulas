#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,cem,cinquenta,vinte,dez,cinco,dois,um;
	scanf("%d",&N);
	cem=N/100;
	um=N%100;
	cinquenta=um/50;
	um=um%50;
	vinte=um/20;
	um=um%20;
	dez=um/10;
	um=um%10;
	cinco=um/5;
	um=um%5;
	dois=um/2;
	um=um%2;
	printf(" %d nota(s) de 100\n",cem);
	printf(" %d nota(s) de 50\n",cinquenta);
	printf(" %d nota(s) de 20\n",vinte);
	printf(" %d nota(s) de 10\n",dez);	
	printf(" %d nota(s) de 5\n",cinco);
	printf(" %d nota(s) de 2\n",dois);
	printf(" %d nota(s) de 1\n",um);			
}

