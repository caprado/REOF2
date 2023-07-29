xdef RemoveIntcHandler
RemoveIntcHandler:
	.word 0x24030011 ; 0x00113fe0
	.word 0x0000000C ; 0x00113fe4
	.word 0x03E00008 ; 0x00113fe8
	.word 0x00000000 ; 0x00113fec
