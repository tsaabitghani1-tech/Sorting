angka = [10,20,30,40]

ada_20 = 20 in angka
print("Apakah 20 ada", ada_20)

posisi_30 = angka.index(30)
print("index angka 30 adalah:", posisi_30)

hasil_filter = [x for x in angka if x > 20]
print("Hasil filter (> 20):", hasil_filter)
