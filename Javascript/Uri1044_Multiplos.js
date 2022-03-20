var input = require("fs").readFileSync("stdin", "utf8");

var lines = input.split(" ");

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());

if (a % b == 0 || b % a == 0){
    console.log("Sao Multiplos");
}
else{
    console.log("Nao sao Multiplos");
}