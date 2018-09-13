v1 = int(input ('Digite um numero: '))
v2 = int(input ('Digite outro: '))

print ('Esses são os valores compreendidos entre {} e {}:\n'.format(v1, v2))
if v1 > v2:
    a = v2 + 1
    while a < v1:
        print (a)
        a += 1
if v2 > v1:
    a = v1 + 1
    while a < v2:
        print (a)
        a += 1
