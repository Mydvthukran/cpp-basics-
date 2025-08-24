#include <iostream>

using namespace std;
int main(){
    int a;
    cout<<"enter the first number : " << endl;
    cin>> a ;

    int b ;
    cout<<"enter the second number : " << endl ;
    cin>>b;

    char op;
    cout<<"enter the opration: " <<endl;
    cin>> op;

    switch(op){
        case '+' : cout<< (a+b);
        break;

        case '-' : cout<< (a-b) ;
        break;

        case '*' : cout<<(a*b) ;
break;

        case '/' : cout<< (a/b) ;
    }
    
}
