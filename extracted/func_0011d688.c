void func_0011d688() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x0011d688: addiu $sp, $sp, -0x30
    FlushCache();  // 0x114390                                  // 0x0011d694: jal 0x114390
    v1 = local_0;                                               // 0x0011d69c: lw $v1, 0($sp)
    v0 = 0xffff << 16;                                          // 0x0011d6a0: lui $v0, 0xffff
    v0 = v0 | 0x1fff;                                           // 0x0011d6a4: ori $v0, $v0, 0x1fff
    s0 = sp + 4;                                                // 0x0011d6a8: addiu $s0, $sp, 4
    v1 = v1 & v0;                                               // 0x0011d6ac: and $v1, $v1, $v0
    v1 = v1 | 0x2000;                                           // 0x0011d6b4: ori $v1, $v1, 0x2000
    GetOsdConfigParam();  // 0x114380                           // 0x0011d6b8: jal 0x114380
    local_4 = v1;                                               // 0x0011d6bc: sw $v1, 4($sp)
    FlushCache();  // 0x114390                                  // 0x0011d6c0: jal 0x114390
    GetOsdConfigParam();  // 0x114380                           // 0x0011d6c8: jal 0x114380
    v0 = local_4;                                               // 0x0011d6d0: lw $v0, 4($sp)
    v0 = (unsigned)v0 >> 0xd;                                   // 0x0011d6d8: srl $v0, $v0, 0xd
    v0 = v0 & 7;                                                // 0x0011d6e0: andi $v0, $v0, 7
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0011d6e4: sltiu $v0, $v0, 1
    return;                                                     // 0x0011d6e8: jr $ra
    sp = sp + 0x30;                                             // 0x0011d6ec: addiu $sp, $sp, 0x30
}