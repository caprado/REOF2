void func_00127c88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_30, local_38, local_40;
    
    v0 = 0x1f << 16;                                            // 0x00127c88: lui $v0, 0x1f
    t2 = t2 << 0x10;                                            // 0x00127c8c: sll $t2, $t2, 0x10
    t3 = t3 << 0x10;                                            // 0x00127c90: sll $t3, $t3, 0x10
    v1 = g_001f2da8;  // Global at 0x001f2da8                   // 0x00127c94: lw $v1, 0x2da8($v0)
    sp = sp + -0x30;                                            // 0x00127c98: addiu $sp, $sp, -0x30
    t4 = t2 >> 0x10;                                            // 0x00127c9c: sra $t4, $t2, 0x10
    t5 = t3 >> 0x10;                                            // 0x00127ca0: sra $t5, $t3, 0x10
    t6 = local_30;                                              // 0x00127cb0: lw $t6, 0x30($sp)
    t7 = local_38;                                              // 0x00127cb4: lh $t7, 0x38($sp)
    if (v1 != 0) goto label_0x127cd8;                           // 0x00127cb8: bnez $v1, 0x127cd8
    v0 = local_40;                                              // 0x00127cbc: lh $v0, 0x40($sp)
    local_40 = v0;                                              // 0x00127cc4: sw $v0, 0x40($sp)
    local_38 = t7;                                              // 0x00127cc8: sw $t7, 0x38($sp)
    return func_00127940();  // Tail call                       // 0x00127ccc: j 0x127940
    sp = sp + 0x30;                                             // 0x00127cd0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00127cd4: nop 
label_0x127cd8:
    local_40 = v0;                                              // 0x00127ce4: sw $v0, 0x40($sp)
    local_30 = t6;                                              // 0x00127ce8: sw $t6, 0x30($sp)
    local_38 = t7;                                              // 0x00127cec: sw $t7, 0x38($sp)
    return func_00127578();  // Tail call                       // 0x00127cf0: j 0x127578
    sp = sp + 0x30;                                             // 0x00127cf4: addiu $sp, $sp, 0x30
    a0 = 0x1f << 16;                                            // 0x00127cf8: lui $a0, 0x1f
    sp = sp + -0x10;                                            // 0x00127cfc: addiu $sp, $sp, -0x10
    a0 = a0 + 0x2db8;                                           // 0x00127d04: addiu $a0, $a0, 0x2db8
    func_00107d30();  // 0x107c70                                // 0x00127d0c: jal 0x107c70
    a2 = 0x100;                                                 // 0x00127d10: addiu $a2, $zero, 0x100
    v1 = 0x1f << 16;                                            // 0x00127d14: lui $v1, 0x1f
    v0 = 0x1f << 16;                                            // 0x00127d1c: lui $v0, 0x1f
    g_001f2db0 = 0;  // Global at 0x001f2db0                    // 0x00127d20: sw $zero, 0x2db0($v1)
    g_001f2db4 = 0;  // Global at 0x001f2db4                    // 0x00127d24: sw $zero, 0x2db4($v0)
    return;                                                     // 0x00127d28: jr $ra
    sp = sp + 0x10;                                             // 0x00127d2c: addiu $sp, $sp, 0x10
}