#include<iostream>
using namespace std;

int adiff(int a,int b){
  a = a%360;
  b = b%360;

  if(a < 0){
    a = 360 + a;
  }
  if(b < 0){
    b = 360 + b;
  }


  int min,max;
  if(a < b){
    min = a;
    max = b;
  } 
  else{
    min = b;
    max = a;
  }

  if(min+180 == max){
    return 180;
  }
  else if(min + 180 < max){
    return abs(360 + min - max);
  }
  else{
    cout << "\n" ;
    return abs(max-min);
  }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
