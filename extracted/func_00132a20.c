void func_00132a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132a20: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132a40;                           // 0x00132a24: bnez $a0, 0x132a40
    a0 = 0x22 << 16;                                            // 0x00132a2c: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x00132a30: jal 0x127d90
    a0 = &str_00223c40;  // "E02080828 ADXT_SetLpFlg: parameter error" // 0x00132a34: addiu $a0, $a0, 0x3c40
    goto label_0x132a44;                                        // 0x00132a38: b 0x132a44
    v0 = -1;                                                    // 0x00132a3c: addiu $v0, $zero, -1
label_0x132a40:
    v0 = g_00223c8c;  // Global at 0x00223c8c                   // 0x00132a40: lw $v0, 0x4c($a0)
label_0x132a44:
    return;                                                     // 0x00132a48: jr $ra
    sp = sp + 0x10;                                             // 0x00132a4c: addiu $sp, $sp, 0x10
}