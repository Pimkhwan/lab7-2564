#include<iostream>
typedef long long int x;
using namespace std;

int main(){
	x P[5000];
	x i = 0;
    while(i<5000){
	P[i] = 2 * i + 1;
	i++;
}
    x k;
	cout << "Please input k: ";
	cin >> k;

	x result;
	if(k > 0){
		i =0;
		result = 0;
		while(i < 5000){
			if(P[i]%k == 0){
				result = result - P[i];
			}
			else{
				result = result + P[i];
			}
			i = i+1;
		}
		cout << "Result = " << result << "\n";
	}
	else{
		cout << "Invalid input!!!" << "\n";
	}
	
	
	
	return 0;
}
