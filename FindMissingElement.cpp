#include <iostream>
#include<vector>
using namespace std;
int FindMissingElement(vector<int> arr){
  int s = 0; 
  int e = arr.size() - 1;
  int m = s + (e-s)/2;
  int missingEle = -1;
  while(s <= e){
    if(m + 1 == arr[m]){
      s = m + 1;
    }
    else if(m + 1 < arr[m]){
      e = m - 1;
      missingEle = arr[m] - 1;
    }
    m = s + (e-s)/2;
  }
  return missingEle;
}

int main() {
  vector<int> arr{1,2,3,4,5,6,7,8};
  int ans = FindMissingElement(arr);
  if(ans == -1){
    cout<<"There is no missing element"<<endl;
  }
  else{
    cout<<"The missing element is : "<<ans<<endl;
  }
  return 0;
}