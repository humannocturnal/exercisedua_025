#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; // variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() { // constructor
        x = 0;
    }
    virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas(int a) { return 0; } // fungsi untuk menghitung luas
    virtual float Keliling(int a) { return 0; } // fungsi untuk menghitung keliling
    void setX(int a) { // fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { // fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};
class Lingkaran : public bidangDatar {
public:
    void input() {
        cout << "Masukkan jejari: ";
        int r;
        cin >> r;
        setX(r);
    }
    float Luas(int r) {
        return 3.14 * r * r;
    }
    float Keliling(int r) {
        return 2 * 3.14 * r;
    }
};

class Bujursangkar : public bidangDatar {
public:
    void input() {
        cout << "Masukkan sisi: ";
        int s;
        cin >> s;
        setX(s);
    }
    float Luas(int s) {
        return s * s;
    }
    float Keliling(int s) {
        return 4 * s;
    }
};

int main() {
    bidangDatar* bd1 = new Lingkaran();
    cout << "Lingkaran dibuat\n";
    bd1->input();
    int r = bd1->getX();
    cout << "Luas Lingkaran = " << bd1->Luas(r) << endl;
    cout << "Keliling Lingkaran = " << bd1->Keliling(r) << endl;

    bidangDatar* bd2 = new Bujursangkar();
    cout << "Bujursangkar dibuat\n";
    bd2->input();
    int s = bd2->getX();
    cout << "Luas Bujursangkar = " << bd2->Luas(s) << endl;
    cout << "Keliling Bujursangkar = " << bd2->Keliling(s) << endl;

    delete bd1;
    delete bd2;

    return 0;
}