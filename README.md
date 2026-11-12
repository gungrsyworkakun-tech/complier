# Pendataan Nilai Mahasiswa (C++)

Program C++ untuk mendata nilai mahasiswa memakai `struct`, array, loop, dan `if`.
Tugas Algoritma dan Struktur Data, Pertemuan 7 (Struktur Data Record).

Fitur: input data n mahasiswa, tampil data + status lulus (nilai >= 60),
cari nilai tertinggi, dan hitung rata-rata.

## Struktur folder

```
src/pendataan_mahasiswa.cpp        kode program
input_contoh.txt                   data contoh untuk uji otomatis
.github/workflows/...yml           compile + jalankan otomatis di GitHub
.devcontainer/devcontainer.json    pengaturan untuk GitHub Codespaces
```

## Cara 1: Compile otomatis (GitHub Actions)

1. Upload semua file ini ke repository GitHub kamu (tombol Add file > Upload files).
2. Buka tab **Actions**. Workflow "Compile dan Jalankan C++" jalan sendiri.
3. Klik run terbaru > job **build** > langkah **Jalankan program dengan data contoh**
   untuk melihat hasil program (bisa di-screenshot untuk laporan).

Kalau ada tanda centang hijau, kodenya berhasil di-compile dan dijalankan.
Tanda silang merah berarti ada error, klik langkahnya untuk melihat pesan error.

## Cara 2: Compile dan input sendiri (GitHub Codespaces)

1. Di halaman repository, klik tombol hijau **Code** > tab **Codespaces** > **Create codespace**.
2. Tunggu editor VS Code terbuka di browser, lalu buka **Terminal**.
3. Jalankan:

```
g++ -o pendataan src/pendataan_mahasiswa.cpp
./pendataan
```

Di sini kamu bisa mengetik data sendiri, tidak hanya data contoh.

## Cara 3: Di laptop

```
g++ -o pendataan src/pendataan_mahasiswa.cpp
./pendataan
```

Catatan: maksimal 50 mahasiswa, dan nama diisi satu kata (tanpa spasi).
