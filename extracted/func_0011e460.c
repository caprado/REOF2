void func_0011e460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x1000 << 16;                                          // 0x0011e460: lui $v1, 0x1000
    a0 = 0x1f << 16;                                            // 0x0011e464: lui $a0, 0x1f
    v1 = v1 | 0x1000;                                           // 0x0011e468: ori $v1, $v1, 0x1000
    t0 = g_10000010;  // Global at 0x10000010                   // 0x0011e470: lw $t0, 0x10($v1)
    t1 = t0 & 0x800;                                            // 0x0011e478: andi $t1, $t0, 0x800
    if (t1 == 0) goto label_0x11e48c;                           // 0x0011e47c: beqz $t1, 0x11e48c
    t1 = 2;                                                     // 0x0011e480: addiu $t1, $zero, 2
label_0x11e48c:
    t0 = t0 & 3;                                                // 0x0011e48c: andi $t0, $t0, 3
    if (t0 == 0) t1 = 0;                                        // 0x0011e494: movz $t1, $zero, $t0
    v0 = v0 | t2;                                               // 0x0011e498: or $v0, $v0, $t2
    return;                                                     // 0x0011e4a4: jr $ra
    /* nop */                                                   // 0x0011e4a8: nop 
}