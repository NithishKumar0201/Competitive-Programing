/*#include <iostream>

using namespace std;


int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n],i,j,k,count=0;
	    for(i=0;i<n;i++)
	        arr[i]=i+1;
	   for(i=n-1;i>=0;i--){
	       for(j=i-1;j>=0;j--){
	           k=arr[i]-arr[j];
	          if(k!=1){
	           if(n%k==0){
                    cout<<"";
	           count++;
	           arr[i]=arr[j]='\0';
	           break;}
	       }
	       }

	   }
	   cout<<count<<endl;
	}
	return 0;
}
//wrong implementation
//correct Answer is given below...it is a gcd problem/*
*/
#include <bits/stdc++.h>
using namespace std;

long gcdVector(vector<long> v) {
	long gcd = v[0];
	if (gcd == 1)
		return gcd;
	for (int i = 1; (unsigned) i < v.size(); i++) {
		gcd = __gcd(gcd, v[i]);
		if (gcd == 1)
			return gcd;
	}
	return gcd;
}

vector<long> getDivisors(long n) {
	vector<long> v;
	v.push_back(n);
	for (long i = 2; i <= sqrt(n); i++)
		if (n % i == 0) {
			if (n / i == i)
				v.push_back(i);
			else {
				v.push_back(i);
				v.push_back(n / i);
			}
		}
	return v;
}

int main() {
	int t;
	cin >> t;
	long n;
	while (t--) {
		cin >> n;
		cout << gcdVector(getDivisors(n)) << endl;
	}
	return 0;
}
//*/
