void func_00135a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135a20: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x135a48;                           // 0x00135a28: bnez $a0, 0x135a48
    a0 = 0x22 << 16;                                            // 0x00135a30: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x00135a34: jal 0x134ec0
    a0 = &str_00224248;  // "cvFsSeek #2:vtbl error"            // 0x00135a38: addiu $a0, $a0, 0x4248
    goto label_0x135a78;                                        // 0x00135a3c: b 0x135a78
    /* nop */                                                   // 0x00135a44: nop 
label_0x135a48:
    v0 = str_00224248;  // "cvFsSeek #2:vtbl error"             // 0x00135a48: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x18);                              // 0x00135a4c: lw $v0, 0x18($v0)
    /* beqzl $v0, 0x135a68 */                                   // 0x00135a50: beqzl $v0, 0x135a68
    a0 = 0x22 << 16;                                            // 0x00135a54: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135a58: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00135a5c: lw $a0, 4($a0)
    goto label_0x135a74;                                        // 0x00135a60: b 0x135a74
    func_00134ec0();  // 134ec0                                // 0x00135a6c: jal 0x134ec0
    a0 = &str_00224268;  // "cvFsReqRd #1:handle error"         // 0x00135a70: addiu $a0, $a0, 0x4268
label_0x135a74:
label_0x135a78:
    return;                                                     // 0x00135a80: jr $ra
    sp = sp + 0x10;                                             // 0x00135a84: addiu $sp, $sp, 0x10
}