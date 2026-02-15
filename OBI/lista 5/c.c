#include <stdio.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);
    
    // Para média = mediana, C deve ser tal que quando ordenados A, B, C,
    // o do meio seja igual à média dos três
    // O menor C possível ocorre quando C é o menor número da sequência
    // Na ordenação, as possibilidades são: C A B ou A C B ou A B C
    
    // Se C for o menor (C <= A <= B):
    // Mediana = A, Média = (A + B + C)/3
    // A = (A + B + C)/3 => 3A = A + B + C => C = 2A - B
    
    // Se C for o do meio (A <= C <= B):
    // Mediana = C, Média = (A + B + C)/3
    // C = (A + B + C)/3 => 3C = A + B + C => 2C = A + B => C = (A + B)/2
    // Mas isso só é inteiro se A+B for par
    
    // Se C for o maior (A <= B <= C):
    // Mediana = B, Média = (A + B + C)/3
    // B = (A + B + C)/3 => 3B = A + B + C => C = 2B - A
    
    // Precisamos do menor C possível, então testamos as três opções
    
    long long op1 = 2 * A - B;  // C menor
    long long op2 = (A + B) / 2; // C do meio (só válido se (A+B) for par)
    long long op3 = 2 * B - A;  // C maior
    
    long long menor = op1;
    
    // Verifica se op2 é válido e menor
    if ((A + B) % 2 == 0) {
        if (op2 < menor) {
            menor = op2;
        }
    }
    
    // Verifica se op3 é menor
    if (op3 < menor) {
        menor = op3;
    }
    
    printf("%lld\n", menor);
    
    return 0;
}