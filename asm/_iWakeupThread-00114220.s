xdef _iWakeupThread
_iWakeupThread:
	.word 0x2403FFCC ; 0x00114220
	.word 0x0000000C ; 0x00114224
	.word 0x03E00008 ; 0x00114228
	.word 0x00000000 ; 0x0011422c
