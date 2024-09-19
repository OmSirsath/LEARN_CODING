#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,sum=0;

    cout<<"Enter two number :"<<endl;
    cin>>n1>>n2;

    for(i=n1; i<=n2; i++){
        sum=sum+i;
    }
    cout<<"sum is :"<<sum;
    return 0;
}