xdef AddDmacHandler
AddDmacHandler:
	.word 0x24030012 ; 0x00114000
	.word 0x0000000C ; 0x00114004
	.word 0x03E00008 ; 0x00114008
	.word 0x00000000 ; 0x0011400c
