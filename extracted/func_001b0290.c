void func_001b0290() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b0290: addiu $sp, $sp, -0x10
    t3 = 0x31 << 16;                                            // 0x001b0294: lui $t3, 0x31
    t3 = t3 + 0x1d30;                                           // 0x001b029c: addiu $t3, $t3, 0x1d30
    v1 = t2 << 2;                                               // 0x001b02a4: sll $v1, $t2, 2
label_0x1b02a8:
    a0 = v1 + t2;                                               // 0x001b02ac: addu $a0, $v1, $t2
    v1 = gp + -0x7cf8;                                          // 0x001b02b0: addiu $v1, $gp, -0x7cf8
    a0 = a0 << 2;                                               // 0x001b02b4: sll $a0, $a0, 2
    a3 = v1 + t2;                                               // 0x001b02b8: addu $a3, $v1, $t2
    v1 = t3 + a0;                                               // 0x001b02bc: addu $v1, $t3, $a0
    goto label_0x1b02d4;                                        // 0x001b02c0: b 0x1b02d4
    t0 = v1 + 0x13a8;                                           // 0x001b02c4: addiu $t0, $v1, 0x13a8
label_0x1b02c8:
    func_001aff00();  // 0x1afed0                                // 0x001b02c8: jal 0x1afed0
    t1 = t1 + 1;                                                // 0x001b02d0: addiu $t1, $t1, 1
label_0x1b02d4:
    v1 = *(uint8_t*)(a3);                                       // 0x001b02d4: lbu $v1, 0($a3)
    v1 = (t1 < v1) ? 1 : 0;                                     // 0x001b02d8: slt $v1, $t1, $v1
    if (v1 != 0) goto label_0x1b02c8;                           // 0x001b02dc: bnez $v1, 0x1b02c8
    t2 = t2 + 1;                                                // 0x001b02e4: addiu $t2, $t2, 1
    v1 = (t2 < 5) ? 1 : 0;                                      // 0x001b02e8: slti $v1, $t2, 5
    if (v1 != 0) goto label_0x1b02a8;                           // 0x001b02ec: bnez $v1, 0x1b02a8
    v1 = t2 << 2;                                               // 0x001b02f0: sll $v1, $t2, 2
    return;                                                     // 0x001b02f8: jr $ra
    sp = sp + 0x10;                                             // 0x001b02fc: addiu $sp, $sp, 0x10
}