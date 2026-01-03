void func_00114928() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00114928: addiu $sp, $sp, -0x40
    if (a0 != 0) goto label_0x114980;                           // 0x00114940: bnez $a0, 0x114980
    s0 = 0x1f << 16;                                            // 0x00114948: lui $s0, 0x1f
    v0 = g_001f0330;  // Global at 0x001f0330                   // 0x0011494c: lw $v0, 0x330($s0)
    if (v0 != 0) goto label_0x114970;                           // 0x00114950: bnez $v0, 0x114970
    func_00115af0();  // 115af0                                // 0x00114958: jal 0x115af0
    /* nop */                                                   // 0x0011495c: nop 
    if (v0 == 0) goto label_0x114980;                           // 0x00114960: beqz $v0, 0x114980
    v0 = 1;                                                     // 0x00114964: addiu $v0, $zero, 1
    g_001f0330 = v0;  // Global at 0x001f0330                   // 0x00114968: sw $v0, 0x330($s0)
label_0x114970:
    func_00115a20();  // 115a20                                // 0x00114970: jal 0x115a20
    goto label_0x114988;                                        // 0x00114978: b 0x114988
label_0x114980:
    v0 = -1;                                                    // 0x00114980: addiu $v0, $zero, -1
label_0x114988:
    return;                                                     // 0x00114994: jr $ra
    sp = sp + 0x40;                                             // 0x00114998: addiu $sp, $sp, 0x40
}