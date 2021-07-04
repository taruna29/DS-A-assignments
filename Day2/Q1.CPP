#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
vector<vector<int>> mat(a,vector<int> (b));
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        cin>>mat[i][j];
    }
}
int ans=INT_MIN;
for(auto i: mat){
    int sum=0;
    ans=max(ans,accumulate(i.begin(),i.end(),sum));
}
cout<<ans<<endl;
return 0;
}
