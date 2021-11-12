#include<stdio.h>
int main(){
	
	int j,i=0,k,n;
	int c[200];
	//decimal for binaire
	printf("taper votre nombre décimale pour convertir au binaire");
	
	scanf("%d",&n);
	do{
		c[i]=n%2;
		n=n/2;
		i++;
	}while(n!=0);
	
	
	
	
	
	for(j=i-1;j>=0;j--){

	printf("%d",c[j]);	}
	
}
