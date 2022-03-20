vlr = float(input())

if vlr>=0 and vlr<=25.0000:
    print('Intervalo [25,50]')

if vlr>25.0000 and vlr<=50.0000:
    print('Intervalo (25,50]')

if vlr>50.0000 and vlr<=75.0000:
    print('Intervalo (50,75]')

if vlr>75.0000 and vlr<=100.0000:
    print('Intervalo (75,100]')

else:
    print('Fora de intervalo')