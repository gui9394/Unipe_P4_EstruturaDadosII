saida = list()

while (True):
    entrada_1 = list(map(int, (input()).split()))

    if (entrada_1[0] == 0):
        break

    entrada_2 = list(map(int, (input()).split()))

    list_elementos = list(range(1, entrada_1[0] + 1))
    turnos = list(range(entrada_1[1] - 1, -1, -1))

    for turno in turnos:
        indice = (turno)
        permutacoes = list(range(entrada_2[turno]))
        for permutacao in permutacoes:
            aux = list_elementos[indice]
            list_elementos[indice] = list_elementos[indice + 1]
            list_elementos[indice + 1] = aux
            indice += 1

    aux = str()
    for x in list_elementos:
        aux += (str(x) + " ")

    saida.append(aux)

for linha in saida:
    print(linha)
