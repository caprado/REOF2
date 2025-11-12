void func_0012ad98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x0012ad98: addiu $sp, $sp, -0x10
    return WakeupThread();  // Tail call                        // 0x0012ada4: j 0x114200
    sp = sp + 0x10;                                             // 0x0012ada8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012adac: nop 
    sp = sp + -0x50;                                            // 0x0012adb0: addiu $sp, $sp, -0x50
    if (s0 == 0) goto label_0x12adfc;                           // 0x0012adc4: beqz $s0, 0x12adfc
    iReferThreadStatus();  // 0x1141e0                          // 0x0012adcc: jal 0x1141e0
    v1 = local_0;                                               // 0x0012add8: lw $v1, 0($sp)
    v0 = 8;                                                     // 0x0012addc: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x12adf0;                          // 0x0012ade0: beq $v1, $v0, 0x12adf0
    a1 = 0xc;                                                   // 0x0012ade4: addiu $a1, $zero, 0xc
    if (v1 != a1) goto label_0x12ae00;                          // 0x0012ade8: bne $v1, $a1, 0x12ae00
label_0x12adf0:
    EndOfHeap();  // 0x114270                                   // 0x0012adf0: jal 0x114270
    /* nop */                                                   // 0x0012adf4: nop 
label_0x12adfc:
label_0x12ae00:
    return;                                                     // 0x0012ae0c: jr $ra
    sp = sp + 0x50;                                             // 0x0012ae10: addiu $sp, $sp, 0x50
}