#include<iostream>
using namespace std;
int main(){
    int t,n ;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n=n/10;
        }
        cout<<sum<<endl;
    }
}