void func_00135a88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00135a88: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x135ab0;                           // 0x00135a90: bnez $a0, 0x135ab0
    a0 = 0x22 << 16;                                            // 0x00135a98: lui $a0, 0x22
    func_00134ec0();  // 134ec0                                // 0x00135a9c: jal 0x134ec0
    a0 = &str_00224280;  // "cvFsReqRd #2:vtbl error"           // 0x00135aa0: addiu $a0, $a0, 0x4280
    goto label_0x135ae0;                                        // 0x00135aa4: b 0x135ae0
    /* nop */                                                   // 0x00135aac: nop 
label_0x135ab0:
    v0 = str_00224280;  // "cvFsReqRd #2:vtbl error"            // 0x00135ab0: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x20);                              // 0x00135ab4: lw $v0, 0x20($v0)
    /* beqzl $v0, 0x135ad0 */                                   // 0x00135ab8: beqzl $v0, 0x135ad0
    a0 = 0x22 << 16;                                            // 0x00135abc: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00135ac0: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00135ac4: lw $a0, 4($a0)
    goto label_0x135adc;                                        // 0x00135ac8: b 0x135adc
    func_00134ec0();  // 134ec0                                // 0x00135ad4: jal 0x134ec0
    a0 = &str_002242a0;  // "cvFsReqWr #1:handle error"         // 0x00135ad8: addiu $a0, $a0, 0x42a0
label_0x135adc:
label_0x135ae0:
    return;                                                     // 0x00135ae8: jr $ra
    sp = sp + 0x10;                                             // 0x00135aec: addiu $sp, $sp, 0x10
}