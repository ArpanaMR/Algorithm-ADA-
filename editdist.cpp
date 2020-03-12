#include <iostream>
using namespace std;


int distance(string X, int m, string Y, int n)
{
	
	if (m == 0)
		return n;

	if (n == 0)
		return m;

	int dis;


	if (X[m - 1] == Y[n - 1])
		dis = 0;
	else
		dis = 1;
	
	return min (min(distance(X, m - 1, Y, n) + 1,  
			distance(X, m, Y, n - 1) + 1),		 
			distance(X, m - 1, Y, n - 1) + dis);  
}


int main()
{
	string s1,s2;
	cout<<"Enter the two strings"<<endl;
	cin>>s1;
	cin>>s2;

	cout << "The edit Distance is " << 
			distance(s1, s1.length(),s2,s2.length());

	return 0;
}

/*
Enter the two strings
bcd
cc
The edit Distance is 2
*/