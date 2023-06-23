#include <stdio.h>

int linearSearch(int arr[], int size, int key)
{
    int i = 0;
    for(i=0; i<size; i++){
       if(key == arr[i])
         return i; 
    }
    return -1; 
}


void selectionSortDec(int arr[], int n) {
    int i, j, max;

    for (i = 0; i < n-1; i++){
        max = i; 
        for (j = i+1; j < n; j++){
            if (arr[j] > arr[max]) max = j;
        }
        int temp = arr[max];
        arr[max] = arr[i];
        arr[i] = temp;
    }
}


int binarySearch(int arr[], int size, int key )
{ 
    int index = 0, upper, lower,mid;
    
    upper=size-1; lower=0;
    while(lower<=upper){
        mid=(lower+upper)/2;
        index++;
        if(key>arr[mid]) {lower=mid+1; }
        else if(key<arr[mid]) {upper=mid-1; }
        else
        { 
            return index-1;
        } 
    }
    return -1;
}

int main()
{
	int n, array[10], random1, random2, sorted_array[10];
	while(1)
	{
		printf("Enter\n1 for Linear Search\n2 for Binary Search\n3 for Selection Sort\n4 to Exit\n");
		scanf("%d", &n);

		if (n==1)
		{
			int key;
			for(int i=0; i<10; i++)
			{
				printf("Enter %dth element of array: ", i+1);
				scanf("%d", &array[i]);
			}
			printf("Enter key to be searched: ");
			scanf("%d", &key);

			random1 = linearSearch(array, 10, key);
			if (random1 == -1){
				printf("Element not found\n");
			} else {
				printf("Element found at index %d\n", random1);
			}
			
		}

		if (n==2)
		{
			int key;
			for(int i=0; i<10; i++)
			{
				printf("Enter %dth element of array: ", i+1);
				scanf("%d", &array[i]);
			}
			printf("Enter key to be searched: ");
			scanf("%d", &key);

			random2 = binarySearch(array, 10, key);
			if (random2 == -1)
			{
				printf("Element not found\n");
			} 
			else 
			{
				printf("Element found at index %d\n", random2);
			}
			
		}

		if (n==3)
		{
			for(int i=0; i<10; i++)
			{
				printf("Enter %dth element of array: ", i+1);
				scanf("%d", &array[i]);
			}

			selectionSortDec(array, 10);
			
		}

		if (n==4)
		{
			printf("Bye Bye SearchNSort!\n");
			break;
		}
	}
}
