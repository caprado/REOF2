void func_00135c10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135c10: addiu $sp, $sp, -0x10
    s0 = 3;                                                     // 0x00135c18: addiu $s0, $zero, 3
    if (a0 != 0) goto label_0x135c38;                           // 0x00135c1c: bnez $a0, 0x135c38
    a0 = 0x22 << 16;                                            // 0x00135c24: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00135c28: jal 0x134ec0
    a0 = &str_00224330;  // "cvFsGetStat #2:vtbl error"         // 0x00135c2c: addiu $a0, $a0, 0x4330
    goto label_0x135c64;                                        // 0x00135c30: b 0x135c64
    v0 = 3;                                                     // 0x00135c34: addiu $v0, $zero, 3
label_0x135c38:
    v0 = str_00224330;  // "cvFsGetStat #2:vtbl error"          // 0x00135c38: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x2c);                              // 0x00135c3c: lw $v0, 0x2c($v0)
    /* beqzl $v0, 0x135c58 */                                   // 0x00135c40: beqzl $v0, 0x135c58
    a0 = 0x22 << 16;                                            // 0x00135c44: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135c48: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00135c4c: lw $a0, 4($a0)
    goto label_0x135c60;                                        // 0x00135c50: b 0x135c60
    func_00134fb0();  // 0x134ec0                                // 0x00135c58: jal 0x134ec0
    a0 = &str_00224350;  // "cvFsGetFileSize #1:illegal file name" // 0x00135c5c: addiu $a0, $a0, 0x4350
label_0x135c60:
label_0x135c64:
    return;                                                     // 0x00135c6c: jr $ra
    sp = sp + 0x10;                                             // 0x00135c70: addiu $sp, $sp, 0x10
}