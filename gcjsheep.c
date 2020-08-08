#include<stdio.h>

int digitos(int n
int nisefklenffsd

int main (){
	int T,N,i;
	printf("Casos: ");
	scanf("%d",&T);
	for(i=0;i<T;i++){
		printf("\nNumero elegido: ");
		scanf("%d",&N);
		digitos(n);
	}
	return 0;
}

int jffiorf

int digitos(int n){
	int dig[10],a[10],i=0,aux=n;
	while(n>0){
		if(n<=9){
			a[i]=n;
			i++;
		}
		else{
			aux=n%10;
			a[i]=aux;
			n=(int)n/10;
			i++;
		}
	}
}	
