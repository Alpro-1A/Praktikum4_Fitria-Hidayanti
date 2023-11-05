#include <iostream>

using namespace std;

int main()
{
    cout << "program bilangan ganjil, genap, prima" << endl;

    int batas;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    // Bil Ganjil
    do {
        cout << "masukkan batas bilangan positif : ";
        cin >> batas;
    } while (batas <=0);

    cout << "bilangan ganjil antara 1 dan" << batas << "adalah: ";
    for (int j = 1; j <= batas; ++j){
        if (j % 2 != 0) cout << j << " ";
        if (j % 2 != 0) jumlahGanjil += j;
    } cout << endl;

    // Bil Genap
    cout << "bilangan genap antara 1 dan" << batas << "adalah: ";
        for (int k = 1; k <= batas; ++k){
        if (k % 2 == 0) cout << k << " ";
        if (k % 2 == 0) jumlahGenap += k;
    } cout << endl;

    // Bil Prima
   cout << "bilangan prima antara 1 dan" << batas << "adalah: ";
        for (int i = 2; i <= batas; ++i){
            int bilanganPrima = 1;
            for  (int j = 2; j * j <= i; ++j){
                if (i % j == 0);{
                    bilanganPrima = 0;
                    break;
                    }
        }
        if (bilanganPrima == 1){
            cout << 1 << " ";
            jumlahPrima += i;{
            }
        }   cout << endl;

        cout << "jumlah semua bilangan ganjil antara 1 dan " << batas << " adalah : " << jumlahGanjil << endl;
        cout << "jumlah semua bilangan genap antara 1 dan " << batas << " adalah : " << jumlahGenap << endl;
        cout << "jumlah semua bilangan prima antara 1 dan " << batas << " adalah : " << jumlahPrima << endl;


    cout << "faktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    for (int d = 1; d <= jumlahGanjil; d++){
        if (jumlahGanjil % d == 0){
            cout << d << " ";
        }
    }
    cout << endl;

    cout << "faktor-faktor dari jumlah bilangan genap tersebut adalah: ";
    for (int e = 1; e <= jumlahGenap; e++){
        if (jumlahGenap % e == 0){
            cout << e << " ";
        }
    }
    cout << endl;

    cout << "faktor-faktor dari jumlah bilangan prima tersebut adalah: ";
    for (int f = 1; f <= jumlahPrima; f++){
        if (jumlahPrima % f == 0){
            cout << f << " ";
        }
    }
    cout << endl;
    return 0;
}
