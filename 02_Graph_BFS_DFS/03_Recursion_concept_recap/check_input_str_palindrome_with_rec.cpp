#include<bits/stdc++.h>
using namespace std;
bool pali_string(string s){
    if (s == "" || s.size() == 1){
        return true;
    }
    string small_string=s.substr(1, (s.size()-2));
    return pali_string(small_string) && (s[0]== s.back());


}
int main(){
    string s;
    cin>>s;
    if (pali_string(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
}