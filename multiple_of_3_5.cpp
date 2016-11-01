#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long t,n,c1,c2,c3;
    cin>>t;
    while(t--){
        cin>>n;
        n=n-1;//cout<<n/3<<" "<<n/5<<" "<<n/15<<endl;
        long long n1=n/3,n2=n/5,n3=n/15;
        c1=(3*n1*(1+n1))/2;
        c2=(5*n2*(1+n2))/2;
        c3=(15*n3*(1+n3))/2;
        cout<<c1+c2-c3<<endl;
    }
    return 0;
}
