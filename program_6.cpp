#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    int num=0;
	    while(n!=0){
	        num=num*10+n%10;
	        n=n/10;
	    }
	    cout<<num<<endl;
	    t--;
	}
	return 0;
}
