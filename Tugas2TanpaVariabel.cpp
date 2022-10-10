#include<iostream>
using namespace std;
int main (){
    int x=10, y=15, temp;
    cout << endl;
    //pertukaran yang tidak pakai variabel sementara
    cout << "nilai awal x=" << x << " dan y=" << y << endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "setelah ditukar x=" << x << " dan y=" << y << endl;
    return 0;
}
