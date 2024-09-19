//write a proram to print the person is eligible for voting or not.
/*#include<iostream>
using namespace std;
int main(){
    int age;
     cout<<"Enter the age of the person:"<<endl;
     cin>>age;

     if(age>=18){
        cout<<"the person is eligible for vote."<<endl;

     }
     else{
        cout<<"the person is not eligile for vote."<<endl;
     }
    return 0;
}
--------------------------------------------------------------*/

//Write a program to print the person is adult or not .

#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"Enter the age:"<<endl;
    cin>>age;

    if(age<=14){
        cout<<"It is Teenager"<<endl;
    }
    else if(age>14 && age<18){
        cout<<"It is young"<<endl;
    }
    else if(age>=18){
        cout<<"It is adult"<<endl;
    }
    return 0;
}

