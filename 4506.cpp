#include <stdio.h>
int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}
int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",gcd(a,b));
    printf("%d\n",lcm(a,b));
}