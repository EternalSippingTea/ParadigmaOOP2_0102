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
