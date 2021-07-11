#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
vector<vector<int>> arr(a,vector<int> (b));
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
cin>>arr[i][j];
}
}
 vector<vector<int>> A(b,vector<int> (a));
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
A[i][j]=arr[j][i];
}
}
for(auto i: A)
{
for(auto j: i)
{
cout<<j<<" ";
}
cout<<endl;
}
return 0;
}
