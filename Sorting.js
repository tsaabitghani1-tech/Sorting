// const angkaAsc = [5, 2, 9, 1];
// const angkaDesc = [5, 2, 9, 1];

// angkaAsc.sort((a, b) => a - b);
// console.log("Ascending:", angkaAsc);

// angkaDesc.sort((a, b) => b - a);
// console.log("Descending:", angkaDesc);

//latihan 1
// let nilai = [60, 85, 40, 90, 75, 50, 95];

// let cari = 85;

// let index = nilai.indexOf(cari);

// if (index !== -1) {
//     console.log("Nilai " + cari + " ditemukan!");
//     console.log("Posisi index: " + index);
// } else {
//     console.log("Nilai tidak ditemukan!");
// }

// let lulus = nilai.filter(x => x >= 75);

// console.log("\nDaftar nilai yang lulus:");
// console.log(lulus);

//latihan 2
// let produk = [
//     "Laptop", "Mouse", "Keyboard",
//     "Monitor", "Headset"
// ];

// let cari = "Keyboard";

// if (produk.includes(cari)) {
//     console.log("Produk " + cari + " ditemukan!");
// } else {
//     console.log("Produk tidak ditemukan!");
// }

// let filterProduk = produk.filter(x => x.length > 5);

// console.log("\nProduk dengan panjang nama lebih dari 5 karakter:");

// filterProduk.forEach(x => {
//     console.log(x);
// });

//lathan 3
let suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

let cari = 0;

let index = suhu.indexOf(cari);

if (index !== -1) {
    console.log("Nilai " + cari + " ditemukan!");
    console.log("Posisi index: " + index);
} else {
    console.log("Nilai tidak ditemukan!");
}

let suhuPositif = suhu.filter(x => x > 0);

console.log("\nDaftar suhu positif:");

console.log(suhuPositif.join(" "));