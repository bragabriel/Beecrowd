linha = input().split()

v1, v2, v3 = linha

v1 = int(v1)
v2 = int(v2)
v3 = int(v3)

if(v1 < v2) and (v1 < v3):
    minimo = v1
    if v2 < v3:
        meio = v2
        maximo = v3
    else:
        meio = v3
        maximo = v2
elif(v2<v1) and (v2<v3):
    minimo = v2
    if(v1<v3):
        meio = v1
        maximo = v3
    else:
        meio = v3
        maximo = v1
else:
    minimo = v3
    if v1<v2:
        meio = v1
        maximo = v2
    else:
        mix = v2
        maximo = v1
 
print('{}\n{}\n{}\n'.format(minimo, meio, maximo))
print('{}\n{}\n{}'.format(v1, v2, v3))