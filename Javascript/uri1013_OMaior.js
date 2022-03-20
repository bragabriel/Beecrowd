var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split(" ");

var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());

var maiorAB = (a + b + Math.abs(a - b)) / 2;

maiorAB = (c + maiorAB + Math.abs(maiorAB - c)) / 2;

console.log(maiorAB + " eh o maior");
