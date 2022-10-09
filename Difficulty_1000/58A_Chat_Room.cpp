#include<iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  int arr[26] = {0};
  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'h') arr[s[i] - 'a']++;
    else if(s[i] == 'e' && arr[7]) arr[s[i] - 'a']++;
    else if(s[i] == 'l' && arr[7] && arr[4]) arr[s[i] - 'a']++;
    else if(s[i] == 'o' && arr[7] && arr[4] && arr[11] >= 2) arr[s[i] - 'a']++;
  }
  if(arr[7] >= 1 && arr[4] >= 1 && arr[11] >= 2 && arr[14] >= 1) cout<<"YES\n";
  else cout<<"NO\n";
  return 0;
}
