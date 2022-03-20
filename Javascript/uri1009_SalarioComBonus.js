var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var nome = lines.shift();
var salFixo = parseFloat(lines.shift());
var vendas = parseFloat(lines.shift());

function salarioComBonus(salFixo, vendas){
    return ((vendas * (15/100)) + salFixo);
}

console.log("TOTAL = R$ " + salarioComBonus(salFixo, vendas).toFixed(2));