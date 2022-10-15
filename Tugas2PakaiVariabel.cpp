#include<iostream>
using namespace std;
int main(){
    int x=11, y=18, temp;
    //pertukaran yang pakai variabel sementara
    cout << "Nilai Awal x=" << x << " dan y=" << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "Setelah ditukar x=" << x << " dan y=" << y << endl;
return 0;
}
