#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    for(int i=0;i<8;i++){
        printBinary(i);
if(i&1){
    
    cout<<"odd"<<endl;
}
else{
    cout<<"even";
}
    }
    int n=5;
    cout<<(n>>1);//devide by 2
    cout<<(n<<1);//multiply by 2


    // uppercase to lower here 5 bit differnt  in lower 5th bit set
    char A='A';
    char a=A|(1<<5);
    cout<<a;
    char b='b';
    char B=(b&(~(1<<5)));
    cout<<B;
    cout<<char('c'&'_')<<endl;
    cout<<char('C'|' ')<<endl;
    if(n&(n-1)){
        cout<<"not power of two";
    }
    else{
        cout<<"power of two";
    }
}