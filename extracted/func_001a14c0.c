void func_001a14c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = a1 & 3;                                                // 0x001a14c0: andi $a3, $a1, 3
    if (a1 >= 0) goto label_0x1a14ec;                           // 0x001a14c8: bgez $a1, 0x1a14ec
    a2 = a1 >> 2;                                               // 0x001a14cc: sra $a2, $a1, 2
    v1 = a1 + 3;                                                // 0x001a14d0: addiu $v1, $a1, 3
    a2 = v1 >> 2;                                               // 0x001a14d4: sra $a2, $v1, 2
    goto label_0x1a14f0;                                        // 0x001a14d8: b 0x1a14f0
    v1 = (t0 < a2) ? 1 : 0;                                     // 0x001a14dc: slt $v1, $t0, $a2
label_0x1a14e0:
    *(uint32_t*)(a0) = 0;                                       // 0x001a14e0: sw $zero, 0($a0)
    t0 = t0 + 1;                                                // 0x001a14e4: addiu $t0, $t0, 1
    a0 = a0 + 4;                                                // 0x001a14e8: addiu $a0, $a0, 4
label_0x1a14ec:
    v1 = (t0 < a2) ? 1 : 0;                                     // 0x001a14ec: slt $v1, $t0, $a2
label_0x1a14f0:
    /* nop */                                                   // 0x001a14f0: nop 
    if (v1 != 0) goto label_0x1a14e0;                           // 0x001a14f4: bnez $v1, 0x1a14e0
    /* nop */                                                   // 0x001a14f8: nop 
    if (a3 == 0) goto label_0x1a1528;                           // 0x001a14fc: beqz $a3, 0x1a1528
    /* nop */                                                   // 0x001a1500: nop 
    goto label_0x1a1518;                                        // 0x001a1504: b 0x1a1518
label_0x1a150c:
    *(uint8_t*)(a0) = 0;                                        // 0x001a150c: sb $zero, 0($a0)
    a1 = a1 + 1;                                                // 0x001a1510: addiu $a1, $a1, 1
    a0 = a0 + 1;                                                // 0x001a1514: addiu $a0, $a0, 1
label_0x1a1518:
    v1 = (a1 < a3) ? 1 : 0;                                     // 0x001a1518: slt $v1, $a1, $a3
    /* nop */                                                   // 0x001a151c: nop 
    if (v1 != 0) goto label_0x1a150c;                           // 0x001a1520: bnez $v1, 0x1a150c
    /* nop */                                                   // 0x001a1524: nop 
label_0x1a1528:
    return;                                                     // 0x001a1528: jr $ra
    /* nop */                                                   // 0x001a152c: nop 
}