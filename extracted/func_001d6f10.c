void func_001d6f10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d6f10: addiu $sp, $sp, -0x10
    if (t5 != 0) goto label_0x1d6f28;                           // 0x001d6f18: bnez $t5, 0x1d6f28
    goto label_0x1d6f8c;                                        // 0x001d6f20: b 0x1d6f8c
label_0x1d6f28:
    t4 = 0x33 << 16;                                            // 0x001d6f28: lui $t4, 0x33
    goto label_0x1d6f80;                                        // 0x001d6f30: b 0x1d6f80
    t4 = t4 + -0x1530;                                          // 0x001d6f34: addiu $t4, $t4, -0x1530
label_0x1d6f38:
    v0 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d6f38: lbu $v0, 0($t4)
    if (v0 == 0) goto label_0x1d6f78;                           // 0x001d6f3c: beqz $v0, 0x1d6f78
    /* nop */                                                   // 0x001d6f40: nop 
    v0 = g_0032ead3;  // Global at 0x0032ead3                   // 0x001d6f44: lbu $v0, 3($t4)
    v0 = v0 & 4;                                                // 0x001d6f48: andi $v0, $v0, 4
    if (v0 == 0) goto label_0x1d6f78;                           // 0x001d6f4c: beqz $v0, 0x1d6f78
    /* nop */                                                   // 0x001d6f50: nop 
    a0 = g_0032ead4;  // Global at 0x0032ead4                   // 0x001d6f54: lw $a0, 4($t4)
    if (a0 == 0) goto label_0x1d6f78;                           // 0x001d6f58: beqz $a0, 0x1d6f78
    func_001d6250();  // 1d6250                                // 0x001d6f60: jal 0x1d6250
    /* nop */                                                   // 0x001d6f64: nop 
    if (v0 == 0) goto label_0x1d6f78;                           // 0x001d6f68: beqz $v0, 0x1d6f78
    /* nop */                                                   // 0x001d6f6c: nop 
    goto label_0x1d6f8c;                                        // 0x001d6f70: b 0x1d6f8c
    v0 = 1;                                                     // 0x001d6f74: addiu $v0, $zero, 1
label_0x1d6f78:
    t3 = t3 + 1;                                                // 0x001d6f78: addiu $t3, $t3, 1
    t4 = t4 + 0xc;                                              // 0x001d6f7c: addiu $t4, $t4, 0xc
label_0x1d6f80:
    v0 = (t3 < 0x10) ? 1 : 0;                                   // 0x001d6f80: slti $v0, $t3, 0x10
    if (v0 != 0) goto label_0x1d6f38;                           // 0x001d6f84: bnez $v0, 0x1d6f38
label_0x1d6f8c:
    return;                                                     // 0x001d6f90: jr $ra
    sp = sp + 0x10;                                             // 0x001d6f94: addiu $sp, $sp, 0x10
}