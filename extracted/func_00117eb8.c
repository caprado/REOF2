void func_00117eb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00117eb8: addiu $sp, $sp, -0x30
    func_00117e30();  // 0x117dd0                                // 0x00117ecc: jal 0x117dd0
    s1 = 0x1f << 16;                                            // 0x00117ed0: lui $s1, 0x1f
    PollSema();  // 0x114320                                    // 0x00117ed4: jal 0x114320
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00117ed8: lw $a0, 0x3e8($s1)
    v1 = ((unsigned)s0 < (unsigned)0x20) ? 1 : 0;               // 0x00117edc: sltiu $v1, $s0, 0x20
    if (v1 != 0) goto label_0x117ef8;                           // 0x00117ee0: bnez $v1, 0x117ef8
    v0 = 0x25 << 16;                                            // 0x00117ee4: lui $v0, 0x25
    iSignalSema();  // 0x114300                                 // 0x00117ee8: jal 0x114300
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00117eec: lw $a0, 0x3e8($s1)
    goto label_0x117f10;                                        // 0x00117ef0: b 0x117f10
label_0x117ef8:
    s0 = s0 << 4;                                               // 0x00117ef8: sll $s0, $s0, 4
    v0 = v0 + -0x940;                                           // 0x00117efc: addiu $v0, $v0, -0x940
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00117f00: lw $a0, 0x3e8($s1)
    iSignalSema();  // 0x114300                                 // 0x00117f04: jal 0x114300
    s0 = s0 + v0;                                               // 0x00117f08: addu $s0, $s0, $v0
label_0x117f10:
    return;                                                     // 0x00117f1c: jr $ra
    sp = sp + 0x30;                                             // 0x00117f20: addiu $sp, $sp, 0x30
}