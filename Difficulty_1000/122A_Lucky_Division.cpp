#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int > arr = {4, 44, 444, 7, 77, 777, 47, 74, 447, 474, 477, 744, 747, 774, 747};
  for(int i = 0; i < arr.size(); i++){
    if(n%arr[i] == 0) {
      cout<<"YES\n";
      return 0;
    }
  }
  cout<<"NO\n";
  return 0;
}
