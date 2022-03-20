var input = require("fs").readFileSync("stdin", "utf8");

var lines = input.split(" ");

var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());

if(a < b){
    x = a;
    a = b;
    b = x;
} 
if(b < c){
    x = b;
    b = c;
    c = x;
} 

if(a >= b + c){
    console.log("NAO FORMA TRIANGULO");
}
else if(a * a == b * b + c * c){
	console.log("TRIANGULO RETANGULO");
}

else if(a * a > b * b + c * c){
    console.log("TRIANGULO OBTUSANGULO");
}
else if(a * a < b * b + c * c){
    console.log("TRIANGULO ACUTANGULO");
}

if(a == b && b == c){
    console.log("TRIANGULO EQUILATERO");
}
else if(a == b || b == c){
    console.log("TRIANGULO ISOSCELES");
}