#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int>aa(n);
    for(int i=0;i<n;i++){
      cin>>aa[i];
    }
int min = *min_element(aa.begin(),aa.end());
cout<<min;
int max = *max_element(aa.begin(),aa.end());
cout<<max;
int acc  = accumulate(aa.begin(),aa.end(),0);
cout<<acc;
int cnt = count(aa.begin(),aa.end(),6);
cout<<cnt;
auto itt = find(aa.begin(),aa.end(),10);
reverse(aa.begin(),aa.end());
string w="abcdefg";
reverse(w.begin()+1,w.end());
cout<<w<<endl;
}