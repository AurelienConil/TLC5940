#ifndef TLC_ATMEGA_xxU4_h
#define TLC_ATMEGA_xxU4_h

#if DATA_TRANSFER_MODE == TLC_BITBANG
#error "If you want bitbang mode, insert pin defs here"
#endif

// MOSI (Arduino Micro pin MO) -> SIN (TLC pin 26)
#define TLC_MOSI_PIN	PB2
#define TLC_MOSI_PORT	PORTB
#define TLC_MOSI_DDR	DDRB

// SCK (Arduino Micro pin SCK) -> SCLK (TLC pin 25)
#define TLC_SCK_PIN	PB1
#define TLC_SCK_PORT	PORTB
#define TLC_SCK_DDR	DDRB

// SS (Arduino Micro pin SS)
#define TLC_SS_PIN	PB0
#define TLC_SS_DDR	DDRB

// OC1A (Arduino Micro pin 9) -> XLAT (TLC pin 24)
#define XLAT_PIN	PB5
#define XLAT_PORT	PORTB
#define XLAT_DDR	DDRB

// OC1B (Arduino Micro pin 10) -> BLANK (TLC pin 23)
#define BLANK_PIN	PB6
#define BLANK_PORT	PORTB
#define BLANK_DDR	DDRB

// OC3A (Arduino Micro pin 5) -> GSCLK (TLC pin 18)
#define GSCLK_PIN	PC6
#define GSCLK_PORT	PORTC
#define GSCLK_DDR	DDRC
#define TLC_TIMER3_GSCLK 1

#endif

