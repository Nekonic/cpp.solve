#include <bits/stdc++.h>
using namespace std;
int a[]={
    0xAC, 0xF3, 0xC, 0x25, 0xA3, 0x10, 0xB7, 0x25, 0x16, 0x0C6,
    0xB7, 0xBC, 0x7, 0x25, 0x2, 0xD5, 0xC6, 0x11, 0x7, 0xC5
};
int main(){
    for(int i=0; i<0x15; i++){
        unsigned char ans = a[i]/5;
        cout << ans;
    }
    cout << '\n';
    for(int i=0; i<0x15; i++){
        unsigned char ans = a[i]*51%256;
        cout << ans;
    }
}