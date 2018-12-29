/*
// 리모톤 #1107
#include <iostream>
using namespace std;
const int DEFAULT = 100;
int target;
int min_click = 500000;
int btn_panel[10] = {1,1,1,1,1,1,1,1,1,1};

void nogada(string made){
	for(int i=0; i<10; i++){
		if(btn_panel[i]){
			string tmp_made = made + to_string(i);
			if(abs(stoi(tmp_made) - target) + tmp_made.length() < min_click)
				min_click = abs(stoi(tmp_made) - target) + tmp_made.length();
			if(tmp_made.length() < 6){
				nogada(tmp_made);
			}
		}
	}
}

int main(){
	int compare_arr[2];
	int broken_count = 0;

	cin >> target;
	cin >> broken_count;

	for(int i=0; i < broken_count ; i++){
		int tmp;
		cin >> tmp;
		btn_panel[tmp] = 0;
	}

	nogada("");

	compare_arr[0] = abs(target - DEFAULT);
	compare_arr[1] = min_click;
	if(compare_arr[0] < compare_arr[1]){
		cout << compare_arr[0] << endl;
	}else{
		cout << compare_arr[1] << endl;
	}
}
*/
