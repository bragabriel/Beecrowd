var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

var item1 = lines.shift().split(" ");
var item2 = lines.shift().split(" ");

var N1 = parseFloat(item1.shift());
var N2 = parseFloat(item1.shift());
var N3 = parseFloat(item1.shift());
var N4 = parseFloat(item1.shift());

var soma = ((N1*2)+(N2*3)+(N3*4)+(N4*1));

var media = soma / 10;

if(media >= 7.0){
    console.log("Media: " + media.toFixed(1));
    console.log("Aluno aprovado.");
}
else if(media <5.0){
    console.log("Media: " + media.toFixed(1));
    console.log("Aluno reprovado.");
}
else{
    console.log("Media: " + media.toFixed(1));
    console.log("Aluno em exame.");

    var NExame = parseFloat(item2.shift());

    var final = (NExame + media) / 2;

    if(final >= 5.0){
        console.log("Nota do exame: " + NExame.toFixed(1));
        console.log("Aluno aprovado.");
        console.log("Media final: " + final.toFixed(1));
    }
    else{
        console.log("Nota do exame: " + NExame.toFixed(1));
        console.log("Aluno reprovado.");
        console.log("Media final: " + final.toFixed(1));
    }
}