#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n, a, b;
    cin>>n>>a>>b;
    string s = "";
    char c = 'a';
    for(int i = 0; i < n; i++){
      if(i % b == 0){
        c = 'a';
      }
      s += c;
      c = char(c + 1);
    }
    cout<<s<<endl;
  }

}