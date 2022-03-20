var input = require("fs").readFileSync("stdin", "utf8");

var valores = input.split("\n");

var raio = parseFloat(valores.shift());

var area = 3.14159 * (raio ** 2);

console.log("A=" + area.toFixed(4));