void func_0012ae18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0012ae18: addiu $sp, $sp, -0x50
    if (s0 == 0) goto label_0x12ae60;                           // 0x0012ae2c: beqz $s0, 0x12ae60
    iReferThreadStatus();  // 0x1141e0                          // 0x0012ae34: jal 0x1141e0
    v1 = local_0;                                               // 0x0012ae3c: lw $v1, 0($sp)
    v0 = 8;                                                     // 0x0012ae40: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x12ae60;                          // 0x0012ae44: beq $v1, $v0, 0x12ae60
    a0 = 0xc;                                                   // 0x0012ae48: addiu $a0, $zero, 0xc
    if (v1 == a0) goto label_0x12ae64;                          // 0x0012ae4c: beql $v1, $a0, 0x12ae64
    _iSuspendThread();  // 0x114250                             // 0x0012ae54: jal 0x114250
label_0x12ae60:
label_0x12ae64:
    return;                                                     // 0x0012ae70: jr $ra
    sp = sp + 0x50;                                             // 0x0012ae74: addiu $sp, $sp, 0x50
}