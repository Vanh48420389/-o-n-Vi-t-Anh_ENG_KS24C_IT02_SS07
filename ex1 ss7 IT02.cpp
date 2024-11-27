#include <stdio.h>

int main(){
	int a[]={1,2,3,4,5,6,7};
	int n =sizeof(a)/sizeof(a[0]); 
	for(int i=0;i<n;i++){
		printf("%d \n",a[i]); 
	} 
	printf("kich thuoc cua mang la : %d",n); 
	return 0; 
} 
