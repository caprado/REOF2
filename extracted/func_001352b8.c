void func_001352b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001352b8: addiu $sp, $sp, -0x10
    func_0010af38();  // 0x10ae00                                // 0x001352c4: jal 0x10ae00
    v0 = v0 + 1;                                                // 0x001352cc: addiu $v0, $v0, 1
    if (v0 == 0) goto label_0x135308;                           // 0x001352d0: beqz $v0, 0x135308
    a0 = s0 + a2;                                               // 0x001352dc: addu $a0, $s0, $a2
label_0x1352e0:
    a2 = a2 + 1;                                                // 0x001352e0: addiu $a2, $a2, 1
    v0 = *(uint8_t*)(a0);                                       // 0x001352e4: lbu $v0, 0($a0)
    v1 = v0 + -0x20;                                            // 0x001352e8: addiu $v1, $v0, -0x20
    v0 = v0 + -0x61;                                            // 0x001352ec: addiu $v0, $v0, -0x61
    v0 = ((unsigned)v0 < (unsigned)0x1a) ? 1 : 0;               // 0x001352f0: sltiu $v0, $v0, 0x1a
    if (v0 == 0) goto label_0x135300;                           // 0x001352f4: beqz $v0, 0x135300
    a1 = ((unsigned)a2 < (unsigned)a3) ? 1 : 0;                 // 0x001352f8: sltu $a1, $a2, $a3
    *(uint8_t*)(a0) = v1;                                       // 0x001352fc: sb $v1, 0($a0)
label_0x135300:
    if (a1 != 0) goto label_0x1352e0;                           // 0x00135300: bnez $a1, 0x1352e0
    a0 = s0 + a2;                                               // 0x00135304: addu $a0, $s0, $a2
label_0x135308:
    return;                                                     // 0x00135310: jr $ra
    sp = sp + 0x10;                                             // 0x00135314: addiu $sp, $sp, 0x10
}