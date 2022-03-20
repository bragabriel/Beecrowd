linha = input().split()

a = int(linha[0])
b = int(linha[1])
c = int(linha[2])

maior = (a+b+abs(a-b))/2
maior = (c+maior+abs(maior-c))/2

print('{} eh o maior'.format(int(maior)))