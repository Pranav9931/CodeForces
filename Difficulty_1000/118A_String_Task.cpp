#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>

int main(){
  std::string str;
  std::cin>>str;
  std::vector<char > v(str.begin(), str.end());
  std::vector<char > newArr;
  for(int i = 0; i < (int)v.size(); i++){
    v[i] = tolower(v[i]);
    if(v[i] != 'a' && v[i] != 'e' && v[i] != 'i' && v[i] != 'o' && v[i] != 'u' && v[i] != 'y'){
      newArr.push_back(v[i]);
    }
  }
  // std::cout<<newArr.size()<<"\n";
  for(int i = 0; i < (int)newArr.size(); i++) std::cout<<"."<<newArr[i];
  return 0;
}
