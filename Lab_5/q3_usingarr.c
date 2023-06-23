#include<stdio.h>
int main(){
    int a[4];
    printf("Enter 4 numbers: ");
    for (int i=0 ; i<4 ; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0 ; i<4 ; i++){
		for (int j=0; j<4-1-i ; j++)	{
			if (a[j] > a[j+1]){
                a[j] = a[j] + a[j+1] - ( a[j+1] = a[j] );
			}
		}
	}
    printf("The sum is: %d", a[2]+a[3]);
}