#include <stdio.h>
int main(){
	int i, num, dobro;
	i=1;
	while("i<=10"){
		printf("digite um numero\n");
		scanf("%d", &num);
		dobro = num *2;
		printf("o dobro de %d e %d\n", num,dobro);
	}
	return(0);
	
}