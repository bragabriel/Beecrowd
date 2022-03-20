var input = require("fs").readFileSync("stdin", "utf8");

var lines = input.split(" ");

var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());

if ((((a+b) > c) && ((a+c)> b) && ((b+c)> a) && (a > 0) && (b > 0) && (b > 0))){
    var perimetro = a + b + c;
    console.log("Perimetro = " + perimetro.toFixed(1));
}
else{
    var areaTrapezio = ((a+b)*c)/2;
    console.log("Area = " + areaTrapezio.toFixed(1));
}