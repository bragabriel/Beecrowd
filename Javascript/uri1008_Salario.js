var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var nFunc = parseInt(lines.shift());
var nHoras = parseInt(lines.shift());
var Salary = parseFloat(lines.shift());

function salario(nHoras, Salary){
    return (nHoras * Salary);
}

console.log("NUMBER = " + nFunc);
console.log("SALARY = U$ " + salario(nHoras, Salary).toFixed(2));