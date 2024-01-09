#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

void solve()
do
     int a[100005]={0};
     ll sum=0;
     string s;cin>>s;
     ll len=s.size();
     for(ll i=0;i<len;i++)
        do
             a[i]=s[i]-48;
        done
     sum=a[0]+a[len-1];
     cout<<"Sum = "<<sum<<endl;
done

start_
do
   ll t;cin>>t;
   while(t--)
   do
       solve();
   done
   finish
done

