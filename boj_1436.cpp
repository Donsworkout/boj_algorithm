/*
// #1436 영화감독 숌
#include <iostream>
using namespace std;

bool include_tripple_six(int number){
	string str = to_string(number);
	for(int i = 0; i < str.length(); i++){
		if(i >= 1)
			if((str[i] == '6') && (str[i-1] == '6') && (str[i-2] == '6') ){
				return true;
			}
	}
	return false;
}

int main(){
	int num = 666;
	int target = 0;
	int count = 0;
	int result_cache = 0;

	cin >> target;
	while(target != count){
		if(include_tripple_six(num)){
			result_cache = num;
			count ++;
		}
		num ++;
	}
	cout << result_cache;
	return 0;
}
*/
