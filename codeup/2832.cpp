#include <bits/stdc++.h>
using namespace std;
int p(int n,int k){
    int result=0;
    if(n<k)k=n;
    if(n==0)return 1;
    for(int i=1; i<=k; i++){
        result+=p(n-i,i);
    }
    return result;
}
int main(){
    int n,k;
    cin >> n >> k;
    cout << p(n-1,k);
}