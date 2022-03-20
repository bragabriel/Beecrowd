var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split(" ");

var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());
var t = parseFloat(lines.shift());

 if(((b * b) - 4 * a * c) < 0 || a == 0){
     console.log("Impossivel calcular");
 }
 else{
    t = Math.sqrt((b * b) - 4 * a * c);
    console.log("R1 = " + ((-b + t) / (2 * a)).toFixed(5));
    console.log("R2 = " + ((-b - t) / (2 * a)).toFixed(5));
 }
