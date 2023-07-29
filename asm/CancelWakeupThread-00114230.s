xdef CancelWakeupThread
CancelWakeupThread:
	.word 0x24030035 ; 0x00114230
	.word 0x0000000C ; 0x00114234
	.word 0x03E00008 ; 0x00114238
	.word 0x00000000 ; 0x0011423c
