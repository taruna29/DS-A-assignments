#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
vector<int> v(num);
for(int i=0;i<num;i++){
cin>>v[i];
}
 map<int,int> a;
for(auto i: v)
{
a[i]++;
}
int s=0,t;
for(auto i:a)
{
t=i.second;
a[i.first]=s;
s+=t;
}

for(auto i: v)
{
if(a.count(i))
{
cout<<a[i]<<" ";
}
}
return 0;
}
