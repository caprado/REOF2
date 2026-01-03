void func_0012bba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012bba0: addiu $sp, $sp, -0x10
    return func_0012bba0();  // Tail call                        // 0x0012bbac: j 0x12ba78
    sp = sp + 0x10;                                             // 0x0012bbb0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012bbb4: nop 
    sp = sp + -0x10;                                            // 0x0012bbb8: addiu $sp, $sp, -0x10
    return func_00141cc8();  // Tail call                       // 0x0012bbc4: j 0x141cc8
    sp = sp + 0x10;                                             // 0x0012bbc8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012bbcc: nop 
    sp = sp + -0x10;                                            // 0x0012bbd0: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012bbd4: lui $v0, 0x1f
    s0 = v0 + 0x6aec;                                           // 0x0012bbdc: addiu $s0, $v0, 0x6aec
    func_0012adb0();  // 12adb0                                // 0x0012bbe4: jal 0x12adb0
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012bbe8: lw $a0, 0($s0)
    v1 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012bbec: lw $v1, 0($s0)
    if (v0 != v1) goto label_0x12bc00;                          // 0x0012bbf0: bne $v0, $v1, 0x12bc00
    /* nop */                                                   // 0x0012bbf4: nop 
    func_0012ad48();  // 12ad48                                // 0x0012bbf8: jal 0x12ad48
    a0 = g_001f6aec;  // Global at 0x001f6aec                   // 0x0012bbfc: lw $a0, 0($s0)
label_0x12bc00:
    func_0012b1f0();  // 12b1f0                                // 0x0012bc00: jal 0x12b1f0
    /* nop */                                                   // 0x0012bc04: nop 
    v1 = 0x1f << 16;                                            // 0x0012bc08: lui $v1, 0x1f
    a0 = 1;                                                     // 0x0012bc0c: addiu $a0, $zero, 1
    if (v0 != a0) goto label_0x12bc48;                          // 0x0012bc10: bne $v0, $a0, 0x12bc48
    s0 = v1 + 0x6af0;                                           // 0x0012bc14: addiu $s0, $v1, 0x6af0
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012bc18: lw $a0, 0($s0)
    func_0012adb0();  // 12adb0                                // 0x0012bc1c: jal 0x12adb0
    /* nop */                                                   // 0x0012bc20: nop 
    v1 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012bc24: lw $v1, 0($s0)
    if (v0 != v1) goto label_0x12bc4c;                          // 0x0012bc28: bnel $v0, $v1, 0x12bc4c
    a0 = g_001f6af0;  // Global at 0x001f6af0                   // 0x0012bc30: lw $a0, 0($s0)
    return func_0012ad98();  // Tail call                        // 0x0012bc3c: j 0x12ad48
    sp = sp + 0x10;                                             // 0x0012bc40: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012bc44: nop 
label_0x12bc48:
label_0x12bc4c:
    return;                                                     // 0x0012bc50: jr $ra
    sp = sp + 0x10;                                             // 0x0012bc54: addiu $sp, $sp, 0x10
}