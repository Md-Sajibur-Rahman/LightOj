#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

ll fact(ll n)
do
     if(n==0) return 1;
     else return n*fact(n-1);
done

start_
do
   ll t;
   cin>>t;
   //cin.ignore();
   while(t--)
     do
         ll n;cin>>n;
         ll x=fact(n);
         cout<<x<<endl;
     done
    finish
done






