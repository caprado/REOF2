xdef RemoveDmacHandler
RemoveDmacHandler:
	.word 0x24030013 ; 0x00114010
	.word 0x0000000C ; 0x00114014
	.word 0x03E00008 ; 0x00114018
	.word 0x00000000 ; 0x0011401c
