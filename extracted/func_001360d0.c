void func_001360d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_130;
    
    sp = sp + -0x280;                                           // 0x001360d0: addiu $sp, $sp, -0x280
    if (s0 != 0) goto label_0x1360f8;                           // 0x001360e0: bnez $s0, 0x1360f8
    a0 = 0x22 << 16;                                            // 0x001360e8: lui $a0, 0x22
    goto label_0x13616c;                                        // 0x001360ec: b 0x13616c
    a0 = &str_002245e0;  // "cvFsChangeDir #2:illegal device name" // 0x001360f0: addiu $a0, $a0, 0x45e0
    /* nop */                                                   // 0x001360f4: nop 
label_0x1360f8:
    s1 = sp + 0x130;                                            // 0x001360f8: addiu $s1, $sp, 0x130
    func_00135790();  // 135790                                // 0x00136104: jal 0x135790
    v0 = local_130;                                             // 0x0013610c: lb $v0, 0x130($sp)
    if (v0 != 0) goto label_0x136128;                           // 0x00136110: bnez $v0, 0x136128
    a0 = 0x22 << 16;                                            // 0x00136118: lui $a0, 0x22
    goto label_0x13616c;                                        // 0x0013611c: b 0x13616c
    a0 = &str_002245e0;  // "cvFsChangeDir #2:illegal device name" // 0x00136120: addiu $a0, $a0, 0x45e0
    /* nop */                                                   // 0x00136124: nop 
label_0x136128:
    func_00135548();  // 135548                                // 0x0013612c: jal 0x135548
    /* bnezl $s0, 0x136150 */                                   // 0x00136138: bnezl $s0, 0x136150
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x0013613c: lw $v0, 0x3c($s0)
    a0 = 0x22 << 16;                                            // 0x00136140: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x00136144: jal 0x134ec0
    a0 = &str_00224630;  // "cvFsChangeDir #4:vtbl error"       // 0x00136148: addiu $a0, $a0, 0x4630
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x0013614c: lw $v0, 0x3c($s0)
    /* beqzl $v0, 0x136168 */                                   // 0x00136150: beqzl $v0, 0x136168
    a0 = 0x22 << 16;                                            // 0x00136154: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00136158: jalr $v0
    goto label_0x13617c;                                        // 0x00136160: b 0x13617c
    a0 = &str_00224658;  // "cvFsIsExistFile #1:illegal file name" // 0x00136168: addiu $a0, $a0, 0x4658
label_0x13616c:
    func_00134ec0();  // 134ec0                                // 0x0013616c: jal 0x134ec0
    /* nop */                                                   // 0x00136170: nop 
    v0 = -1;                                                    // 0x00136174: addiu $v0, $zero, -1
label_0x13617c:
    return;                                                     // 0x00136184: jr $ra
    sp = sp + 0x280;                                            // 0x00136188: addiu $sp, $sp, 0x280
}