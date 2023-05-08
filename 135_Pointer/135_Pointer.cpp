#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim() {
        cout << "No induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{ 1 }; // Object mhs
    mhs.showNim(); // Member Acces Operator

    mahasiswa& refMhs = mhs; // Pointer reference RefMhs
    refMhs.nim = 2; // Member Acces Operator
    mhs.showNim();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
