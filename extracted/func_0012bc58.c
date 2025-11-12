void func_0012bc58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0012bc58: addiu $sp, $sp, -0x50
    v0 = 0x1f << 16;                                            // 0x0012bc5c: lui $v0, 0x1f
    s1 = v0 + 0x6a9c;                                           // 0x0012bc64: addiu $s1, $v0, 0x6a9c
    v1 = g_001f6a9c;  // Global at 0x001f6a9c                   // 0x0012bc68: lw $v1, 0($s1)
    a0 = 1;                                                     // 0x0012bc6c: addiu $a0, $zero, 1
    if (v1 != a0) goto label_0x12bcc0;                          // 0x0012bc74: bne $v1, $a0, 0x12bcc0
    v0 = 0x1f << 16;                                            // 0x0012bc7c: lui $v0, 0x1f
    s0 = v0 + 0x6ae8;                                           // 0x0012bc84: addiu $s0, $v0, 0x6ae8
    iReferThreadStatus();  // 0x1141e0                          // 0x0012bc88: jal 0x1141e0
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012bc8c: lw $a0, 0($s0)
    v1 = local_0;                                               // 0x0012bc90: lw $v1, 0($sp)
    v0 = 4;                                                     // 0x0012bc94: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x12bca8;                          // 0x0012bc98: beq $v1, $v0, 0x12bca8
    a0 = 0xc;                                                   // 0x0012bc9c: addiu $a0, $zero, 0xc
    if (v1 != a0) goto label_0x12bcc4;                          // 0x0012bca0: bnel $v1, $a0, 0x12bcc4
label_0x12bca8:
    a0 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012bca8: lw $a0, 0($s0)
    _iWakeupThread();  // 0x114210                              // 0x0012bcac: jal 0x114210
    /* nop */                                                   // 0x0012bcb0: nop 
    v1 = g_001f6ae8;  // Global at 0x001f6ae8                   // 0x0012bcb4: lw $v1, 0($s0)
    if (v0 == v1) goto label_0x12bcc0;                          // 0x0012bcb8: beql $v0, $v1, 0x12bcc0
    g_001f6a9c = 0;  // Global at 0x001f6a9c                    // 0x0012bcbc: sw $zero, 0($s1)
label_0x12bcc0:
label_0x12bcc4:
    return;                                                     // 0x0012bccc: jr $ra
    sp = sp + 0x50;                                             // 0x0012bcd0: addiu $sp, $sp, 0x50
}