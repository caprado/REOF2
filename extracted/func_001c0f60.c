void func_001c0f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001c0f60: addiu $sp, $sp, -0x20
    FlushCache();  // 0x114390                                  // 0x001c0f68: jal 0x114390
    func_001c0f20();  // 1c0f20                                // 0x001c0f70: jal 0x1c0f20
    /* nop */                                                   // 0x001c0f74: nop 
    if (v0 == 0) goto label_0x1c0f88;                           // 0x001c0f78: beqz $v0, 0x1c0f88
    v0 = 0x22 << 16;                                            // 0x001c0f7c: lui $v0, 0x22
    goto label_0x1c0fb4;                                        // 0x001c0f80: b 0x1c0fb4
    v0 = g_0021d094;  // Global at 0x0021d094                   // 0x001c0f84: lbu $v0, -0x2f6c($v0)
label_0x1c0f88:
    FlushCache();  // 0x114390                                  // 0x001c0f88: jal 0x114390
    v1 = local_0;                                               // 0x001c0f90: lw $v1, 0($sp)
    v0 = (unsigned)v1 >> 0xd;                                   // 0x001c0f94: srl $v0, $v1, 0xd
    v0 = v0 & 7;                                                // 0x001c0f98: andi $v0, $v0, 7
    /* bnezl $v0, 0x1c0fb0 */                                   // 0x001c0f9c: bnezl $v0, 0x1c0fb0
    v0 = (unsigned)v1 >> 0x10;                                  // 0x001c0fa0: srl $v0, $v1, 0x10
    v0 = (unsigned)v1 >> 4;                                     // 0x001c0fa4: srl $v0, $v1, 4
    goto label_0x1c0fb4;                                        // 0x001c0fa8: b 0x1c0fb4
    v0 = v0 & 1;                                                // 0x001c0fac: andi $v0, $v0, 1
    v0 = v0 & 0x1f;                                             // 0x001c0fb0: andi $v0, $v0, 0x1f
label_0x1c0fb4:
    return;                                                     // 0x001c0fb8: jr $ra
    sp = sp + 0x20;                                             // 0x001c0fbc: addiu $sp, $sp, 0x20
}