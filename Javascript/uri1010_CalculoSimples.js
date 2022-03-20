var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var item1 = lines.shift().split(" ");
var item2 = lines.shift().split(" ");

var cod = item1.shift();
var num = item1.shift();
var vlr = item1.shift();

var cod2 = item2.shift();
var num2 = item2.shift();
var vlr2 = item2.shift();

function CalculoSimples(num, vlr, num2, vlr2){
    return ((num*vlr) + (num2*vlr2));
}

console.log("VALOR A PAGAR: R$ " + CalculoSimples(num, vlr, num2, vlr2).toFixed(2));