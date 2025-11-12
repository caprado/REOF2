void func_0017a2e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017a2e0: addiu $sp, $sp, -0x10
    goto label_0x17a2f8;                                        // 0x0017a2ec: j 0x17a2f8
    sp = sp + 0x10;                                             // 0x0017a2f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017a2f4: nop 
label_0x17a2f8:
    sp = sp + -0x10;                                            // 0x0017a2f8: addiu $sp, $sp, -0x10
    s0 = 0x21 << 16;                                            // 0x0017a304: lui $s0, 0x21
    s0 = s0 + 0x57f0;                                           // 0x0017a308: addiu $s0, $s0, 0x57f0
    a2 = 0xa8;                                                  // 0x0017a30c: addiu $a2, $zero, 0xa8
    func_00107d30();  // 0x107c70                                // 0x0017a314: jal 0x107c70
    v1 = 8;                                                     // 0x0017a31c: addiu $v1, $zero, 8
    g_002157f4 = v1;  // Global at 0x002157f4                   // 0x0017a320: sw $v1, 4($s0)
    return;                                                     // 0x0017a32c: jr $ra
    sp = sp + 0x10;                                             // 0x0017a330: addiu $sp, $sp, 0x10
}