//Esse arquivo .h funciona como um cabeçalho geral
#ifndef MERCADO_H //-->ifndef e define evitam repetir inclusões assim como endif
#define MERCADO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//Incluindo as bibiliotecas necessárias e os headers específicos
#include "produto.h"
#include "carrinho.h"

//Declarando a função menu para ser usada em outros arquivos
void menu();

//Evita inclusão múltipla
#endif
