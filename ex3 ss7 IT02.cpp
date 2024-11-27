#include <stdio.h>

int main(){
    int a[]={1,3,3,9,6,9};
    int f=0; 
	int n =sizeof(a)/sizeof(a[0]); 
	for(int i=0;i<n;i++){
		if( a[i] % 2==0){
			printf(" so chan la %d \n",a[i]);
			f=1; 
		}
		
		
	}
	    if(!f){
			printf("ko chua so chan ", a[1]); 
			 
		} 
	 
	return 0; 
} 
