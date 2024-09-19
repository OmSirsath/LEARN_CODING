#include<iostream>
using namespace std;
int main (){
    int mark;

    cout<<"Enter the mark of student :"<<endl;
    cin>>mark;

    if(mark>=40){
        cout<<"Student are pass"<<endl;
        cout<<"congratulation !";
    }
    else{
        cout<<"Student are fail."<<endl;
        cout<<"Better luck."<<endl;
        cout<<"Try to next time.";
    }
    return 0;
}