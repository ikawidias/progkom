#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int bilangan;
    std::cout << "masukan bilngan ->" << '\n';
    cin >> bilangan;
    if(bilangan%2==0){
        cout<<bilangan<<" adalah bilangan genap";
    }else{
        cout<<bilangan<<" adalah bilangan ganjil";
    }
    return 0;
}
