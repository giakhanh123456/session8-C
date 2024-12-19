#include<stdio.h>

int main(){
	int n, sum =0;
	printf("nhap n > 2: ");
	scanf("%d", &n);
	int matrix[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("matrix[%d][%d]: ",i,j);
			scanf("%d", &matrix[i][j]);		
		}
	}
	for(int i = 0; i < n; i++){	
	for(int j = 0; j < n; j++){
		printf("%d ", matrix[i][j]);
      }
	  printf("\n");
    }
    printf("cac phan tu tren duong cheo chinh la: ");
    for(int i = 0; i < n; i++){	
	for(int j = 0; j < n; j++){
		if(i == j){
		    sum += matrix[i][j];
		    printf("%d ", matrix[i][j]);
		}
	  }
    }
    printf("\ntong duong cheo chinh la: %d\n", sum);
    return 0;
}
