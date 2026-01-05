void func_00135e08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135e08: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x135e28;                           // 0x00135e0c: bnez $a0, 0x135e28
    a0 = 0x22 << 16;                                            // 0x00135e14: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x00135e18: jal 0x134ec0
    a0 = &str_002244a8;  // "cvFsGetFreeSize #5:device not found" // 0x00135e1c: addiu $a0, $a0, 0x44a8
    goto label_0x135e58;                                        // 0x00135e20: b 0x135e58
    v0 = -1;                                                    // 0x00135e24: addiu $v0, $zero, -1
label_0x135e28:
    v0 = str_002244a8;  // "cvFsGetFreeSize #5:device not found" // 0x00135e28: lw $v0, 0($a0)
    v1 = 0x7fff << 16;                                          // 0x00135e2c: lui $v1, 0x7fff
    v0 = *(int32_t*)((v0) + 0x60);                              // 0x00135e30: lw $v0, 0x60($v0)
    if (v0 == 0) goto label_0x135e54;                           // 0x00135e34: beqz $v0, 0x135e54
    v1 = v1 | 0xffff;                                           // 0x00135e38: ori $v1, $v1, 0xffff
    a0 = g_002244ac;  // Global at 0x002244ac                   // 0x00135e3c: lw $a0, 4($a0)
    a1 = 0x12c;                                                 // 0x00135e40: addiu $a1, $zero, 0x12c
    /* call function at address in v0 */                        // 0x00135e48: jalr $v0
label_0x135e54:
label_0x135e58:
    return;                                                     // 0x00135e5c: jr $ra
    sp = sp + 0x10;                                             // 0x00135e60: addiu $sp, $sp, 0x10
}