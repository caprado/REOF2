void func_00122430() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00122430: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x00122434: lui $v1, 0x1f
    v1 = v1 + 0x1a10;                                           // 0x0012243c: addiu $v1, $v1, 0x1a10
    v0 = g_001f1a10;  // Global at 0x001f1a10                   // 0x00122440: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x00122444: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x122470;                           // 0x00122448: bnez $v0, 0x122470
    g_001f1a10 = v0;  // Global at 0x001f1a10                   // 0x0012244c: sw $v0, 0($v1)
    a0 = 0x1f << 16;                                            // 0x00122450: lui $a0, 0x1f
    a0 = a0 + 0x1a18;                                           // 0x0012245c: addiu $a0, $a0, 0x1a18
    a2 = 0x300;                                                 // 0x00122460: addiu $a2, $zero, 0x300
    return func_00107d30();  // Tail call                        // 0x00122464: j 0x107c70
    sp = sp + 0x10;                                             // 0x00122468: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012246c: nop 
label_0x122470:
    return;                                                     // 0x00122474: jr $ra
    sp = sp + 0x10;                                             // 0x00122478: addiu $sp, $sp, 0x10
}