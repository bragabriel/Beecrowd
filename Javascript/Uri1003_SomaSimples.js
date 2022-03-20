var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());

//Default Function expression: 
function soma(a, b){
    return a + b
}

console.log("SOMA = " + soma(a,b));
