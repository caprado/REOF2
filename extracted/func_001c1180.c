void func_001c1180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x001c1180: addiu $sp, $sp, -0x20
    func_001c0f20();  // 1c0f20                                // 0x001c1188: jal 0x1c0f20
    /* nop */                                                   // 0x001c118c: nop 
    if (v0 == 0) goto label_0x1c11a0;                           // 0x001c1190: beqz $v0, 0x1c11a0
    v0 = 0x22 << 16;                                            // 0x001c1194: lui $v0, 0x22
    goto label_0x1c11dc;                                        // 0x001c1198: b 0x1c11dc
    v0 = g_0021d097;  // Global at 0x0021d097                   // 0x001c119c: lbu $v0, -0x2f69($v0)
label_0x1c11a0:
    FlushCache();  // 0x114390                                  // 0x001c11a0: jal 0x114390
    v0 = local_0;                                               // 0x001c11a8: lw $v0, 0($sp)
    v0 = (unsigned)v0 >> 0xd;                                   // 0x001c11ac: srl $v0, $v0, 0xd
    v0 = v0 & 7;                                                // 0x001c11b0: andi $v0, $v0, 7
    if (v0 != 0) goto label_0x1c11c4;                           // 0x001c11b4: bnez $v0, 0x1c11c4
    a0 = sp | 4;                                                // 0x001c11b8: ori $a0, $sp, 4
    goto label_0x1c11dc;                                        // 0x001c11bc: b 0x1c11dc
label_0x1c11c4:
    a1 = 1;                                                     // 0x001c11c4: addiu $a1, $zero, 1
    GsPutIMR();  // 0x1145f0                                    // 0x001c11c8: jal 0x1145f0
    a2 = 1;                                                     // 0x001c11cc: addiu $a2, $zero, 1
    v1 = local_4;                                               // 0x001c11d0: lbu $v1, 4($sp)
    v1 = (unsigned)v1 >> 5;                                     // 0x001c11d4: srl $v1, $v1, 5
    v0 = v1 & 1;                                                // 0x001c11d8: andi $v0, $v1, 1
label_0x1c11dc:
    return;                                                     // 0x001c11e0: jr $ra
    sp = sp + 0x20;                                             // 0x001c11e4: addiu $sp, $sp, 0x20
}