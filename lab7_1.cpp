#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string u = "";
	while(i < L){
		u += toupper(x[i]);
		i++;
	}
	return u;	
}

string func3(string x){
	int i = 0, L = x.size();
	string z = "";
	while(i < L){
		z += tolower(x[i]);
		i++;
	}
	return z;	
}

int main(){
	string x;
	string y;
	string z;
	string u;
    cout << "Input text: " ;
	cin >> x;
    cout << "Reversed text: " << func1(x) << "\n";
	string func2(x);
	string func3(x);

	if(u==z){
				cout << "Palindrome: " << "Yes";
	}
	else{
		cout << "Palindrome: " << "No";
	}
    return 0;
}
