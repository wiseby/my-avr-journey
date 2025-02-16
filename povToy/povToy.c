#include <avr/io.h>
#include <util/delay.h>

void POVDisplay(uint8_t oneByte) {
    PORTB = oneByte;
    _delay_ms(2);
}

int main(void) {
    DDRB = 0xff;

    while(1) {
        POVDisplay(0b00001110);
        POVDisplay(0b00011000);
        POVDisplay(0b00111101);
        POVDisplay(0b0000);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
        POVDisplay(0b00001110);
    }
}
