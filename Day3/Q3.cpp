#include<bits/stdc++.h>
using namespace std;
int main()
{
int m;
cin>>m;
vector<int> ve(m);
for(int i=0;i<m;i++){
cin>>ve[i];
}
for(int i=1;i<ve.size();i+=2)
{
int freq=ve[i-1];
for(int j=0;j<freq;j++){
cout<<ve[i]<<" ";
}
}
return 0;
}
