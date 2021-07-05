
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string allow;
cin>>allow;
cin>>n;
vector<string> word(n);
for(int i=0;i<n;i++)
{
cin>>word[i];
}
 vector<int> a(26,0);
for(auto i: allow)
{
a[i-'a']++;
}
int count=0;
for(auto i: word)
{
bool f=true;
for(auto j: i)
{
if(a[j-'a']==0)
{
f=false;
break;
}
}
if(f==true)
{
count++;
}
}
cout<<count<<endl;
return 0;
}
