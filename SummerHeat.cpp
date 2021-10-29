#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t, xa,xb, Xa,Xb,s;
	cin>>t;
	
	while(t--){
	    cin>>xa>>xb>>Xa>>Xb;
	    s = (Xa/xa)+(Xb/xb);
	    cout<<s<<endl;
	}
	
	return 0;
}
