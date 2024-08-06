#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

void yo(){
    int n;
    cin>>n;

    // Simple implementation
    while(n != 1){
        cout<<n<<" ";
        if(n%2 != 0)
            n = n*3 + 1;
        else
            n /= 2;
    }
    cout<<"1";
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
