#include <iostream>
using namespace std;

// Abstract base class
class RekeningBank {
protected:
    double saldo;

public:
    RekeningBank(double s) : saldo(s) {}

    virtual void potongAdmin() = 0;

    void tampilSaldo() {
        cout << "Saldo akhir: Rp " << saldo << endl;
    }
};

// Rekening Syariah
class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        cout << "Rekening Syariah: Tidak ada potongan admin" << endl;
    }
};

// Rekening Konvensional
class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        saldo -= 15000;
        cout << "Rekening Konvensional: Potong admin Rp 15000" << endl;
    }
};

// Rekening Premium (yang kamu diminta bikin)
class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        if (saldo > 10000000) {
            cout << "Rekening Premium: Bebas biaya admin" << endl;
        } else {
            saldo -= 50000;
            cout << "Rekening Premium: Potong admin Rp 50000" << endl;
        }
    }
};

int main() {
    RekeningBank* rekening[3];

    rekening[0] = new RekeningSyariah(8000000);
    rekening[1] = new RekeningKonvensional(8000000);
    rekening[2] = new RekeningPremium(8000000);

    for (int i = 0; i < 3; i++) {
        rekening[i]->potongAdmin();
        rekening[i]->tampilSaldo();
        cout << endl;
    }

    return 0;
}