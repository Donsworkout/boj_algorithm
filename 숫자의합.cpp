/*
#include <iostream>
using namespace std;

void add_all_nums(int num_count, string numbers){
	int sum = 0;
	for(int i=0; i < num_count ; i++){
		int int_val = static_cast<int>(numbers[i]) - 48;
        if(int_val == 0){
        	continue;
        }
		sum += int_val;
	}
	cout << sum;
	cout << "\n";
}

void input_all_nums(int num_count){
	string numbers;
	cin >> numbers;
	add_all_nums(num_count,numbers);
}

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int num_count = 0;
	cin >> num_count;
	input_all_nums(num_count);
	return 0;
}
*/
