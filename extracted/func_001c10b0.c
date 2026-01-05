void func_001c10b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x001c10b0: addiu $sp, $sp, -0x20
    func_001c0f20();  // 1c0f20                                // 0x001c10b8: jal 0x1c0f20
    /* nop */                                                   // 0x001c10bc: nop 
    if (v0 == 0) goto label_0x1c10d0;                           // 0x001c10c0: beqz $v0, 0x1c10d0
    v0 = 0x22 << 16;                                            // 0x001c10c4: lui $v0, 0x22
    goto label_0x1c1108;                                        // 0x001c10c8: b 0x1c1108
    v0 = g_0021d093;  // Global at 0x0021d093                   // 0x001c10cc: lbu $v0, -0x2f6d($v0)
label_0x1c10d0:
    FlushCache();  // 0x114390                                  // 0x001c10d0: jal 0x114390
    v0 = local_0;                                               // 0x001c10d8: lw $v0, 0($sp)
    v0 = (unsigned)v0 >> 0xd;                                   // 0x001c10dc: srl $v0, $v0, 0xd
    v0 = v0 & 7;                                                // 0x001c10e0: andi $v0, $v0, 7
    if (v0 != 0) goto label_0x1c10f4;                           // 0x001c10e4: bnez $v0, 0x1c10f4
    a0 = sp | 4;                                                // 0x001c10e8: ori $a0, $sp, 4
    goto label_0x1c1108;                                        // 0x001c10ec: b 0x1c1108
label_0x1c10f4:
    a1 = 1;                                                     // 0x001c10f4: addiu $a1, $zero, 1
    GsPutIMR();  // 0x1145f0                                    // 0x001c10f8: jal 0x1145f0
    a2 = 1;                                                     // 0x001c10fc: addiu $a2, $zero, 1
    v1 = local_4;                                               // 0x001c1100: lbu $v1, 4($sp)
    v0 = (unsigned)v1 >> 6;                                     // 0x001c1104: srl $v0, $v1, 6
label_0x1c1108:
    return;                                                     // 0x001c110c: jr $ra
    sp = sp + 0x20;                                             // 0x001c1110: addiu $sp, $sp, 0x20
}