#include <iostream>
using namespace std;
int DivisionByBinary(int num1, int num2){
  int s = 0;
  int e = num2;
  int m = s + (e-s)/2;
  int ans = -1;
  while(s <= e){
    if(m * num2 == num1){
      return m;
    }
    if(m * num2 <= num1){
      ans = m;
      s = m + 1;
    }
    else{
      e = m - 1;
    }
    m = s + (e-s)/2;
  }
  return ans;
}

int main() {
  int num1, num2;
  cin>>num1;
  cin>>num2;
  int ans = DivisionByBinary(num1, num2);
  int p;
  cin>>p;
  double finalans = ans;
  double step = 0.1;
  for(int i = 0; i < p; i++){
    for(double j = finalans; j*num2 <= num1; j = j + step){
      finalans = j;
    }
    step = step/10;
  }
  cout<<"Final ans with Precision : "<<finalans<<endl;
  return 0;
}