#include <iostream>
using namespace std;

class orang {
public:
    int umur;

    orang(int pUmur) : 
        umur(pUmur)
    {
        cout << "orang dibuat dengan umur " << umur << endl;
    }
};

class pekerja : public orang {
public:
    pekerja(int pUmur) :
        orang(pUmur) 
    {
        cout << "pekerja dibuat" << endl;
    }
};

int main() {
    return 0;
}