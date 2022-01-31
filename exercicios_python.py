"""
1 - Faça um programa que leia um número inteiro e o imprima


numero = int(input("Informe um numero inteiro"))

print(numero)


2 - Faça um programa que leia um número real e o imprima


valor = float(input('Digite um numero real'))

print(valor)
print(type(valor))


3 - Faca um programa que leia 3 valores e some e os imprima


print("Informe 3 numeros inteiros:")
vl = int(input())
vr = int(input())
va = int(input())

s = vl+vr+va

print("%s" % s)


4- Faca um programa que leia numeros reais e cacule a potencia.

real = float(input("Infome o numero"))

print(pow(real, real))


5 - Faca um programa que leia um numero real e imprima a quinta parte dele

num = float(input('Informe um valor'))
print("%.5f" % num)

# 6- Crie um programa que leia a temperatura em graus celsius e converta e fahrenheit

C = float(input('Informe a temperatura em graus celsius:\n'))

F = C*(9.0 /5.0) + 32.0

print('A tem peratura informada foi %.1f e convertida em Fahrenheit é %.1f' %(C, F))


# 7- Crie um programa que leia a temperatura em graus fahrennheit e converta em Celsius

F = float(input('Informe a temperatura em graus fahrennheit:\n'))

C = 5.0 *(F - 32.0)/9.0

print('A tem peratura informada foi %.1f e convertida para Celcius é %.1f' %(F, C))

# 8- Crie um programa que leia a temperatura em graus Kelvin e converta em Celsius

K = float(input('Informe a temperatura em graus Kelvin:\n'))

C = K - 273.15

print('A tem peratura informada foi %.1f e convertida para graus Celsius  é %.1f' %(K, C))

# 9- Crie um programa que leia a temperatura em graus celsius e converta em Kelvin

C = float(input('Informe a temperatura em graus celsius:\n'))

K = C + 273.15

print('A tem peratura informada foi %.1f e convertida em kelvin é %.1f' %(C, K))

# 10 - leia uma velocidade em km/h e apresente- a convertida em m/s.

K = float(input('Informe a velocidade:\n'))

M = K / 3.6

print("A velocidade informada de KM/h foi %.2f convertida em M/s é %.2f" % (K, M))

# 11 - leia uma velocidade em km/h e apresente- a convertida em m/s.

M = float(input('Informe a velocidade:\n'))

K = M * 3.6

print("A velocidade informada de M/S foi %.2f convertida em KM/h é %.2f" % (M, K))

# 12 - leia uma velocidade em Mihas e apresente- a convertida em KM/h.

M = float(input('Informe a velocidade:\n'))

K = 1.61 * M

print("A velocidade informada de Milhas foi %.2f convertida em KM/h é %.2f" % (M, K))

# 13 - leia uma velocidade em KM/h e apresente- a convertida em milhas.

K = float(input('Informe a velocidade:\n'))

M = K / 1.61

print("A velocidade informada de KM/h foi %.2f convertida em milhas é %.2f" % (K, M))

# 14 - leia um angulo em graus e apresente os convertidos em radianos .

G = float(input('Informe o angulo:\n'))

R = G*(3.14 / 180)

print('O angulo informado foi %.2f e convertido em radianos é %.2f' %(G, R))

# 15 - leia um angulo em radianos e apresente os convertidos em graus .

R = float(input('Informe o angulo em radianos:\n'))

G = R *(189 / 3.14)

print('O angulo informado foi %.2f e convertido em graus é %.2f' %(R, G))

# 28 - Faça a leitura de 3 valores com o resultado a soma dos quadrados dos 3 valores lidos

v1 = int(input('Informe o valor:'))
v2 = int(input('Informe o valor:'))
v3 = int(input('Informe o valor:'))

s = pow(v1, 2) + pow(v2, 2) + pow(v3, 2)

print(s)

# 29 - Leia 4 notas e calcule a media aritmetica delas

n1 = float(input('Insira a nota1:'))
n2 = float(input('Insira a nota2:'))
n3 = float(input('Insira a nota3:'))
n4 = float(input('Insira a nota4:'))

M = (n1+n2+n3+n4)/4

print('A media é %.1f' % M)

# 30 - Leia um valor em real e a cotação do dolar . Em seguida imprima o valor em dolares.

real = float(input('Informe o valor do real:'))
dolar = float(input('Informe a cotação do dolar:'))

vd = real / dolar

print('%.2f '% vd)

# 31- Leia um numero inteiro e imprima o seu antecessor e o sucessor.

vr = int(input('Informe o numero:'))
ant = vr - 1
suc = vr + 1

print("O numero informado foi %d o antecessor é %d e o sucessor é %d" % (vr, ant, suc))

# 32 - Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

vr = int(input('Informe o numero:'))
ant = vr - 1
suc = vr + 1
triplo = pow(vr, 3) + 1
dobro =  pow(vr, 2 ) - 1
soma = triplo + dobro

print(soma)

# 33 - leia o tamanho  do lado de um quadrado e imprima como o resultado de sua area.

Q = float(input('Informe o tamanho do lado do quadrado'))
T = Q ** 2

print(T)
"""




