void func_0015c728() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015c728: addiu $sp, $sp, -0x30
    a1 = 8;                                                     // 0x0015c72c: addiu $a1, $zero, 8
    s2 = g_002271d8;  // Global at 0x002271d8                   // 0x0015c754: lw $s2, 0x40($a0)
    func_001750b0();  // 0x174ff8                                // 0x0015c758: jal 0x174ff8
    a1 = 1;                                                     // 0x0015c764: addiu $a1, $zero, 1
    func_001750b0();  // 0x174ff8                                // 0x0015c768: jal 0x174ff8
    a2 = 1;                                                     // 0x0015c76c: addiu $a2, $zero, 1
    func_001750b0();  // 0x174ff8                                // 0x0015c778: jal 0x174ff8
    a2 = 4;                                                     // 0x0015c784: addiu $a2, $zero, 4
    func_001750b0();  // 0x174ff8                                // 0x0015c788: jal 0x174ff8
    a1 = 0x17;                                                  // 0x0015c78c: addiu $a1, $zero, 0x17
    a0 = s0 << 5;                                               // 0x0015c790: sll $a0, $s0, 5
    a0 = a0 - s0;                                               // 0x0015c794: subu $a0, $a0, $s0
    a0 = a0 << 2;                                               // 0x0015c798: sll $a0, $a0, 2
    a0 = a0 + s0;                                               // 0x0015c79c: addu $a0, $a0, $s0
    func_00112048();  // 0x111f90                                // 0x0015c7a0: jal 0x111f90
    a0 = a0 << 3;                                               // 0x0015c7a4: sll $a0, $a0, 3
    a1 = 0 | 0xff80;                                            // 0x0015c7a8: ori $a1, $zero, 0xff80
    func_001119f0();  // 0x111998                                // 0x0015c7b0: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0015c7bc: jal 0x112048
    func_00112048();  // 0x111f90                                // 0x0015c7cc: jal 0x111f90
    func_00111f90();  // 0x111f40                                // 0x0015c7dc: jal 0x111f40
    s0 = s0 + -1;                                               // 0x0015c7e0: addiu $s0, $s0, -1
    a1 = 0x2d;                                                  // 0x0015c7e4: addiu $a1, $zero, 0x2d
    v0 = (0 < v0) ? 1 : 0;                                      // 0x0015c7e8: slt $v0, $zero, $v0
    if (v0 != 0) s1 = s0;                                       // 0x0015c7f0: movn $s1, $s0, $v0
    func_001750b0();  // 0x174ff8                                // 0x0015c7f4: jal 0x174ff8
    func_001750b0();  // 0x174ff8                                // 0x0015c804: jal 0x174ff8
    a1 = 0x2c;                                                  // 0x0015c808: addiu $a1, $zero, 0x2c
    func_001750b0();  // 0x174ff8                                // 0x0015c814: jal 0x174ff8
    a1 = 0x2a;                                                  // 0x0015c818: addiu $a1, $zero, 0x2a
    a1 = 0xf;                                                   // 0x0015c820: addiu $a1, $zero, 0xf
    func_001750b0();  // 0x174ff8                                // 0x0015c824: jal 0x174ff8
    a2 = 2;                                                     // 0x0015c828: addiu $a2, $zero, 2
    a1 = 0x33;                                                  // 0x0015c830: addiu $a1, $zero, 0x33
    func_001750b0();  // 0x174ff8                                // 0x0015c834: jal 0x174ff8
    a1 = 0xe;                                                   // 0x0015c840: addiu $a1, $zero, 0xe
    func_001750b0();  // 0x174ff8                                // 0x0015c844: jal 0x174ff8
    a1 = 0x1c;                                                  // 0x0015c850: addiu $a1, $zero, 0x1c
    func_001750b0();  // 0x174ff8                                // 0x0015c854: jal 0x174ff8
    a1 = 5;                                                     // 0x0015c864: addiu $a1, $zero, 5
    return func_0016bc40();  // Tail call                        // 0x0015c87c: j 0x16bb88
    sp = sp + 0x30;                                             // 0x0015c880: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0015c884: nop 
    sp = sp + -0x20;                                            // 0x0015c888: addiu $sp, $sp, -0x20
    s0 = *(int32_t*)((s1) + 0x40);                              // 0x0015c89c: lw $s0, 0x40($s1)
    func_00173840();  // 0x1737e8                                // 0x0015c8a0: jal 0x1737e8
    a1 = 0x16 << 16;                                            // 0x0015c8a8: lui $a1, 0x16
    a1 = a1 + -0x1738;                                          // 0x0015c8b0: addiu $a1, $a1, -0x1738
    if (v0 == 0) goto label_0x15c8c8;                           // 0x0015c8b4: beqz $v0, 0x15c8c8
    a0 = 0x22 << 16;                                            // 0x0015c8bc: lui $a0, 0x22
    goto label_0x15c8e8;                                        // 0x0015c8c0: b 0x15c8e8
    a0 = &str_00227160;  // "E0203262: MWSFCRE_ResetSfdHn: SFD_SetErrFn() failed." // 0x0015c8c4: addiu $a0, $a0, 0x7160
label_0x15c8c8:
    func_00169a18();  // 0x169980                                // 0x0015c8c8: jal 0x169980
    /* nop */                                                   // 0x0015c8cc: nop 
    if (v0 == 0) goto label_0x15c8f8;                           // 0x0015c8d0: beqz $v0, 0x15c8f8
    /* nop */                                                   // 0x0015c8d4: nop 
    func_0015e7e0();  // 0x15e7b0                                // 0x0015c8d8: jal 0x15e7b0
    a0 = -0x12f;                                                // 0x0015c8dc: addiu $a0, $zero, -0x12f
    a0 = 0x22 << 16;                                            // 0x0015c8e0: lui $a0, 0x22
    a0 = &str_00227198;  // "E1122612 mwPlyCreateSofdec : cprm is NULL." // 0x0015c8e4: addiu $a0, $a0, 0x7198
label_0x15c8e8:
    func_001634a8();  // 0x163410                                // 0x0015c8e8: jal 0x163410
    /* nop */                                                   // 0x0015c8ec: nop 
    goto label_0x15c904;                                        // 0x0015c8f0: b 0x15c904
    v0 = -1;                                                    // 0x0015c8f4: addiu $v0, $zero, -1
label_0x15c8f8:
    func_0015c6e0();  // 0x15c580                                // 0x0015c8f8: jal 0x15c580
label_0x15c904:
    return;                                                     // 0x0015c910: jr $ra
    sp = sp + 0x20;                                             // 0x0015c914: addiu $sp, $sp, 0x20
}