#include<stdio.h>
#include<stdlib.h>
int main(){
	int **a,**b,**c;
	int a_r,a_c,b_r,b_c;
	printf("Enter rows and columns of Matrix A:");
	scanf("%d %d",&a_r,&a_c);
	printf("Enter rows and columns of Matrix B:");
	scanf("%d %d",&b_r,&b_c);
	
	a=((int **)malloc(sizeof(int)*a_r));
	for(int i=0;i<a_r;i++){
		a[i]=((int*)malloc(sizeof(int)*a_c));
	}
	b=((int **)malloc(sizeof(int)*b_r));
	for(int i=0;i<b_r;i++){
		b[i]=((int*)malloc(sizeof(int)*b_c));
	}
	c=((int **)malloc(sizeof(int)*a_r));
	for(int i=0;i<a_r;i++){
		c[i]=((int*)malloc(sizeof(int)*b_c));
	}
	printf("\n-------MATRIX A-------\n");
	for(int i=0;i<a_r;i++){
		for(int j=0;j<a_c;j++){
			printf("Enter the Values of Matrix a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n-------MATRIX B-------\n");
	for(int i=0;i<b_r;i++){
		for(int j=0;j<b_c;j++){
			printf("Enter the Values of Matrix b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n=======RESULTANT MATRIX=======\n");
	for(int i=0;i<a_r;i++){
		for(int j=0;j<b_c;j++){
			c[i][j]=0;
			for(int k=0;k<b_c;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
	printf("Multiplied Matrix c[%d][%d]:%d\n",i,j,c[i][j]);
		}
	}
	
	return 0;
}