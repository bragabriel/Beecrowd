nome = str(input())
sal_fixo = float(input())
vendas = float(input())

salario = sal_fixo + (vendas*(15/100))
print('TOTAL = R$ {:.2f}'.format(salario))