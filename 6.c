//Rotate a NXN matrix by 90 degrees
#include<stdio.h>

int main(){
	int n, a[20][20], b[20][20];
	int i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[j][n-1-i] = a[i][j];
			}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
