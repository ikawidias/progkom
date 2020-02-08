#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int tahun = 2020;
    if(tahun%4==0){
        cout<<tahun<<" adalah tahun kabisat";
    }else{
        cout<<tahun<<" bukan tahun kabisat";
    }
    return 0;
}
