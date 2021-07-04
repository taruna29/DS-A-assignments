#include<bits/stdc++.h>
using namespace std;
vector<int> sequence(const vector<int>& arr){
 int a=arr.size();
 int mid=a/2;
    vector<int> b(a);
    int c=0;
    for(int i=0;i<mid;i++){
        b[c++]=arr[i];
        b[c++]=arr[i+mid];
    }
return b;
}
int main(){
int a;
cin>>a;
vector<int> b(a);
for(int i=0;i<a;i++){
    cin>>b[i];
}
vector<int> arr=sequence(a);

for(auto i: arr){
    cout<<i<<" ";
}
return 0;
}
