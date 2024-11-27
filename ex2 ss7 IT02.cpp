#include <stdio.h>

int main(){
	int a[5];
	for(int i=0;i<6;i++){
		printf("nhap cac phan tu %d : ",i);
		scanf("%d", &a[i]);
	}
	printf("mang da nhap la : ");
	for(int i=0;i<6;i++){
		printf("%d \n", a[i]); 
	} 
	return 0; 
} 
