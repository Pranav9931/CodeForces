#include<bits/stdc++.h>
using namespace std;
int main(){
  int s, n;
  cin>>s>>n;
  bool validate = true;
  vector<pair <int, int> >v;
  int dragonStrength, defeatingBonus;
  for(int i = 0; i < n; i++){
    cin>>dragonStrength>>defeatingBonus;
    v.push_back(make_pair(dragonStrength, defeatingBonus));
  }
  sort(v.begin(), v.end());
  // for(auto a: v) cout<<a.first<<" "<<a.second<<"\n";
  for(int i = 0; i < n && validate; i++){
    v[i].first < s ? s+=v[i].second : validate = false;
  }
  validate ? cout<<"YES\n":cout<<"NO\n";
  return 0;
}
