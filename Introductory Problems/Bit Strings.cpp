#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

// Calculating the power(x, n) -> TC - O(logn)

// Calculating the power efficiently
int mod = 1e9+7;
int calculatePower(int num, int power){
    int result = 1;
    while(power > 0){
        if(power & 1)
            result = ((result%mod)*(num%mod))%mod;
        
        num = ((num%mod)*(num%mod))%mod;
        power = power >> 1;
    }
    return result%mod;
}

void yo(){
    int n;
    cin>>n;
    
    cout<<calculatePower(2, n);
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
