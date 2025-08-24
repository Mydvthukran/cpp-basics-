#include <iostream>
using namespace std;
int main (){
    int a ;
    int b ;
    
    cin >> a ;

    cin >> b ;
    int ans = 1;
    for (int i =1;i<=b;++i){
        ans=ans*a;
    }

    cout<<"answer is   " << ans ;

}