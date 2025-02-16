# My AVR Programming Journey

This project is part of me following along the book "Make: AVR Programming" written by (Elliot Williams](https://github.com/hexagon5un).

There might be som additional code and chapters when I feel that I want to test my knowledge and apply my new skills on real world problems and ideas.

For every chapter I try to summarize and reflect on what I've learnt in a short _REFLECTIONS.md_ file. Not only for others but also for myself, so I can go back and see if I already have solved a problem in the past.

## FAQ:

### Installation

`sudo pacman -S avr-gcc avr-glibc avrdude usbutils`

Copy and run the _blinkLed_
`cp <AVR-Programming-Directory>/Chapter02_Programming-AVRs/blinkLed . -r`
`make flash`

### Oscillators

When you follow the book you need all the IO pins and cant use a external oscillator.
To run the microcontroller with it's internal 8mhz calibrated crystal use value `0xE2` for the LFUSE (default is 0x62)
If you want to use an external oscillator (16mhz) use LFUSE 0x62

[Here](https://eleccelerator.com/fusecalc/fusecalc.php?chip=atmega328p) is a link to a fuse calculator.

