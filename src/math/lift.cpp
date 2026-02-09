#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int a,b;
        cin>>a>>b;
        int time= abs(a-b)*4+a*4+19;
        cout<<"Case "<<i<<": "<<time<<endl;

    }
    return 0;
}