void func_0015af18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x0015af18: lui $v0, 0x21
    v1 = 0x17f;                                                 // 0x0015af1c: addiu $v1, $zero, 0x17f
    a0 = v0 + 0x3ee8;                                           // 0x0015af20: addiu $a0, $v0, 0x3ee8
    /* nop */                                                   // 0x0015af24: nop 
label_0x15af28:
    v1 = v1 + -1;                                               // 0x0015af28: addiu $v1, $v1, -1
    g_00213ee8 = 0;  // Global at 0x00213ee8                    // 0x0015af2c: sb $zero, 0($a0)
    /* nop */                                                   // 0x0015af30: nop 
    /* nop */                                                   // 0x0015af34: nop 
    /* nop */                                                   // 0x0015af38: nop 
    if (v1 >= 0) goto label_0x15af28;                           // 0x0015af3c: bgez $v1, 0x15af28
    a0 = a0 + 1;                                                // 0x0015af40: addiu $a0, $a0, 1
label_0x15af48:
    g_00213ee9 = v1;  // Global at 0x00213ee9                   // 0x0015af48: sb $v1, 0($a0)
    v1 = v1 + 1;                                                // 0x0015af4c: addiu $v1, $v1, 1
    v0 = (v1 < 0x100) ? 1 : 0;                                  // 0x0015af50: slti $v0, $v1, 0x100
    /* nop */                                                   // 0x0015af54: nop 
    /* nop */                                                   // 0x0015af58: nop 
    if (v0 != 0) goto label_0x15af48;                           // 0x0015af5c: bnez $v0, 0x15af48
    a0 = a0 + 1;                                                // 0x0015af60: addiu $a0, $a0, 1
    v0 = -1;                                                    // 0x0015af64: addiu $v0, $zero, -1
    v1 = 0x17f;                                                 // 0x0015af68: addiu $v1, $zero, 0x17f
    /* nop */                                                   // 0x0015af6c: nop 
label_0x15af70:
    v1 = v1 + -1;                                               // 0x0015af70: addiu $v1, $v1, -1
    g_00213eea = v0;  // Global at 0x00213eea                   // 0x0015af74: sb $v0, 0($a0)
    /* nop */                                                   // 0x0015af78: nop 
    /* nop */                                                   // 0x0015af7c: nop 
    /* nop */                                                   // 0x0015af80: nop 
    if (v1 >= 0) goto label_0x15af70;                           // 0x0015af84: bgez $v1, 0x15af70
    a0 = a0 + 1;                                                // 0x0015af88: addiu $a0, $a0, 1
    v0 = 0x21 << 16;                                            // 0x0015af8c: lui $v0, 0x21
    v1 = 0x21 << 16;                                            // 0x0015af90: lui $v1, 0x21
    v0 = v0 + 0x4068;                                           // 0x0015af94: addiu $v0, $v0, 0x4068
    return;                                                     // 0x0015af98: jr $ra
    g_00213edc = v0;  // Global at 0x00213edc                   // 0x0015af9c: sw $v0, 0x3edc($v1)
}