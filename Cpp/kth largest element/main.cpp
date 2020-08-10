#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

void kLargest(int a[], int n, int k){
    // your code here
    int i;
    vector <int> vec;
    priority_queue<int,vector<int>,greater<int>>pq;
    if(k>n)
    {
        return;
    }
    for(i=0;i<n;i++){
        if(pq.size()<k){
            pq.push(a[i]);
        }
        else if(pq.top()<a[i]){
            pq.pop();
            pq.push(a[i]);
        }
    }
    while(!pq.empty()){
        vec.push_back(pq.top());
        //cout<<pq.top()<<" ";
        pq.pop();
    }
    sort(vec.rbegin(),vec.rend());
    for(auto it: vec)
    cout<<it<<" ";
    cout<<endl;
}

int main()
{
     int a[]={5,2,6,1,7,6};
    kLargest(a,5, 3);
   // cout << "Hello world!" << endl;
    return 0;
}
