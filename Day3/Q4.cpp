#include<bits/stdc++.h>
using namespace std;
int main(){
int m;
cin>>m;
vector<int> arr(m);
for(int i=0;i<m;i++){
cin>>arr[i];
}
int f;
cin>>f;
vector<int> ve;
ve.push_back(f);
for(auto i: arr){
ve.push_back(i^v.back());
}
for(auto i:ve)
cout<<i<<" ";
return 0;
}
