#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int r;
    while (b!=0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while (T--) {
	    int N;
	    cin >> N;
	    int ucln;
	    int a, b;
	    cin >> a;
	    if (N == 1) {
	        ucln = a;
	    } else {
	        for (int i = 1; i < N; i++) {
	            cin >> b;
	            ucln = gcd(a, b);
	            a = gcd(a, b);
	        }
	    }
	    int oper = 0;
	    while (ucln % 2 == 0) {
	        oper++;
	        ucln = ucln / 2;
	    }
	    cout << oper << endl;
	}
	return 0;
}
