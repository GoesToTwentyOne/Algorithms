#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    set <int, greater<int> > s1;
    int x;
    for(int i = 0; i < n; i++){
      cin>>x;
      s1.insert(x);
    }
    cout<<s1.size()<<endl;
  }

}