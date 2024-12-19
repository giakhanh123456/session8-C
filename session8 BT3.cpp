#include<stdio.h>

int main(){
	int n;
	printf("nhap n > 2: ");
	scanf("%d", &n);
	int matrix[n][n];
	int value = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matrix[i][j] = value++;
		}
	}
	for(int i = 0; i < n; i++){	
	for(int j = 0; j < n; j++){
		printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
	return 0;
}
