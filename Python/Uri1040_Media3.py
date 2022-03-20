numeros = input().split()
notaFinal = 0

n1 = float(numeros[0])
n2 = float(numeros[1])
n3 = float(numeros[2])
n4 = float(numeros[3])

media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10

print('Media: {:.1f}'.format(media))

if media >= 7.0:
    print('Aluno aprovado.')

elif media < 5.0:
    print('Aluno reprovado.')
 
elif media >= 5.0 and media <= 6.9:
    print('Aluno em exame.')
    exame = float(input())
    print('Nota do exame: {:.1f}'.format(exame))
    notaFinal = (exame + media) / 2.0
    if notaFinal >= 5.0:
        print('Aluno aprovado.')
        print('Media final: {:.1f}'.format(notaFinal))
    else:
        print('Aluno reprovado.')
        print('Media final: {:.1f}'.format(notaFinal))