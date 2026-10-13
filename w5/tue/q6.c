#include <stdint.h>
#include <stdio.h>


uint8_t printerControl = 0; // 0b 0000 0000
void color_and_select_scan() {
	printerControl |= COLOUR;
	printerControl |= SELECT_SCAN;
}

// Whether the printer is out of ink
#define NO_INK (0x1)       // 0b 0000 0001
// Whether to print/scan in colour
#define COLOUR (0x2)       // 0b 0000 0010
// Select print mode
#define SELECT_PRINT (0x4) // 0b 0000 0100
// Select scan mode
#define SELECT_SCAN (0x8)  // 0b 0000 1000
// Start print/scan
#define START (0x10)       // 0b 0001 0000
//

if (direction == LEFT) {
	dx = -1;
} else {
	dx = 1;
}
int main(void) {
	printerControl = 0b101011;
	if (printerControl & NO_INK) {
		printf("No ink\n");
		printerControl = printerControl ^ NO_INK;
	} else {
		printf("Has ink\n");
	}
	if (printerControl & NO_INK) {
		printf("No ink\n");
		printerControl = printerControl ^ NO_INK;
	} else {
		printf("Has ink\n");
	}
}
