#include <iostream>

using namespace std;

void toc(int n,char pole1,char pole2,char pole3 ){
    if(n==1){
        cout<<"MOVE DISK "<<n<<" FROM POLE "<<pole1<<" TO POLE "<<pole3<<endl;
        return;}
    toc(n-1,pole1,pole3,pole2);
    cout<<"MOVE DISK "<<n<<" FROM POLE "<<pole1<<" TO POLE "<<pole3<<endl;
     toc(n-1,pole2,pole1,pole3);
}
//intha problem knjm confusing aa than da irukum. but romba super aa iruku...recursion naa evalo gethu ippa tha therithu...
//nxt time pakura appo purilana, tension aaagatha; gfg cp-1 la intha video track la irukum paaru...nalla puriyum...all the best chellam!
int main()
{   int n;
    cout<< "Enter the no of disks in the tower initially:"<<endl;
    cin>>n;
    char A='A',B='B',C='C';
    toc(n,A,B,C);
  //  cout << "Hello world!" << endl;
    return 0;
}
