#include <bits/stdc++.h>
using namespace std;

bool find(int arr[],int siz,int k){

    if(siz==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
      bool r=  find(arr+1,siz-1,k);
      return r;
        
    }

}

int main(){
    int arr[5]={2,4,5,6,7};
    int siz=5;
    int k = 7;
   bool an= find(arr,siz,k);
   cout<<an;
    return 0; 
}
