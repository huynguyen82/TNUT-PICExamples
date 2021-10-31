// register definitions
#define W 0
#define F 1

// register files
#byte INDF =0x00
#byte TMR0 =0x01
#byte PCL =0x02
#byte STATUS =0x03
#byte FSR =0x04
//#device *=14 adc=8
#byte PORTA =0x05
#byte PORTB =0x06
#byte PORTC =0x07
#byte PORTD =0x08
#byte PORTE =0x09

#byte EEDATA =0x10C
#byte EEADR =0x10D
#byte EEDATH =0x10E
#byte EEADRH =0x10F
#byte ADCON0 =0x1F
#byte ADCON1 =0x9F
#byte ADRESH =0x9F
#byte ADSESL =0x9F

#byte PCLATH =0x0a
#byte INTCON =0x0b
#byte PIR1 =0x0c
#byte PIR2 =0x0d
#byte PIE1 =0x8c
#byte PIE2 =0x8d
#byte OPTION_REG =0x81
#byte TRISA =0x85
#byte TRISB =0x86
#byte TRISC =0x87
#byte TRISD =0x88
#byte TRISE =0x89

#byte EECON1 =0x18C
#byte EECON2 =0x18D

#byte SSPBUF =0x13
#byte SSPCON =0x14
#byte SSPCON2 =0x91
#byte SSPADD =0x93
#byte SSPSTAT =0x94
// SSPCON bit
#bit SSPWCOL = 0x14.7
#bit SSPOV = 0x14.6
#bit SSPEN = 0x14.5
#bit SSPCKP = 0x14.4
#bit SSPM3 = 0x14.3
#bit SSPM2 = 0x14.2
#bit SSPM1 = 0x14.1
#bit SSPM0 = 0x14.0
// SSPSTAT bit
#bit SSPSMP = 0x94.7
#bit SSPCKE = 0x94.6
#bit SSPDA = 0x94.5
#bit SSPP = 0x94.4
#bit SSPS = 0x94.3
#bit SSPRW = 0x94.2
#bit SSPUA = 0x94.1
#bit SSPBF = 0x94.0

// BIT DEFINITION
#bit A7 =0x05.5
#bit A6 =0x05.5
#bit A5 =0x05.5
#bit A4 =0x05.4
#bit A3 =0x05.3
#bit A2 =0x05.2
#bit A1 =0x05.1
#bit A0 =0x05.0

#bit B7 =0x06.7
#bit B6 =0x06.6
#bit B5 =0x06.5
#bit B4 =0x06.4
#bit B3 =0x06.3
#bit B2 =0x06.2
#bit B1 =0x06.1
#bit B0 =0x06.0

#bit C7 =0x07.7
#bit C6 =0x07.6
#bit C5 =0x07.5
#bit C4 =0x07.4
#bit C3 =0x07.3
#bit C2 =0x07.2
#bit C1 =0x07.1
#bit C0 =0x07.0

#bit D7 =0x08.7
#bit D6 =0x08.6
#bit D5 =0x08.5
#bit D4 =0x08.4
#bit D3 =0x08.3
#bit D2 =0x08.2
#bit D1 =0x08.1
#bit D0 =0x08.0
#bit E2 =0x09.2
#bit E1 =0x09.1
#bit E0 =0x09.0


#bit trisa5 =0x85.5
#bit trisa4 =0x85.4
#bit trisa3 =0x85.3
#bit trisa2 =0x85.2
#bit trisa1 =0x85.1
#bit trisa0 =0x85.0

#bit trisb7 =0x86.7
#bit trisb6 =0x86.6
#bit trisb5 =0x86.5
#bit trisb4 =0x86.4
#bit trisb3 =0x86.3
#bit trisb2 =0x86.2
#bit trisb1 =0x86.1
#bit trisb0 =0x86.0
#bit trisc7 =0x87.7
#bit trisc6 =0x87.6
#bit trisc5 =0x87.5
#bit trisc4 =0x87.4
#bit trisc3 =0x87.3
#bit trisc2 =0x87.2
#bit trisc1 =0x87.1
#bit trisc0 =0x87.0

#bit trisd7 =0x88.7
#bit trisd6 =0x88.6
#bit trisd5 =0x88.5
#bit trisd4 =0x88.4
#bit trisd3 =0x88.3
#bit trisd2 =0x88.2
#bit trisd1 =0x88.1
#bit trisd0 =0x88.0

#bit trise2 =0x89.2
#bit trise1 =0x89.1
#bit trise0 =0x89.0

// INTCON Bits for C
#bit gie = 0x0b.7
#bit peie = 0x0b.6
#bit tmr0ie = 0x0b.5
#bit int0ie = 0x0b.4
#bit rbie = 0x0b.3
#bit tmr0if = 0x0b.2
#bit int0if = 0x0b.1
#bit rbif = 0x0b.0

// PIR1 for C
#bit pspif = 0x0c.7
#bit adif = 0x0c.6
#bit rcif = 0x0c.5
#bit txif = 0x0c.4
#bit sspif = 0x0c.3
#bit ccp1if = 0x0c.2
#bit tmr2if = 0x0c.1
#bit tmr1if = 0x0c.0
//PIR2 for C
#bit cmif = 0x0d.6
#bit eeif = 0x0d.4
#bit bclif = 0x0d.3
#bit ccp2if = 0x0d.0
// PIE1 for C
#bit adie = 0x8c.6
#bit rcie = 0x8c.5
#bit txie = 0x8c.4
#bit sspie = 0x8c.3
#bit ccp1ie = 0x8c.2
#bit tmr2ie = 0x8c.1
#bit tmr1ie = 0x8c.0

//PIE2 for C
#bit osfie = 0x8d.7
#bit cmie = 0x8d.6
#bit eeie = 0x8d.4

// OPTION Bits
#bit not_rbpu = 0x81.7
#bit intedg = 0x81.6
#bit t0cs = 0x81.5
#bit t0se = 0x81.4
#bit psa = 0x81.3
#bit ps2 = 0x81.2
#bit ps1 = 0x81.1
#bit ps0 = 0x81.0
// EECON1 Bits
#bit eepgd = 0x18c.7
#bit free = 0x18C.4
#bit wrerr = 0x18C.3
#bit wren = 0x18C.2
#bit wr = 0x18C.1
#bit rd = 0x18C.0

//ADCON0
#bit CHS0 =0x1F.3
#bit CHS1 =0x1F.4
#bit CHS2 =0x1F.5
