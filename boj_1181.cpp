// #1181 단어 정렬
// cin.ignore() 각별히 주의할 것

#include <iostream>
using namespace std;
void swap(string *a, string *b){
	string tmp = *a;
	*a = *b;
	*b = tmp;
}

void modified_quicksort(int start, int end, string *arr){
	if(start < end){
		int pivot = start; int i = start + 1; int j = start;
		for(;i <= end; i++){
			if(arr[pivot].length() > arr[i].length()){
				j++;
				swap(&arr[i], &arr[j]);
			}else if(arr[pivot].length() == arr[i].length()){
				if(arr[pivot] > arr[i]){
					j++;
					swap(&arr[i], &arr[j]);
				}
			}
		}
		swap(&arr[pivot], &arr[j]);
		pivot = j;

		modified_quicksort(start, pivot - 1, arr);
		modified_quicksort(pivot + 1, end, arr);
	}
}

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n = 0;

	cin >> n;
	cin.ignore();
	string arr[n];

	for(int i = 0; i < n; i++){
		getline(cin,arr[i]);
	}
	modified_quicksort(0,n-1,arr);
	for(int i = 0; i < n; i++){
		if((i == n-1) || (arr[i] != arr[i+1])){
			cout << arr[i];
			cout << "\n";
		}
	}
	return 0;
}
