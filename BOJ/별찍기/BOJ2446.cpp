#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<n; i++){
        for(int j=1; j<i; j++){
            cout << ' ';
        }cout << '*';
        for(int j=0; j<(n-i)*2; j++){
            cout << '*';
        }
        cout << '\n';
    }for(int i=n; i>=1; i--){
        for(int j=1; j<i; j++){
            cout << ' ';
        }cout << '*';
        for(int j=0; j<(n-i)*2; j++){
            cout << '*';
        }cout << '\n';
    }
}