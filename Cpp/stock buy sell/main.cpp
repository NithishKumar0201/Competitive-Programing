#include <iostream>

using namespace std;
void stockBuySell(int price[], int n)
{ //Interval p1;
    int i,profit=0,enda=0,key=0,first=0,ex=0;
    for(i=1;i<n;i++){
        if(price[i]>price[i-1]) {
            key=1;
            first=1;
            profit+=(price[i]-price[i-1]);
     //   enda=0;
     }
/*else if((price[i]>price[i-1]) && i>=n-1){
            key=0;
            ex=0;
            first=1;
           // cout<<"i m here";
        profit+=(price[i]-price[i-1]);
     //   enda=0;
     i++;

        }*/

        else {
            key=0;
            ex=0;
        }
        if(key==0 && ex==0 && first!=0){
             cout<<" "<<i-1<<") ";
        }
        if(key == 1 && ex!=1){
            cout<<"("<<i-1;
            ex=1;
        }
    }
    // Your code here
if(profit==0) cout<<"No Profit";
}


int main()
{
	int arr[]= {4,2,2,2,4};  //creating an array
    int n = sizeof(arr)/sizeof(arr[0]); //size of the array
    stockBuySell(arr,n);
    return 0;
}
/*
void stockBuySell(int price[], int n)
{
    int i,j,k,flag=0;
    for(i=0;i<n;i++) {
        if(price[i]<price[i+1]&&flag==0) {
            j=i;
            flag=1;
            cout<<"("<<j<<" ";
        }
        else
         if(price[i]>price[i+1]&&flag==1) {
            k=i;
            flag=0;
            cout<<k<<")"<<" ";
        }
    }

}
*/
