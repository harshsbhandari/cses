#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

void yo(){
    int n;
    cin>>n;

    if(n == 1){
        cout<<"1";
        return ;
    }

    if(n < 4){
        cout<<"NO SOLUTION";
        return ;
    }

    for(int i = 2; i <= n; i += 2)
        cout<<i<<" ";
    for(int i = 1; i <= n; i += 2)
        cout<<i<<" ";
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
