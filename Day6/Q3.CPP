#include<bits/stdc++.h>
using namespace std;
bool isToeplitzMatrix(vector<vector<int>>& ar) {
int a=ar.size();
int b=ar[0].size();
int flag=true;
for(int i=1;i<a;i++)
{
for(int j=1;j<b;j++)
{
if(ar[i-1][j-1]!=ar[i][j])
{
flag=false;
break;
}
}
if(!flag) break;
}
return flag;
}
int main()
{
int a,b;
cin>>a>>b;
vector<vector<int>> arr(a,vector<int> (b));
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
cin>>ar[i][j];
}
}
isToeplitzMatrix(arr)==0?cout<<"NOT SPECIAL"<<endl:cout<<"SPECIAL "<<endl;
return 0;
}
