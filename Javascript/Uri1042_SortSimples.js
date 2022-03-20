var input = require("fs").readFileSync("stdin", "utf8");

var lines = input.split(" ");

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
var c = parseInt(lines.shift());

if (a > b && a > c){

    var d = a;

    if (b > c){
        var e = b;
        var f = c;
    }
    else{
        var e = c;
        var f = b;
    }   
}
    
if (b > a && b > c){

    var d = b;

    if (a > c){
        var e = a;
        var f = c;
    }
    else{
        var e = c;
        var f = a;
    }   
}
    
if (c > a && c > b){

    var d = c;

    if (a > b){
        var e = a;
        var f = b;
    } 
    else{
        var f = a;
        var e = b;
    }
}

console.log(f);
console.log(e);
console.log(d);
console.log();
console.log(a);
console.log(b);
console.log(c);