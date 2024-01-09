#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

void solve()
do
    ll n;cin>>n;
    int a[100005]={0};
    ll k=0;
    for(ll i=5;i<=1000;i=i*5)
     do
          a[k]=n/i;
          k++;
     done
     ll sum=0;
     for(ll i=0;i<k;i++)
        do
             sum+=a[i];
        done
        cout<<sum<<endl;
done

start_
do
   ll t;
   cin>>t;
   //cin.ignore();
   while(t--)
     do

          solve();
     done

    finish
done







