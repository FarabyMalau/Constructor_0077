#include <iostream>
using namespace std;

class Barang {
    private:
        string namaBarang;
        int kodeBarang;
    public:
        Barang(string nama, int kode) {
            this->namaBarang = nama;
            this->kodeBarang = kode;
        }

        void output() {
            cout << "Nama Barang : " << this->namaBarang << endl;
            cout << "Kode Barang : " << this->kodeBarang << endl;
        }
};

int main() {
    Barang *a = new Barang("Samsung Galaxy 30 Ultra", 50634628);
    a->output();

    return 0;
}