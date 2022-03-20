var input = require("fs").readFileSync("stdin", "utf8");

let duracao_seg = parseInt(input);

let horas = parseInt(duracao_seg / 3600);
let minutos = parseInt((duracao_seg - (horas * 3600)) / 60);
duracao_seg = (duracao_seg - (horas * 3600) - (minutos * 60));

console.log(horas + ":" + minutos + ":" + duracao_seg);