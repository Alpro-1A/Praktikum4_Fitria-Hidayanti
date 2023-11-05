#include <iostream>

using namespace std;

int main(){
    int angka;
    cout << "masukkan tinggi piramida : ";
    cin >> angka;

     for (int i = 1; i <= angka; i++){
            for (int j = angka; j > i; j--){
                    cout << " ";
            }
            for(int k = 1; k <= (2*i-1); k++){
                cout << "* ";
            }

            cout << endl;
        }
    return 0;
}
