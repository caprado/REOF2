void func_00137ef8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00137ef8: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x00137efc: lui $v0, 0x20
    v1 = 1;                                                     // 0x00137f00: addiu $v1, $zero, 1
    if (a0 != v1) goto label_0x137f28;                          // 0x00137f08: bne $a0, $v1, 0x137f28
    g_002021f8 = a0;  // Global at 0x002021f8                   // 0x00137f0c: sw $a0, 0x21f8($v0)
    a0 = 0x22 << 16;                                            // 0x00137f10: lui $a0, 0x22
    a0 = &str_00224f48;  // "SRD: Enable HostLock\r\n"          // 0x00137f18: addiu $a0, $a0, 0x4f48
    return func_00116598();  // Tail call                        // 0x00137f1c: j 0x116508
    sp = sp + 0x10;                                             // 0x00137f20: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00137f24: nop 
label_0x137f28:
    return;                                                     // 0x00137f2c: jr $ra
    sp = sp + 0x10;                                             // 0x00137f30: addiu $sp, $sp, 0x10
}