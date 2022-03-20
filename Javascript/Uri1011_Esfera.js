var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var raio = parseInt(lines.shift());

function VolumeEsfera(raio){
    var pi = 3.14159;
    return (4.0/3 * pi * (raio**'3'));
}

console.log("VOLUME = " + VolumeEsfera(raio).toFixed(3));