#include <iostream>
#include <string>
using namespace std;

class siswa;

class orang {
private:
    string nama;
public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa {
private:
    int id;
public:
    void setid(int Pid);
    void displayAll(orang& a);
};

void siswa::displayAll(orang& a) {
    cout << id << endl << a.nama;
}
void orang::setNama(string pNama) {
    nama = pNama;
}
void siswa::setid(int pid) {
    id = pid;
}

int main()
{
    std::cout << "Hello World!\n";
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
