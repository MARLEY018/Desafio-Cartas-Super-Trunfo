#include <stdio.h>
#include "carta.h"

void mostrarCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("Força: %d\n", carta.forca);
    printf("Velocidade: %d\n", carta.velocidade);
    printf("Inteligência: %d\n", carta.inteligencia);
}
