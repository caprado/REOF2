xdef iChangeThreadPriority
iChangeThreadPriority:
	.word 0x2403FFD6 ; 0x00114180
	.word 0x0000000C ; 0x00114184
	.word 0x03E00008 ; 0x00114188
	.word 0x00000000 ; 0x0011418c
