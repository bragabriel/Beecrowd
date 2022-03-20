numeros = input().split()

a = float(numeros[0])
b = float(numeros[1])

if((a%b==0) or (b%a==0)):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")