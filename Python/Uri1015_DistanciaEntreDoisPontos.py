import math

linha = input().split()
linha2 = input().split()

x1 = float(linha[0])
y1 = float(linha[1])

x2 = float(linha2[0])
y2 = float(linha2[1])

result = math.sqrt(pow((x2-x1),2) + pow((y2-y1),2))

print('{:.4f}'.format(result))