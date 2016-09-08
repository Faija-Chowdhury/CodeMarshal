#include <iostream>
using namespace std;

int main() {
  int t,p,q,s;
  cin>>t;
	while(t--){
	    cin>>p>>q;
	    s = q - p;
	    if( s<=6 && s>0)
	      cout<<"Yes\n";
	    else cout<<"No";
	    
	}
	return 0;
}
