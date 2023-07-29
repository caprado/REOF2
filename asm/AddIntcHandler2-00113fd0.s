xdef AddIntcHandler2
AddIntcHandler2:
	.word 0x24030010 ; 0x00113fd0
	.word 0x0000000C ; 0x00113fd4
	.word 0x03E00008 ; 0x00113fd8
	.word 0x00000000 ; 0x00113fdc
