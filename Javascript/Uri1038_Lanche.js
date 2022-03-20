var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split(' ');

var cod = parseInt(lines.shift());
var qtd = parseInt(lines.shift());

if (cod == 1){
    var tot = qtd * 4.00;
}

else if(cod == 2){
    var tot = qtd * 4.50;
}

else if(cod == 3){
    var tot = qtd * 5.00;
}

else if(cod == 4){
    var tot = qtd * 2.00;
}

else if(cod == 5){
    var tot = qtd * 1.50;
}

console.log("Total: R$ " + tot.toFixed(2));