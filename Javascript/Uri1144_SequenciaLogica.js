var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split(' ');

var a = parseInt(lines.shift());

for(var b=1; b<=a; b++){
    c = b * b;
    var d = b * b * b;

    console.log(b, c, d);

    var e = c + 1;
    var f = d + 1;

    console.log(b, e, f);
}