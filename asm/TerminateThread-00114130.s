xdef TerminateThread
TerminateThread:
	.word 0x24030025 ; 0x00114130
	.word 0x0000000C ; 0x00114134
	.word 0x03E00008 ; 0x00114138
	.word 0x00000000 ; 0x0011413c
