void func_00136768() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00136768: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x136790;                           // 0x00136774: bnez $a0, 0x136790
    a0 = 0x22 << 16;                                            // 0x0013677c: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x00136780: jal 0x134ec0
    a0 = &str_00224940;  // "cvFsOptFn1 #2:vtbl error"          // 0x00136784: addiu $a0, $a0, 0x4940
    goto label_0x1367bc;                                        // 0x00136788: b 0x1367bc
label_0x136790:
    v0 = str_00224940;  // "cvFsOptFn1 #2:vtbl error"           // 0x00136790: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x60);                              // 0x00136794: lw $v0, 0x60($v0)
    /* beqzl $v0, 0x1367b0 */                                   // 0x00136798: beqzl $v0, 0x1367b0
    a0 = 0x22 << 16;                                            // 0x0013679c: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x001367a0: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x001367a4: lw $a0, 4($a0)
    goto label_0x1367b8;                                        // 0x001367a8: b 0x1367b8
    func_00134ec0();  // 134ec0                                // 0x001367b0: jal 0x134ec0
    a0 = &str_00224960;  // "cvFsOptFn2 #1:handle error"        // 0x001367b4: addiu $a0, $a0, 0x4960
label_0x1367b8:
label_0x1367bc:
    return;                                                     // 0x001367c4: jr $ra
    sp = sp + 0x10;                                             // 0x001367c8: addiu $sp, $sp, 0x10
}