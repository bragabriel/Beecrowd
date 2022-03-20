leitura = input().split()

codigo = int(leitura[0])
quantidade = int(leitura[1])

if codigo == 1:
    result = 4.00 * quantidade
    print('Total: R$ {:.2f}'.format(result))

elif codigo == 2:
    result = 4.50 * quantidade
    print('Total: R$ {:.2f}'.format(result))

elif codigo == 3:
    result = 5.00 * quantidade
    print('Total: R$ {:.2f}'.format(result))

elif codigo == 4:
    result = 2.00 * quantidade
    print('Total: R$ {:.2f}'.format(result))

elif codigo == 5:
    result = 1.50 * quantidade
    print('Total: R$ {:.2f}'.format(result))