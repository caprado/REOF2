void func_0011e4b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011e4b0: addiu $sp, $sp, -0x20
    func_0011d320();  // 11d320                                // 0x0011e4bc: jal 0x11d320
    /* nop */                                                   // 0x0011e4c0: nop 
    v1 = 0x1000 << 16;                                          // 0x0011e4c4: lui $v1, 0x1000
    a0 = 0x1f << 16;                                            // 0x0011e4c8: lui $a0, 0x1f
    v1 = v1 | 0x1000;                                           // 0x0011e4cc: ori $v1, $v1, 0x1000
    t0 = g_10000010;  // Global at 0x10000010                   // 0x0011e4d4: lw $t0, 0x10($v1)
    t1 = t0 & 0x800;                                            // 0x0011e4dc: andi $t1, $t0, 0x800
    if (t1 == 0) goto label_0x11e4f0;                           // 0x0011e4e0: beqz $t1, 0x11e4f0
    t1 = 2;                                                     // 0x0011e4e4: addiu $t1, $zero, 2
label_0x11e4f0:
    t0 = t0 & 3;                                                // 0x0011e4f0: andi $t0, $t0, 3
    if (t0 == 0) t1 = 0;                                        // 0x0011e4f8: movz $t1, $zero, $t0
    s0 = s0 | t2;                                               // 0x0011e4fc: or $s0, $s0, $t2
    if (v0 == 0) goto label_0x11e51c;                           // 0x0011e508: beqz $v0, 0x11e51c
    func_0011d378();  // 11d378                                // 0x0011e510: jal 0x11d378
    /* nop */                                                   // 0x0011e514: nop 
label_0x11e51c:
    return;                                                     // 0x0011e524: jr $ra
    sp = sp + 0x20;                                             // 0x0011e528: addiu $sp, $sp, 0x20
}