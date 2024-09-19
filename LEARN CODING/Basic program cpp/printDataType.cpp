#include<iostream>
using namespace std;
int main(){
    int a;
    float b;
    char c;
    double d;
    bool e;
    long f;
    short g;

    cout<<"int ="<<sizeof(a)<<" byte"<<endl;
    cout<<"float ="<<sizeof(b)<<" byte"<<endl;
    cout<<"char ="<<sizeof(c)<<" byte"<<endl;
    cout<<"double ="<<sizeof(d)<<" byte"<<endl;
    cout<<"bool ="<<sizeof(e)<<" byte"<<endl;
    cout<<"long ="<<sizeof(f)<<" byte"<<endl;
    cout<<"short ="<<sizeof(g)<<" byte";
    
    return 0;
}