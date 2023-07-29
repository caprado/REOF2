xdef _iSuspendThread
_iSuspendThread:
	.word 0x2403FFC8 ; 0x00114260
	.word 0x0000000C ; 0x00114264
	.word 0x03E00008 ; 0x00114268
	.word 0x00000000 ; 0x0011426c
