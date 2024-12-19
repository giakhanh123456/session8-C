#include<stdio.h>

int main(){
	int array[5] = {1,2,3,4,5};
	int	n, dem = 0;
	printf("nhap phan tu: ");
	scanf("%d", &n);
    for(int i = 0; i < 5; i++){
    	printf("phan tu i = %d la %d\n",i,array[i]);
    }
	for(int i = 0; i < 5; i++){
		if(array[i] == n){
			printf("vi tri phan tu trong mang la: %d\n", i);
			dem = 1;
		}
	}
	if(dem == 0){
		printf("phan tu khong ton tai trong mang");
	}
	return 0;
}
