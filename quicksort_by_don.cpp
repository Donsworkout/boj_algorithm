// quicksort by donsdev cpp
#include <iostream>
using namespace std;

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void quicksort(int start, int end, int * arr){
	if (start < end){
		int pivot = start; int i = start + 1; int j = start;
		for(; i <= end; i++){
			if(arr[i] < arr[pivot]){
				j++;
				swap(&arr[i], &arr[j]);
			}
		}
		swap(&arr[pivot], &arr[j]);
		pivot = j;

		quicksort(start, pivot-1, arr);
		quicksort(pivot+1, end, arr);
	}
}

int main(){
	int arr[9] = {3,8,0,1,2,4,3,5,11};
	quicksort(0,8,arr);

	for(int i=0; i<9; i++){
		cout << arr[i] << " ";
	}

	return 0;
}

