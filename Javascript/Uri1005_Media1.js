var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
 
function media(a, b){
    return ((a * 3.5) + (b * 7.5)) / 11;
}

console.log("MEDIA = " + media(a,b).toFixed(5));