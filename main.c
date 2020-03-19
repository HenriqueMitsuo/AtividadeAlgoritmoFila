#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"

int main() {

    //! INICIANDO NÓ CABEÇA/INICIAL COM NULL
    A cabeca;

    criaFila(&cabeca);
    
    menu(&cabeca);

    return 0;
}