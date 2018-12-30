// #10950 A+B - 3
#include <iostream>
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n = 0;
	int a = 0;
	int b = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		cout << a + b;
		cout << "\n";
	}
	return 0;
}
