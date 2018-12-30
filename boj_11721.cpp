/*
//#11721 열 개씩 끊어 출력하기
#include <iostream>
using namespace std;

int main(void){
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str = "";
	cin >> str;

	for(int i = 0; i < str.length(); i++){
		cout << str[i];
		string str_i = to_string(i);
		if(str_i[str_i.length()-1] == '9'){
			cout << "\n";
		}
	}
	return 0;
}
*/
