void func_00137fe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x00137fe8: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x00137fec: addiu $sp, $sp, -0x10
    v1 = g_002021fc;  // Global at 0x002021fc                   // 0x00137ff0: lw $v1, 0x21fc($v0)
    a0 = 1;                                                     // 0x00137ff4: addiu $a0, $zero, 1
    if (v1 != a0) goto label_0x138010;                          // 0x00137ff8: bne $v1, $a0, 0x138010
    return func_00141480();  // Tail call                        // 0x00138004: j 0x141468
    sp = sp + 0x10;                                             // 0x00138008: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013800c: nop 
label_0x138010:
    return;                                                     // 0x00138014: jr $ra
    sp = sp + 0x10;                                             // 0x00138018: addiu $sp, $sp, 0x10
}