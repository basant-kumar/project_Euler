#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
         long long a=1,b=2,c,sum=2,i;
        for( i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c; //cout<<b<<" ";
            if(b%2==0 && b<=n){
                sum+=b;//cout<<b<<" ";
            }
            if(b>n)
                break;
            
        }
        cout<<sum<<endl;
        
    }
    return 0;
}
