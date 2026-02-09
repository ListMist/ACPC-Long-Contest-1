#include<bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define ll long long

int main(){
    fast
    ll n, m,a;
    cin>>n>>m>>a;
    ll N= (n+a-1)/a;
    ll M= (m+a-1)/a;
    cout<<N*M<<endl;
    return 0;
}