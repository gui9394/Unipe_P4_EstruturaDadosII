#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
    std::vector<std::vector<int>> lista_out;

    while (true) {
        std::vector<int> lista;

        int entrada_1[2] = {0, 0};
        std::cin >> entrada_1[0] >> entrada_1[1];

        if (entrada_1[0] == 0) {
            break;
        }

        int entrada_2[entrada_1[1]];
        for (int i = 0; i < entrada_1[1]; i++) {
            std::cin >> entrada_2[i];
        }

        for (int i = 0; i < entrada_1[0]; i++) {
            lista.insert(lista.end(), i + 1);
        }

        for(int turno = entrada_1[1] - 1; turno >= 0; turno--) {
            for(int indice = turno, permutacao = 0; permutacao < entrada_2[turno]; permutacao++, indice++) {
                int temp = lista[indice];
                lista[indice] = lista[indice + 1];
                lista[indice + 1] = temp;
            }
        }

        lista_out.insert(lista_out.end(), lista);
    }

    for (std::vector<std::vector<int>>::iterator it_1 = lista_out.begin(); it_1 != lista_out.end(); it_1++) {
        for (std::vector<int>::iterator it_2 = it_1->begin(); it_2 != it_1->end(); it_2++) {
            std::cout << *it_2 << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
