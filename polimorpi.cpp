#include <iostream>
using namespace std;

class seseorang { 
    public:
        virtual void pesan() {
            cout << " Pesan dari Seseorang " << endl;
        }
};

class joko : public seseorang {
    public:
        void pesan() {
            cout << " Pesan dari Joko " << endl;
        }
};

class lia : public seseorang {
    public:
        void pesan() {
            cout << " Pesan dari Lia " << endl;
        }
};

int main() { 
    seseorang *objek;
    joko a;
    lia b;

    objek = &a;
    objek->pesan();
    objek = &b;
    objek->pesan();
    a.seseorang :: pesan();
    b.seseorang :: pesan();

    return 0;
}