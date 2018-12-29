/*
// 설탕배달 #2839
#include <iostream>
using namespace std;

int get_x_count(int N){
	int quotient = N/5;
	if(N%5 == 0){
		return quotient;
	}else{
		for(int i=quotient; i >= 0 ; i--){
			int j = 1;
			while(5*i+3*j <= N){
				if(5*i+3*j == N){
					return i;
					break;
				}
				j++;
			}
		}
	}
	return -1;
}

void print_result(int N, int x_count){
	int y_count;
	if(x_count == -1){
		cout << -1 << endl;
	}else{
		y_count = (N-5*x_count)/3;
		cout << x_count + y_count << endl;
	}
}
int main(){
	int N = 0;
	cin >> N;
	print_result(N,get_x_count(N));
}
*/
