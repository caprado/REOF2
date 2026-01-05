void func_001c1060() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001c1060: addiu $sp, $sp, -0x20
    func_001c0f20();  // 1c0f20                                // 0x001c1068: jal 0x1c0f20
    /* nop */                                                   // 0x001c106c: nop 
    if (v0 == 0) goto label_0x1c1080;                           // 0x001c1070: beqz $v0, 0x1c1080
    v0 = 0x22 << 16;                                            // 0x001c1074: lui $v0, 0x22
    goto label_0x1c10a0;                                        // 0x001c1078: b 0x1c10a0
    v0 = g_0021d090;  // Global at 0x0021d090                   // 0x001c107c: lh $v0, -0x2f70($v0)
label_0x1c1080:
    FlushCache();  // 0x114390                                  // 0x001c1080: jal 0x114390
    v0 = local_0;                                               // 0x001c1088: lw $v0, 0($sp)
    a0 = 0x21c;                                                 // 0x001c108c: addiu $a0, $zero, 0x21c
    v1 = (unsigned)v0 >> 0xd;                                   // 0x001c1090: srl $v1, $v0, 0xd
    v0 = v0 >> 0x15;                                            // 0x001c1094: sra $v0, $v0, 0x15
    v1 = v1 & 7;                                                // 0x001c1098: andi $v1, $v1, 7
    if (v1 == 0) v0 = a0;                                       // 0x001c109c: movz $v0, $a0, $v1
label_0x1c10a0:
    return;                                                     // 0x001c10a4: jr $ra
    sp = sp + 0x20;                                             // 0x001c10a8: addiu $sp, $sp, 0x20
}