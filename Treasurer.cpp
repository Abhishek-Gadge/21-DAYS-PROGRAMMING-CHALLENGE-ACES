#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int cnt=0; 
        for (int i=0;i<32;i++) { 
            if (((a>>i)&1)!=((b>>i)&1)) { 
                cnt++; 
            } 
        } 
        cout<<cnt<<endl;
    }
    return 0;
}