numeros = input().split()

a = float(numeros[0])
b = float(numeros[1])
c = float(numeros[2])

if((((a+b) > c) and ((a+c)> b) and ((b+c)> a) and (a > 0) and (b > 0) and (b > 0))):
    perimetro = a + b + c
    print("Perimetro = {:.1f}".format(perimetro))
else:
    areaTrapezio = ((a+b)*c)/2
    print("Area = {:.1f}".format(areaTrapezio))