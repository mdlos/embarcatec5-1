#include <stdio.h>        
#include "pico/stdlib.h"
#include "hardware/timer.h"


#define vermelho 11
#define amarelo 12
#define verde 13

volatile int estado = 0;

bool callback_temporizador(struct repeating_timer *t) {
    gpio_put(vermelho, estado == 0);
    gpio_put(amarelo, estado == 1);
    gpio_put(verde, estado == 2);
    estado = (estado + 1) % 3;
    return true;
}

int main() {
    stdio_init_all();
    gpio_init(vermelho);
    gpio_init(amarelo);
    gpio_init(verde);
    gpio_set_dir(vermelho, GPIO_OUT);
    gpio_set_dir(amarelo, GPIO_OUT);
    gpio_set_dir(verde, GPIO_OUT);
    struct repeating_timer temporizador;
    add_repeating_timer_ms(3000, callback_temporizador, NULL, &temporizador);
    while (true) {
        printf("Semaforo ativo\n");
        sleep_ms(1000);
    }
}

