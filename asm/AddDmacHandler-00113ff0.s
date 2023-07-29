xdef AddDmacHandler
AddDmacHandler:
	.word 0x24030012 ; 0x00113ff0
	.word 0x0000000C ; 0x00113ff4
	.word 0x03E00008 ; 0x00113ff8
	.word 0x00000000 ; 0x00113ffc
