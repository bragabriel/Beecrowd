var input = require('fs').readFileSync('stdin', 'utf8');
// require = palavra reservada do Node para fazer requisições

// parâmetros = 
// stdin = (nome do meu arquivo de entrada) 
// utf8 = (tipo de encode do arquivo)

var valores = input.split("\n");

var A = parseInt(valores.shift());
var B = parseInt(valores.shift());

var X = A + B;

console.log("X = " + X);