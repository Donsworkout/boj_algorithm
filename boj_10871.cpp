/*
// #10871 X보다 작은 수
#include <iostream>
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n; int x;
	cin >> n >> x;
	int arr[n];
	cin.ignore();

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(int i=0; i<n; i++){
		if (arr[i] < x)
			cout << arr[i] << " ";
	}
	return 0;
}
*/
