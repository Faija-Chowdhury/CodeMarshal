#include <iostream>
#include<cstdio>
#include<math.h>
using namespace std;
#define M_PI acos(-1.0)
int main() {
	int t;
	double c,d,p,l,r;
	cin>>t;
	while(t--){
	    cin>>p;
	    r = p/2;
	    l = 0.5 * 2 * p *p;
	    c = M_PI *r*r;
	    d= l-c;
	    printf("%0.2lf\n",d);
	    
	    
	}
	return 0;
}
