#include <stdio.h>

int main() {
    int J, P, V, E, D;
    scanf("%d %d %d %d %d", &J, &P, &V, &E, &D);
    
    int missing = 0;
    if (J == -1) missing++;
    if (P == -1) missing++;
    if (V == -1) missing++;
    if (E == -1) missing++;
    if (D == -1) missing++;
    
    // Se há apenas um valor faltando
    if (missing == 1) {
        if (J == -1) J = V + E + D;
        else if (P == -1) P = 3 * V + E;
        else if (V == -1) V = J - E - D;
        else if (E == -1) E = P - 3 * V;
        else if (D == -1) D = J - V - E;
    }
    // Se há dois valores faltando
    else if (missing == 2) {
        // Caso 1: J e P faltando
        if (J == -1 && P == -1) {
            J = V + E + D;
            P = 3 * V + E;
        }
        // Caso 2: J e V faltando
        else if (J == -1 && V == -1) {
            // J = V + E + D
            // P = 3V + E => V = (P - E) / 3
            V = (P - E) / 3;
            J = V + E + D;
        }
        // Caso 3: J e E faltando
        else if (J == -1 && E == -1) {
            // J = V + E + D
            // P = 3V + E => E = P - 3V
            E = P - 3 * V;
            J = V + E + D;
        }
        // Caso 4: J e D faltando
        else if (J == -1 && D == -1) {
            // J = V + E + D => D = J - V - E
            // Mas J também está faltando, então precisamos de outra abordagem
            // P = 3V + E (conhecido)
            // Como J não pode ser calculado diretamente, mas D pode ser qualquer valor?
            // Na verdade, J deve ser consistente com os outros valores
            // Vamos assumir que J deve ser o mínimo possível que satisfaça as condições
            J = V + E + 0; // D mínimo é 0
            D = 0;
            // Mas isso pode não satisfazer P = 3V + E se P for conhecido
            // Se P for conhecido, então J é irrelevante para P
            // Vamos recalcular: J não afeta P, então podemos calcular D primeiro
            D = 0; // Começamos com o mínimo
            J = V + E + D;
            // Se P for conhecido, não há problema
        }
        // Caso 5: P e V faltando
        else if (P == -1 && V == -1) {
            // J = V + E + D => V = J - E - D
            V = J - E - D;
            P = 3 * V + E;
        }
        // Caso 6: P e E faltando
        else if (P == -1 && E == -1) {
            // J = V + E + D => E = J - V - D
            E = J - V - D;
            P = 3 * V + E;
        }
        // Caso 7: P e D faltando
        else if (P == -1 && D == -1) {
            // J = V + E + D => D = J - V - E
            D = J - V - E;
            P = 3 * V + E;
        }
        // Caso 8: V e E faltando
        else if (V == -1 && E == -1) {
            // J = V + E + D
            // P = 3V + E
            // Sistema: V + E = J - D
            //         3V + E = P
            // Subtraindo: 2V = P - (J - D) => V = (P - J + D) / 2
            V = (P - J + D) / 2;
            E = J - V - D;
        }
        // Caso 9: V e D faltando
        else if (V == -1 && D == -1) {
            // J = V + E + D => V + D = J - E
            // P = 3V + E => V = (P - E) / 3
            V = (P - E) / 3;
            D = J - V - E;
        }
        // Caso 10: E e D faltando
        else if (E == -1 && D == -1) {
            // J = V + E + D => E + D = J - V
            // P = 3V + E => E = P - 3V
            E = P - 3 * V;
            D = J - V - E;
        }
    }
    
    printf("%d %d %d %d %d\n", J, P, V, E, D);
    
    return 0;
}