#include<iostream>
using namespace std;

int main(){
  int n, a, b, c;
  cin>>n;
  // cout<<n<<"\n";
  long long sum1 = 0, sum2 = 0, sum3 = 0;
  for(int i = 0; i < n; i++){
    cin>>a>>b>>c;
    sum1+=a; sum2+=b; sum3+=c;
  }
  if(sum1 == 0 && sum2 == 0 && sum3 == 0){
    cout<<"YES\n";
  }
  else cout<<"NO\n";

  return 0;
}
