//Author @Harsh_xerus

#include<bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#define rep(i,n) for (int i = 0; i < n; i++)
#define mem0(arr) memset(arr, 0, sizeof(arr))
#define mod 1000000007
#define mod2 998244353
#define pb push_back
#define ff first
#define ss second
#define ll long long 
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpll vector<pll>
#define INF 1e18
#define nl '\n'
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
const ll maxn = 1e6 + 2;
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
typedef unsigned long long ull;
typedef long double lld;
using namespace std;


//--------------------------Helper_functions-------------------------------//

//-------------------------------GCD---------------------------------------//

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}

//-------------------------------LCM---------------------------------------//

ll lcm(ll a, ll b){return (a * b) / gcd(a, b);}

//----------------------------Factorial------------------------------------//

ll fact(ll x){if(x==0)return 1;return (x*fact(x-1))%mod;}

//-----------------------------Bin_Expo------------------------------------//

ll binpow(ll a,ll b) {
     ll res = 1;
     while (b > 0) {
         if (b & 1)
             res = (res * a)%mod;
         a = (a * a)%mod;
         b >>= 1;
     }
     return res%mod;
}

//-------------------------Sum/Count of digits----------------------------//

ll sd(ll x){ll temp=0;while(x>0){temp+=x%10;x/=10;}return temp;}
ll cd(ll x){ll temp=0;while(x>0){temp++;x/=10;}return temp;}

//-------------------------------START-------------------------------------//

//insertion sort algorithm

void solve(){ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current and j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<nl;
}

int main(){
     
    ll t = 1, i = 1;
    //cin >> t;
    cout << std::setprecision(15);
    //presolve();
    
    while (t--)
    {
        //cout << "Case #" << i << ": ";   //only during google contest
        //i++;                             //only during google contest
    
        solve();
    }
}
