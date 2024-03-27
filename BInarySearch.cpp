#include <iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr, int target){
  int s = 0;
  int e = arr.size() - 1;
  int m = s + (e - s) / 2;
  while(s <= e){
    if(arr[m] == target){
      return m;
    }
    else if(arr[m] < target){
      s = m + 1;
    }
    else{
      e = m - 1;
    }
    m = s + (e - s) / 2;
  }
  return -1;
}

int main() {
  vector<int> arr{1, 2, 3, 4, 5, 6, 7};
  int target = 3;
  int ans = BinarySearch(arr, target);
  if(ans == -1){
    cout<<"Element Not Found"<<endl;
  }
  else{
    cout<<"Found at index : "<<ans<<endl;
  }

  return 0;
}