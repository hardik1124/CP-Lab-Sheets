#include <stdio.h>

int main(){
	int n,i,j; 

	printf("Enter number of rows: ");
	scanf("%d", &n);
	
	for (i=0; i<2*n -1; i++){
		printf("*");
	}

	printf("\n");

	for (i=0; i<n-1; i++){
		for(j=0; j< 2*n-1; j++ ){
			if(j == i+1 ||  j==2*n - 3 -i){
		        printf("*");
		    } else{
		    	printf(" ");
		    }
	    }
	    printf("\n");

			
	}

    return 0;

}
