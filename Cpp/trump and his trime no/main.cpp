#include <iostream>
using namespace std;
void prime(int ca[],int m,int tem,int i){
static    int count=0;


    if(tem>ca[i]){
         if(count==3)
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
     count=0;
      return;
    }

    if(not(ca[i]%tem))
        count++;

    prime(ca,m,tem+1,i);

}
// not working for biggest value ..showing some error....submit panna seg fault kamikum...so sieve nu oru method use pannu...striver solli kuduthurupan..ask k..
int main() {
	//code
	int n,i,temp=1;
	cin>>n;
	int c[n];
	for(i=0;i<n;i++){
        cin>>c[i];
	}
	for(i=0;i<n;i++){
      prime(c,n,temp,i);
	}

	return 0;
}
