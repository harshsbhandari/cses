#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

int solve(int n){
    // Total number of ways to place 2 knights in the grid
    int totalWaysToPlaceKnights = ((n*n) * ((n*n) - 1)) / 2;
    // These are the positions where 2 knights will attack each other
    // Counting 2X3 grids
    int count2X3Grids = (n - 1) * (n - 2);
    // Counting 3X2 grids
    int count3X2Grids = (n - 2) * (n - 1);
    // Subtracting all attacking positions from total ways to place the knights
    return totalWaysToPlaceKnights - (2 * (count2X3Grids+count3X2Grids));
}
void yo(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
        cout<<solve(i)<<endl;
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
