#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
            int L,R;
    cin>>L>>R;
    int count=0;
    for(int i=L;i<=R;i++){
        if(isPrime(i)) count++;
    }
        cout<<"Case "<<T<<": There are "<<count<<" numbers between "<<L<<" and "<<R<<"."<<endl;
    }
    return 0;
}
