#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

void solve()
do
     string s;getline(cin>>ws,s);
     char ch;cin>>ch;
     ll len=s.size();
     ll cnt=0;
     for(ll i=0;i<len;i++)
        do
             if(s[i]==ch)
             cnt++;
        done
        if(cnt>0)
       cout<<"Occurrence of "<<"'"<<ch<<"' "<<"in "<<"'"<<s<<"'"<<" = "<<cnt<<endl;
         else
         cout<<"'"<<ch<<"' is not present"<<endl;
done

start_
do
   ll t;
   cin>>t;
   cin.ignore();
   while(t--)
     do
          ///By the way there is a problem in problem statement
          solve();
     done

    finish
done








