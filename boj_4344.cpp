/*
// 평균은 넘겠지 #4344
#include <iostream>
using namespace std;

float get_avg(float *score, float input_count){
	float sum = 0;
	for(int i=0; i<input_count; i++){
		sum += score[i];
	}
	return sum / input_count ;
}

float check_over_avg_rate(float input_count, float *score, float avg){
	float case_count = 0;
	for(int i=0; i<input_count; i++){
		if(score[i] > avg){
			case_count += 1;
		}
	}
	return case_count / input_count;
}

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n = 0;
	cin >> n;
	float result_array[n];
	for(int i=0; i<n; i++){
		int input_count = 0;
		cin >> input_count;
		float score[input_count];
		for(int j=0; j<input_count; j++){
			cin >> score[j];
		}
		result_array[i] = check_over_avg_rate(input_count, score, get_avg(score,input_count));
	}
	for(int k=0; k < n ; k++){
		cout << fixed;
		cout.precision(3) ;
		cout << result_array[k] * 100 << "%";
		cout << "\n";
	}
}
*/
