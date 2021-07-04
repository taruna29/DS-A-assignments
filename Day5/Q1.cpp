#include<bits/stdc++.h>
using namespace std;
int main(){
int no,p;
cin>>no>>p;
vector<vector<int>> a(no,vector<int> (p));
for(int i=0;i<no;i++){
    for(int j=0;j<p;j++){
        cin>>a[i][j];
    }
}
int n;
cin>>n;
    vector<vector<int>> k(no,vector<int> (p));
for(int i=0;i<no*p;i++){
    int t1=(i+n)%(no*p);
    k[t1/p][t1%p]=a[i/p][i%p];
}
for(auto i: k){
    for(int j: i){
        cout<<j<<" ";
    }
    cout<<endl;
}

return 0;
}