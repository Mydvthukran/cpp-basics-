#include <iostream>
using namespace std;
int main (){
    int day ;
    cout<< "enter a day " ;
    cin>>  day ;
    switch (day){
        case 1 : cout<<"sunday" ;
        break ;
        case 2: cout<<"monday";
        break ;
        case 3:cout << "tueday";
        break;
        case 4: cout << "wednesday";
        break;
        case 5: cout << "thursday";
        break;
        case 6: cout << "friday";
        break;
        case 7: cout << "saterday";
        break;
        default: cout<< "not a day";
    }
    return 0;

}