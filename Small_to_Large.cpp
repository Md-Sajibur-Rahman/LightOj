#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

/*void solve()
do
    int n=3;
    int a[n+5]={0};
    for(ll i=0;i<n;i++)
        do
            cin>>a[i];
        done
        sort(a,a+n);
    for(ll i=0;i<n;i++)
    do
         cout<<a[i]<<" ";
    done
    cout<<endl;
done*/

start_
do
   ll t;
   cin>>t;
   //cin.ignore();
   for(ll i=1;i<=t;i++)
   do

        //solve();
        int n=3;
    int a[n+5]={0};
    for(ll i=0;i<n;i++)
        do
            cin>>a[i];
        done
        sort(a,a+n);
    cout<<"Case "<<i<<": ";
    for(ll i=0;i<n;i++)
    do
         cout<<a[i]<<" ";
    done
    cout<<endl;
   done
   finish
done


