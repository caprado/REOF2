void func_001593d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x001593d0: addiu $sp, $sp, -0x20
    a2 = 0x7fff << 16;                                          // 0x001593d4: lui $a2, 0x7fff
    a1 = 1;                                                     // 0x001593e4: addiu $a1, $zero, 1
    a2 = a2 | 0xffff;                                           // 0x001593e8: ori $a2, $a2, 0xffff
    v1 = *(int32_t*)(s0);                                       // 0x001593ec: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x001593f0: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x001593f4: jalr $v0
    v1 = *(int32_t*)(s0);                                       // 0x001593fc: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x00159404: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00159408: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0015940c: jalr $v0
    v1 = local_4;                                               // 0x00159414: lw $v1, 4($sp)
    v1 = (v1 < 4) ? 1 : 0;                                      // 0x00159418: slti $v1, $v1, 4
    if (v1 != 0) goto label_0x15942c;                           // 0x0015941c: bnez $v1, 0x15942c
    func_00158310();  // 0x158278                                // 0x00159424: jal 0x158278
    a0 = local_0;                                               // 0x00159428: lw $a0, 0($sp)
label_0x15942c:
    return;                                                     // 0x00159434: jr $ra
    sp = sp + 0x20;                                             // 0x00159438: addiu $sp, $sp, 0x20
}