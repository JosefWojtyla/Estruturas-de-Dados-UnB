#include <stdio.h>

int pa_recursiva(int *v, int primeiro, int ultimo){

    int soma = v[primeiro]+ v[ultimo];

    if (primeiro>=ultimo)
    {
        return 1;
    }
    
    if (soma == (v[primeiro+1] + v[ultimo-1]))
    {
        pa_recursiva(v,primeiro+1,ultimo-1);
    } else{
        return 0;
    }
    
}

