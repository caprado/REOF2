void func_00135bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00135bb0: addiu $sp, $sp, -0x20
    v0 = 0x25 << 16;                                            // 0x00135bb4: lui $v0, 0x25
    s0 = v0 + 0x37e8;                                           // 0x00135bc0: addiu $s0, $v0, 0x37e8
    s1 = 0x1f;                                                  // 0x00135bc8: addiu $s1, $zero, 0x1f
    v0 = g_002537e8;  // Global at 0x002537e8                   // 0x00135bcc: lw $v0, 0($s0)
label_0x135bd0:
    if (v0 == 0) goto label_0x135bec;                           // 0x00135bd0: beqz $v0, 0x135bec
    s0 = s0 + 0x10;                                             // 0x00135bd4: addiu $s0, $s0, 0x10
    v0 = g_00250000;  // Global at 0x00250000                   // 0x00135bd8: lw $v0, 0($v0)
    /* beqzl $v0, 0x135bf0 */                                   // 0x00135bdc: beqzl $v0, 0x135bf0
    s1 = s1 + -1;                                               // 0x00135be0: addiu $s1, $s1, -1
    /* call function at address in v0 */                        // 0x00135be4: jalr $v0
    /* nop */                                                   // 0x00135be8: nop 
label_0x135bec:
    s1 = s1 + -1;                                               // 0x00135bec: addiu $s1, $s1, -1
    if (s1 >= 0) goto label_0x135bd0;                           // 0x00135bf0: bgezl $s1, 0x135bd0
    v0 = g_002537f8;  // Global at 0x002537f8                   // 0x00135bf4: lw $v0, 0($s0)
    return;                                                     // 0x00135c04: jr $ra
    sp = sp + 0x20;                                             // 0x00135c08: addiu $sp, $sp, 0x20
}