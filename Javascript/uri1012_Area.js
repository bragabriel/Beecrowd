var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split(" ");

var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());

var pi = 3.14159;

var areaTriangulo = (a * c) / 2.0;
var areaCirculo = pi * Math.pow(c, 2);
var areaTrapezio = ((a + b) * c) / 2.0;
var areaQuadrado = b * b;
var areaRetangulo = a * b;

console.log("TRIANGULO: " + areaTriangulo.toFixed(3));
console.log("CIRCULO: " + areaCirculo.toFixed(3));
console.log("TRAPEZIO: " + areaTrapezio.toFixed(3));
console.log("QUADRADO: " + areaQuadrado.toFixed(3));
console.log("RETANGULO: " + areaRetangulo.toFixed(3));