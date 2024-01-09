#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

void solve()
do
     string s;
     getline(cin,s);
     ll cnt=0;
     for(int i=1;i<s.size();i++)
        do
             if(s[i]==' '&& s[i-1]!=' ')
             do
                cnt++;
             done
        done
     cout<<cnt+1<<endl;

done

start_
do
   ll t;
   cin>>t;
   cin.ignore();
   while(t--)
   do
        solve();
   done
   finish
done


