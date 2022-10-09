/*
  Problem Statement:
  The word is considered to be mistyped if
  1. All the letters are uppercase
  2. All the letters except the first one is uppercase..
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;
  bool validate = true;
  for(int i = 1; i < (int)str.size(); i++){
    if(!isupper(str[i])) {validate = false; break;}
  }
  if(validate){
    for(int i = 0; i < (int)str.size(); i++){
      if(isupper(str[i])) str[i] = tolower(str[i]);
      else str[i] = toupper(str[i]);
    }
  }

  cout<<str<<"\n";
  return 0;
}
