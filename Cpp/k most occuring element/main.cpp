#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int print_N_mostFrequentNumber(int a[],int n, int k)
{ int max1=0,max2=0;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
        max1=max(max1,mpp[a[i]]);
    }
    cout<<max1<<endl;

	// Your code here
}

int main()
{
     int a[]={5,2,6,1,7,6};
   print_N_mostFrequentNumber(a,6, 2);
   // cout << "Hello world!" << endl;
    return 0;
}
