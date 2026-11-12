#include <iostream>
#include <string>
using namespace std;

// Record Mahasiswa: 3 field dengan tipe berbeda
struct Mahasiswa {
  int nim;
  string nama;
  float nilai;
};

int main() {
  Mahasiswa mhs[50];
  int n;
  cout << "Jumlah mahasiswa: ";
  cin >> n;

  // 1. Input data
  for (int i = 0; i < n; i++) {
    cout << "Data ke-" << i + 1 << endl;
    cout << "NIM   : "; cin >> mhs[i].nim;
    cout << "Nama  : "; cin >> mhs[i].nama;
    cout << "Nilai : "; cin >> mhs[i].nilai;
  }

  // 2. Tampilkan data + status, sekalian jumlahkan nilai
  float total = 0;
  cout << endl << "=== Data Mahasiswa ===" << endl;
  for (int i = 0; i < n; i++) {
    total += mhs[i].nilai;
    cout << mhs[i].nim << " " << mhs[i].nama << " " << mhs[i].nilai;
    if (mhs[i].nilai >= 60)
      cout << " - lulus" << endl;
    else
      cout << " - tidak lulus" << endl;
  }

  // 3. Cari nilai tertinggi
  int maks = 0;  // simpan indeks mahasiswa dengan nilai tertinggi
  for (int i = 1; i < n; i++) {
    if (mhs[i].nilai > mhs[maks].nilai)
      maks = i;
  }
  cout << "Nilai tertinggi: " << mhs[maks].nama
       << " (" << mhs[maks].nilai << ")" << endl;

  // 4. Rata-rata
  cout << "Rata-rata: " << total / n << endl;

  return 0;
}
