var input = require("fs").readFileSync("stdin", "utf8");

let N = parseInt(input);

let A = parseInt(N/365);
let M = parseInt((N%365)/30);
let D = (N%365)%30;

console.log(A + " ano(s)\n" + M + " mes(es)\n" + D + " dia(s)");