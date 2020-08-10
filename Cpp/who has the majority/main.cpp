#include <iostream>

using namespace std;
int majorityWins(int arr[], int n, int x,int y)
{
    int count_x=0;//counter to count frequency of x
    int count_y=0;//counter to count frequency of y

    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x)
        count_x++;
        if(arr[i]==y)
        count_y++;
    }

    if(count_x>count_y)
    //Complete this
    cout<<x;
    else if(count_y>count_x)
    //Complete this
    cout<<y;
    else
    //Complete this
    cout<<(x<y)?x:y;
}
int main()
{
    int arr[]={'1','1','2','2','3','3','4','4','4','4','5'};
    majorityWins(arr, 11, 4,5);
    return 0;
}
