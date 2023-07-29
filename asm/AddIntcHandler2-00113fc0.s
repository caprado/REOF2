xdef AddIntcHandler2
AddIntcHandler2:
	.word 0x24030010 ; 0x00113fc0
	.word 0x0000000C ; 0x00113fc4
	.word 0x03E00008 ; 0x00113fc8
	.word 0x00000000 ; 0x00113fcc
