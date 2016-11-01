#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,i,z;
        cin>>n;
        for( i=2;i<=sqrt(n);i++){
            if(n%i==0){
                while(n%i==0){
                    n=n/i;
                    z=i;
                }
            }
        }
        if(n!=1){
            z=(z>n)?z:n;
        }
      cout<<z<<endl;      
    }
    return 0;
}
