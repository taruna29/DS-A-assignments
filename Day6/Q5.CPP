#include<bits/stdc++.h>
using namespace std;
int projectionArea(vector<vector<int>>& ans)
{
int na=ans.size();
int sum=0;
for(int i=0;i<n;i++)
{
sum+=*max_element(ans[i].begin(),ans[i].end());
}
int k=0;
for(int i=0;i<na;i++)
{
int maxi=0;
for(int j=0;j<na;j++)
{
maxi=max(maxi,ans[j][i]);
if(ans[i][j]==0){
k++;
}
}
sum+=maxi;
}
return sum+pow(n,2)-k;
}
int main(){
int na;
cin>>na;
vector<vector<int>> arr(na,vector<int> (na));
for(int i=0;i<na;i++)
{
for(int j=0;j<na;j++)
{
cin>>arr[i][j];
}
}
cout<<projectionArea(arr)<<endl;
return 0;
}
