#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int>aa(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
sort(a,a+n);
sort(aa.begin(),aa.end());
      for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
int *ptr = lower_bound(a,a+n,5);
auto it = lower_bound(aa.begin(),aa.end(),5);
int *pr = upper_bound(a,a+n,5);
if(ptr == (a+n)){
    cout<<"NOT FOUND";
    return 0;
}
cout<<*ptr<<endl;
cout<<*pr<<endl;
cout<<ptr<<endl;
cout<<pr<<endl;
cout<<*it;
    

}