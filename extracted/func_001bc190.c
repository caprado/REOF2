void func_001bc190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001bc6d0();  // Tail call                        // 0x001bc190: j 0x1bc6c0
    /* nop */                                                   // 0x001bc194: nop 
    /* nop */                                                   // 0x001bc198: nop 
    /* nop */                                                   // 0x001bc19c: nop 
    return func_001dd9c0();  // Tail call                        // 0x001bc1a0: j 0x1dd9a0
    /* nop */                                                   // 0x001bc1a4: nop 
    /* nop */                                                   // 0x001bc1a8: nop 
    /* nop */                                                   // 0x001bc1ac: nop 
    sp = sp + -0x10;                                            // 0x001bc1b0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x6330);                           // 0x001bc1b8: lw $v1, -0x6330($gp)
    if (v1 != 0) goto label_0x1bc1f4;                           // 0x001bc1bc: bnez $v1, 0x1bc1f4
    at = 0x31 << 16;                                            // 0x001bc1c0: lui $at, 0x31
    a0 = g_00313890;  // Global at 0x00313890                   // 0x001bc1c4: lw $a0, 0x3890($at)
    at = 0x31 << 16;                                            // 0x001bc1c8: lui $at, 0x31
    a1 = g_00313894;  // Global at 0x00313894                   // 0x001bc1cc: lw $a1, 0x3894($at)
    at = 0x31 << 16;                                            // 0x001bc1d0: lui $at, 0x31
    func_001f05b0();  // 0x1dd9c0                                // 0x001bc1d4: jal 0x1dd9c0
    a2 = g_00313898;  // Global at 0x00313898                   // 0x001bc1d8: lw $a2, 0x3898($at)
    *(uint32_t*)((gp) + -0x6330) = v0;                          // 0x001bc1dc: sw $v0, -0x6330($gp)
    v1 = *(int32_t*)((gp) + -0x6330);                           // 0x001bc1e0: lw $v1, -0x6330($gp)
    if (v1 == 0) goto label_0x1bc1f4;                           // 0x001bc1e4: beqz $v1, 0x1bc1f4
    /* nop */                                                   // 0x001bc1e8: nop 
    func_001c6a10();  // 0x1c69d0                                // 0x001bc1ec: jal 0x1c69d0
    /* nop */                                                   // 0x001bc1f0: nop 
label_0x1bc1f4:
    return;                                                     // 0x001bc1f8: jr $ra
    sp = sp + 0x10;                                             // 0x001bc1fc: addiu $sp, $sp, 0x10
}