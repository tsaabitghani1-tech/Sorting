# angka = [5,2,9,1]

# angka.sort()
# print("Ascending:", angka)

# angka.sort(reverse=True)
# print("Descending:", angka)

#latihan1
# nilai_siswa = [60,85,40,90,75,50,95]
# if 85 in nilai_siswa:
#     posisi_85 = nilai_siswa.index(85)
#     print("nilai 85 ada di -(posisi_85)")
# else:
#     print("Data tidak ditemukan")

# hasil_filter = [x for x in nilai_siswa if x >= 75]
# print(hasil_filter)

#latihan 2
# Data nama produk
# produk = [
#     "Laptop", "Mouse", "Keyboard",
#     "Monitor", "Headset"
# ]

# cari = "Keyboard"

# if cari in produk:
#     print("Produk", cari, "ditemukan!")
# else:
#     print("Produk tidak ditemukan!")

# filter_produk = []

# for x in produk:
#     if len(x) > 5:
#         filter_produk.append(x)

# print("\nProduk dengan panjang nama lebih dari 5 karakter:")

# for x in filter_produk:
#     print(x)

#latihan 3
suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

cari = 0

if cari in suhu:
    index = suhu.index(cari)

    print("Nilai", cari, "ditemukan!")
    print("Posisi index:", index)
else:
    print("Nilai tidak ditemukan!")

suhu_positif = []

for x in suhu:
    if x > 0:
        suhu_positif.append(x)

print("\nDaftar suhu positif:")

for x in suhu_positif:
    print(x, end=" ")

print()