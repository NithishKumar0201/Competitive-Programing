#include <bits/stdc++.h>
using namespace std;

int main()
{int i,j,temp;
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    cout << "\nArray after sorting using "
         "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

        cout<<endl;
         //  cout<<arr[n-1];
            cout<<endl;
          for(j=0;j<n;j=j+2)
          {

           temp=arr[n-1];
        for(i=n-1;i>j;i--){

        arr[i]=arr[i-1];
    }
   // cout<<i<<endl;
    arr[j]=temp;}
 for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}
