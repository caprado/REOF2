xdef ChangeThreadPriority
ChangeThreadPriority:
	.word 0x24030029 ; 0x00114170
	.word 0x0000000C ; 0x00114174
	.word 0x03E00008 ; 0x00114178
	.word 0x00000000 ; 0x0011417c
