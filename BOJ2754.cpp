#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char a[2];
    cin >> a[0] >> a[1];
    if(a[0]=='A'){
        if(a[1]=='+')cout << 4.3;
        else if(a[1]=='0')cout << 4 <<".0";
        else cout << 3.7;
    }
    else if(a[0]=='B'){
        if(a[1]=='+')cout << 3.3;
        else if(a[1]=='0')cout << 3 <<".0";
        else cout << 2.7;
    }
    else if(a[0]=='C'){
        if(a[1]=='+')cout << 2.3;
        else if(a[1]=='0')cout << 2 <<".0";
        else cout << 1.7;
    }
    else if(a[0]=='D'){
        if(a[1]=='+')cout << 1.3;
        else if(a[1]=='0')cout << 1 <<".0";
        else cout << 0.7;
    }
    else cout << "0.0";
}