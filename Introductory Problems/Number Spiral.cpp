#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

// Good problem - resolve

void yo(){
    int x, y;
    cin>>x>>y;
    
    int ans = 0;
    
    if(y > x){
        if(y%2)
            ans = y*y + (-x+1);
        else
            ans = (y-1)*(y-1) + x;
    }
    else{
        if(x%2)
            ans = (x-1)*(x-1) + y;
        else
            ans = x*x + (-y+1);
    }
    
    cout<<ans<<endl;

}

int32_t main(){
    fast;
    
    int tt;
    cin>>tt;
    
    while(tt--)
        yo();
	
    return 0;
}
