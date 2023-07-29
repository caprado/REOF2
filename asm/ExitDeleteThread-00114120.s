xdef ExitDeleteThread
ExitDeleteThread:
	.word 0x24030024 ; 0x00114120
	.word 0x0000000C ; 0x00114124
	.word 0x03E00008 ; 0x00114128
	.word 0x00000000 ; 0x0011412c
