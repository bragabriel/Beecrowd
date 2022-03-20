entrada = input().split()

a, b, c = entrada

a = float(a)
b = float(b)
c = float(c)

if(a < b):
    x = a
    a = b
    b = x
if(b < c):
    x = b
    b = c
    c = x
if(a < b):
    x = a
    a = b
    b = x
if(a >= b + c):
    print("NAO FORMA TRIANGULO")
else:
    if(a * a == b * b + c * c):
        print("TRIANGULO RETANGULO")
    if(a * a > b * b + c * c):
        print("TRIANGULO OBTUSANGULO")
    else:
        if(a * a < b * b + c * c):
            print("TRIANGULO ACUTANGULO")
        if(a == b and b == c):
            print("TRIANGULO EQUILATERO")
        else:
            if(a == b or b == c):
                print("TRIANGULO ISOSCELES")