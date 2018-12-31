// #1924 2007년
#include <iostream>
using namespace std;

int month_short[4] = {4,6,9,11};
string week_days[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

bool include_short_month(int month){
	for(int i=0; i<4; i++)
		if(month_short[i] == month)
			return true;
	return false;
}

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int x; int y;
	int date_diff = 0;
	cin >> x >> y;
	for(int i= 1; i < x; i++){
		if (i == 2){
			date_diff += 28;
		}else if(include_short_month(i)){
			date_diff += 30;
		}else{
			date_diff += 31;
		}
	}
	cout << week_days[(date_diff + y - 1) % 7];
	return 0;
}
