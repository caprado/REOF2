void func_0012ad48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x0012ad48: addiu $sp, $sp, -0x40
    if (s0 == 0) goto label_0x12ad88;                           // 0x0012ad54: beqz $s0, 0x12ad88
    iReferThreadStatus();  // 0x1141e0                          // 0x0012ad5c: jal 0x1141e0
    v1 = local_0;                                               // 0x0012ad68: lw $v1, 0($sp)
    v0 = 4;                                                     // 0x0012ad6c: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x12ad80;                          // 0x0012ad70: beq $v1, $v0, 0x12ad80
    a1 = 0xc;                                                   // 0x0012ad74: addiu $a1, $zero, 0xc
    if (v1 != a1) goto label_0x12ad8c;                          // 0x0012ad78: bne $v1, $a1, 0x12ad8c
label_0x12ad80:
    _iWakeupThread();  // 0x114210                              // 0x0012ad80: jal 0x114210
    /* nop */                                                   // 0x0012ad84: nop 
label_0x12ad88:
label_0x12ad8c:
    return;                                                     // 0x0012ad90: jr $ra
    sp = sp + 0x40;                                             // 0x0012ad94: addiu $sp, $sp, 0x40
}