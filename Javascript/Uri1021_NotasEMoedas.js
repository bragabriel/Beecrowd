var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var dinheiro = parseFloat(lines.shift());

var dinheiro1 = parseInt(dinheiro);
dinheiro -= dinheiro1;

var moedas = parseInt((dinheiro * 100));

// NOTAS
var cem = parseInt(dinheiro1 / 100);
var cinquenta = parseInt(dinheiro1 %100);
var cinquenta1 = parseInt(cinquenta/50);
var vinte = parseInt(cinquenta%50);
var vinte1 = parseInt(vinte/20);
var dez = parseInt(vinte%20);
var dez1 = parseInt(dez/10);
var cinco = parseInt(dez%10);
var cinco1 = parseInt(cinco/5);
var dois = parseInt(cinco%5);
var dois1 = parseInt(dois/2);

// MOEDAS
var um = parseInt(dois%2);
var um1 = parseInt(um/1);

console.log("NOTAS:");
console.log(cem + " nota(s) de R$ 100.00");
console.log(cinquenta1 + " nota(s) de R$ 50.00");
console.log(vinte1 + " nota(s) de R$ 20.00");
console.log(dez1 + " nota(s) de R$ 10.00");
console.log(cinco1 + " nota(s) de R$ 5.00");
console.log(dois1 + " nota(s) de R$ 2.00");

// MOEDAS
var cinquentac = parseInt(moedas /50);
var vintec = parseInt((moedas %50)/25);
var dezc = parseInt((((moedas %50)%25)/10));
var cincoc = parseInt(((((moedas %50)%25)%10)/5));
var umc = parseInt(((((moedas %50)%25)%10)%5)/1);

console.log("MOEDAS:");
console.log(um1 + " moeda(s) de R$ 1.00");
console.log(cinquentac + " moeda(s) de R$ 0.50");
console.log(vintec + " moeda(s) de R$ 0.25");
console.log(dezc + " moeda(s) de R$ 0.10");
console.log(cincoc + " moeda(s) de R$ 0.05");
console.log(umc + " moeda(s) de R$ 0.01");