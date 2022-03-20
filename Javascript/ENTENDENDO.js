var input = require('fs').readFileSync('stdin', 'utf8');
// require = palavra reservada do Node para fazer requisições

// parâmetros = 
// stdin = (nome do meu arquivo de entrada) 
// utf8 = (tipo de encode do arquivo)

var valores = input.split(" ");
console.log(valores)


var linha = [x, y] = input.split(" ").map(item => parseInt(item));
//.map(item=>pasrseInt(item)) = Converter de String para Int
console.log(x + y);