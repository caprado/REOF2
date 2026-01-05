void func_001c1020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001c1020: addiu $sp, $sp, -0x20
    func_001c0f20();  // 1c0f20                                // 0x001c1028: jal 0x1c0f20
    /* nop */                                                   // 0x001c102c: nop 
    if (v0 == 0) goto label_0x1c1040;                           // 0x001c1030: beqz $v0, 0x1c1040
    v1 = 0x22 << 16;                                            // 0x001c1034: lui $v1, 0x22
    goto label_0x1c1050;                                        // 0x001c1038: b 0x1c1050
    v0 = g_0021d095;  // Global at 0x0021d095                   // 0x001c103c: lbu $v0, -0x2f6b($v1)
label_0x1c1040:
    FlushCache();  // 0x114390                                  // 0x001c1040: jal 0x114390
    v0 = local_0;                                               // 0x001c1048: lw $v0, 0($sp)
    v0 = v0 & 1;                                                // 0x001c104c: andi $v0, $v0, 1
label_0x1c1050:
    return;                                                     // 0x001c1054: jr $ra
    sp = sp + 0x20;                                             // 0x001c1058: addiu $sp, $sp, 0x20
}