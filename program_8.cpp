#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,even_num=0,odd_num=0,n;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    if(n%2==0)
	        even_num+=1;
	    else
	        odd_num+=1;
	    t--;
	    
	}
	if(even_num>odd_num)
	    cout<<(even_num-odd_num);
	else
	    cout<<(odd_num - even_num);
	
	return 0;
}
