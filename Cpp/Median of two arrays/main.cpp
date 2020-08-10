#include <iostream>
using namespace std;

int getMed(int arr1[],int arr2[],int n1,int n2){
    int i,begin1=0,end1=n1,i1,i2;
        int min1,min2,max1,max2;

 	for(i=0;i<n1;i++)
	   cout<<arr1[i]<<" ";
	   cout<<endl;
	for(i=0;i<n2;i++)
	   cout<<arr2[i]<<" ";
    cout<<endl;
    while(begin1<=end1){
    i1=(begin1+end1)/2;
    i2=((n1+n2+1)/2)-i1;
        min1=(i1==n1)? INT_MAX :arr1[i1];
        max1=(i1==0)? INT_MIN :arr1[i1-1];
    min2=(i2==n2)?   INT_MAX :arr2[i2];
    max2=(i2==0)? INT_MIN :arr2[i2-1];

    if(max1<=min2 && max2<=min1){
        if(((n1+n2)%2)==0)
        return ((double) max(max1,max2)+min(min1,min2))/2;
        else
        return (double) max(max1,max2);
    }
    else if(max1>min2)
    end1=i1-1;
    else
    begin1=i1+1;
    }


}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	int i,n1,n2;
	cin>>n1>>n2;
	int arr1[n1],arr2[n2];
	for(i=0;i<n1;i++)
	   cin>>arr1[i];
	for(i=0;i<n2;i++)
	   cin>>arr2[i];
   cout<< getMed((n1<=n2)?arr1:arr2,(n1>n2)?arr1:arr2,(n1<=n2)?n1:n2,(n1>n2)?n1:n2);

	}
	cout<<endl;
		return 0;
	}
/*
        int INT_MAX=+2147483647;
        int INT_MIN=-2147483648;*/
