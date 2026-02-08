#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
    long long L,M;
    cin>>L>>M;
    long long mini= min(L,M);
    int count =0;
    for(int i=1;i<=mini;i++){
        if(L%i==0&&M%i==0){
           count++;
           }
    }
    cout<<count<<endl;
    }
    return 0;
}
