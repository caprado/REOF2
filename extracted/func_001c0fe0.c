void func_001c0fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001c0fe0: addiu $sp, $sp, -0x20
    func_001c0f20();  // 1c0f20                                // 0x001c0fe8: jal 0x1c0f20
    /* nop */                                                   // 0x001c0fec: nop 
    if (v0 == 0) goto label_0x1c1000;                           // 0x001c0ff0: beqz $v0, 0x1c1000
    v1 = 0x22 << 16;                                            // 0x001c0ff4: lui $v1, 0x22
    goto label_0x1c1014;                                        // 0x001c0ff8: b 0x1c1014
    v0 = g_0021d092;  // Global at 0x0021d092                   // 0x001c0ffc: lbu $v0, -0x2f6e($v1)
label_0x1c1000:
    FlushCache();  // 0x114390                                  // 0x001c1000: jal 0x114390
    v0 = local_0;                                               // 0x001c1008: lw $v0, 0($sp)
    v0 = (unsigned)v0 >> 1;                                     // 0x001c100c: srl $v0, $v0, 1
    v0 = v0 & 3;                                                // 0x001c1010: andi $v0, $v0, 3
label_0x1c1014:
    return;                                                     // 0x001c1018: jr $ra
    sp = sp + 0x20;                                             // 0x001c101c: addiu $sp, $sp, 0x20
}