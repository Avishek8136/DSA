#include<iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,d;
	cout << "Enter three numbers ";
	cin >> a >> b >> c;
	d = max(a,b); //3 comparisons didnt worked at the same time
	d=max(d,c);
	cout << "The greatest number is " << d;
	return 0;
}
