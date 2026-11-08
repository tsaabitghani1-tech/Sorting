const angka = [10,20,30,40];

const ada20 = angka.includes(20);
console.log("Apakah 20 ada?", ada20);

const posisi30 = angka.indexOf(20);
console.log("Index angka 30 adalah:", posisi30);

const hasilFilter = angka.filter(x => x > 20);
console.log("Hasil filter > 20:", hasilFilter);