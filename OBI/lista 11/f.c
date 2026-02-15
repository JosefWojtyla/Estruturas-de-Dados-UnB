#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int chefe;
    int salario;
    int insatisfeito;
    int num_subordinados;
    int* subordinados;
} Funcionario;

Funcionario* funcionarios;
int N;

void inicializar() {
    funcionarios = (Funcionario*)malloc((N + 1) * sizeof(Funcionario));
    for (int i = 1; i <= N; i++) {
        funcionarios[i].num_subordinados = 0;
        funcionarios[i].subordinados = NULL;
        funcionarios[i].insatisfeito = 0;
    }
    
    // Ler dados dos funcionários
    for (int i = 1; i <= N; i++) {
        int chefe, salario;
        scanf("%d %d", &chefe, &salario);
        funcionarios[i].chefe = chefe;
        funcionarios[i].salario = salario;
        
        // Adicionar i como subordinado do chefe
        if (i != chefe) {
            funcionarios[chefe].num_subordinados++;
            funcionarios[chefe].subordinados = realloc(funcionarios[chefe].subordinados, 
                                                     funcionarios[chefe].num_subordinados * sizeof(int));
            funcionarios[chefe].subordinados[funcionarios[chefe].num_subordinados - 1] = i;
        }
    }
}

void calcular_insatisfacao() {
    for (int i = 1; i <= N; i++) {
        funcionarios[i].insatisfeito = 0;
        for (int j = 0; j < funcionarios[i].num_subordinados; j++) {
            int sub = funcionarios[i].subordinados[j];
            if (funcionarios[sub].salario > funcionarios[i].salario) {
                funcionarios[i].insatisfeito = 1;
                break;
            }
        }
    }
}

int contar_insatisfeitos() {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (funcionarios[i].insatisfeito) {
            count++;
        }
    }
    return count;
}

int main() {
    scanf("%d", &N);
    inicializar();
    
    calcular_insatisfacao();
    printf("%d\n", contar_insatisfeitos());
    
    int A;
    scanf("%d", &A);
    
    for (int a = 0; a < A; a++) {
        int I, X;
        scanf("%d %d", &I, &X);
        
        // Atualizar salário
        funcionarios[I].salario = X;
        
        // Recalcular insatisfação apenas para o chefe deste funcionário
        int chefe = funcionarios[I].chefe;
        if (chefe != I) { // Se não for o fundador
            funcionarios[chefe].insatisfeito = 0;
            for (int j = 0; j < funcionarios[chefe].num_subordinados; j++) {
                int sub = funcionarios[chefe].subordinados[j];
                if (funcionarios[sub].salario > funcionarios[chefe].salario) {
                    funcionarios[chefe].insatisfeito = 1;
                    break;
                }
            }
        }
        
        // Recalcular insatisfação para o próprio funcionário I
        funcionarios[I].insatisfeito = 0;
        for (int j = 0; j < funcionarios[I].num_subordinados; j++) {
            int sub = funcionarios[I].subordinados[j];
            if (funcionarios[sub].salario > funcionarios[I].salario) {
                funcionarios[I].insatisfeito = 1;
                break;
            }
        }
        
        printf("%d\n", contar_insatisfeitos());
    }
    
    // Liberar memória
    for (int i = 1; i <= N; i++) {
        if (funcionarios[i].subordinados != NULL) {
            free(funcionarios[i].subordinados);
        }
    }
    free(funcionarios);
    
    return 0;
}