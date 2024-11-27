#include <stdio.h>

int main(){
	int n;
	int a[n];
	printf("nhap so phan tu cua mang: ", n);
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("nhap cac phan tu %d : ",i);
		scanf("%d", &a[i]);
	} 
	return 0; 
} 
