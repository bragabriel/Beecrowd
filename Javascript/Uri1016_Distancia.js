var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var y = parseFloat(lines.shift());

console.log(y*2 + " minutos");