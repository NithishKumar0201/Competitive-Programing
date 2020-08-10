#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 /*
 Input:
2
4 6
1 2 3 4 5 6
1 2
3 4

Output:
-1 -1 -1 1 2 3
3 4

Explanation:
Testcase1:
k = 4
For 1, the 4th largest element doesn't exist so we print -1.
For 2, the 4th largest element doesn't exist so we print -1.
For 3, the 4th largest element doesn't exist so we print -1.
For 4, the 4th largest element is 1 {1, 2, 3, 4}
For 5, the 4th largest element is 2 {2, 3, 4 ,5}
for 6, the 4th largest element is 3 {3, 4, 5}
 */
 void kthLargest(int a[], int n, int k)
{
    int i;
    vector <int> vec;
    priority_queue<int,vector<int>,greater<int>>pq;
    if(k>n)
    {
        return ;
    }
    for(i=0;i<n;i++){
        if(pq.size()<k){
            if(pq.size()==k-1){
                pq.push(a[i]);
                cout<<pq.top()<<" ";
            }
            else{
                 cout<<"-1"<<" ";
            pq.push(a[i]);
            }
        }
        else if(pq.top()<a[i]){
            pq.pop();
            pq.push(a[i]);
            cout<<pq.top()<<" ";
        }
         else
        cout<<pq.top()<<" ";
    }
}

int main()
{
      int a[]={5,2,6,1,7,6};
    kthLargest(a,5, 3);
   // cout << "Hello world!" << endl;
    return 0;
}
