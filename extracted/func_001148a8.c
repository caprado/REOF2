void func_001148a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001148a8: addiu $sp, $sp, -0x40
    a0 = a0 + -1;                                               // 0x001148ac: addiu $a0, $a0, -1
    a0 = ((unsigned)a0 < (unsigned)2) ? 1 : 0;                  // 0x001148b4: sltiu $a0, $a0, 2
    if (a0 == 0) goto label_0x114908;                           // 0x001148c8: beqz $a0, 0x114908
    s0 = 0x1f << 16;                                            // 0x001148d0: lui $s0, 0x1f
    v0 = g_001f0330;  // Global at 0x001f0330                   // 0x001148d4: lw $v0, 0x330($s0)
    if (v0 != 0) goto label_0x1148f8;                           // 0x001148d8: bnez $v0, 0x1148f8
    func_00115af0();  // 115af0                                // 0x001148e0: jal 0x115af0
    /* nop */                                                   // 0x001148e4: nop 
    if (v0 == 0) goto label_0x114908;                           // 0x001148e8: beqz $v0, 0x114908
    v0 = 1;                                                     // 0x001148ec: addiu $v0, $zero, 1
    g_001f0330 = v0;  // Global at 0x001f0330                   // 0x001148f0: sw $v0, 0x330($s0)
label_0x1148f8:
    func_001158a8();  // 1158a8                                // 0x001148f8: jal 0x1158a8
    goto label_0x114910;                                        // 0x00114900: b 0x114910
label_0x114908:
    v0 = -1;                                                    // 0x00114908: addiu $v0, $zero, -1
label_0x114910:
    return;                                                     // 0x0011491c: jr $ra
    sp = sp + 0x40;                                             // 0x00114920: addiu $sp, $sp, 0x40
}