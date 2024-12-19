#include<stdio.h>

int main(){
	int array2D[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int max = array2D[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(array2D[i][j] > max){
				max = array2D[i][j];
			}
		}
    }
    printf("phan tu lon nhat la: %d\n",max);
	return 0;
}
