void func_00135af0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135af0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x135b18;                           // 0x00135afc: bnez $a0, 0x135b18
    a0 = 0x22 << 16;                                            // 0x00135b04: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00135b08: jal 0x134ec0
    a0 = &str_002242b8;  // "cvFsReqWr #2:vtbl error"           // 0x00135b0c: addiu $a0, $a0, 0x42b8
    goto label_0x135b44;                                        // 0x00135b10: b 0x135b44
label_0x135b18:
    v0 = str_002242b8;  // "cvFsReqWr #2:vtbl error"            // 0x00135b18: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x24);                              // 0x00135b1c: lw $v0, 0x24($v0)
    /* beqzl $v0, 0x135b38 */                                   // 0x00135b20: beqzl $v0, 0x135b38
    a0 = 0x22 << 16;                                            // 0x00135b24: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135b28: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00135b2c: lw $a0, 4($a0)
    goto label_0x135b40;                                        // 0x00135b30: b 0x135b40
    func_00134fb0();  // 0x134ec0                                // 0x00135b38: jal 0x134ec0
    a0 = &str_002242d8;  // "cvFsStopTr #1:handle error"        // 0x00135b3c: addiu $a0, $a0, 0x42d8
label_0x135b40:
label_0x135b44:
    return;                                                     // 0x00135b4c: jr $ra
    sp = sp + 0x10;                                             // 0x00135b50: addiu $sp, $sp, 0x10
}