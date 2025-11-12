void func_0016c1c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016c1c0: addiu $sp, $sp, -0x10
    func_00170240();  // 0x170230                                // 0x0016c1cc: jal 0x170230
    if (v0 != 0) goto label_0x16c1fc;                           // 0x0016c1d4: bnez $v0, 0x16c1fc
    func_0016c268();  // 0x16c220                                // 0x0016c1dc: jal 0x16c220
    /* nop */                                                   // 0x0016c1e0: nop 
    if (v0 == 0) goto label_0x16c208;                           // 0x0016c1e4: beqz $v0, 0x16c208
    func_0016c378();  // 0x16c268                                // 0x0016c1ec: jal 0x16c268
    /* nop */                                                   // 0x0016c1f0: nop 
    /* beqzl $v0, 0x16c20c */                                   // 0x0016c1f4: beqzl $v0, 0x16c20c
label_0x16c1fc:
    goto label_0x16c20c;                                        // 0x0016c1fc: b 0x16c20c
    v0 = 1;                                                     // 0x0016c200: addiu $v0, $zero, 1
    /* nop */                                                   // 0x0016c204: nop 
label_0x16c208:
label_0x16c20c:
    return;                                                     // 0x0016c214: jr $ra
    sp = sp + 0x10;                                             // 0x0016c218: addiu $sp, $sp, 0x10
}