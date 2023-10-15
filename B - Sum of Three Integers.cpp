                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B - Sum of Three Integers
Problem link : https://atcoder.jp/contests/abc051/tasks/abc051_b
Platform     : AtCoder
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve()
{
    ll k,s, r;
    cin>>k>>s;
    ll ans=0;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            r = s - i -j;
            if(0<=r && r<=k)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH