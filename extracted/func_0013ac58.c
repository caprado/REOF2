void func_0013ac58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1fff;                                                // 0x0013ac58: addiu $v0, $zero, 0x1fff
    v0 = v0 + -0x20;                                            // 0x0013ac5c: addiu $v0, $v0, -0x20
label_0x13ac60:
    /* nop */                                                   // 0x0013ac60: nop 
    /* nop */                                                   // 0x0013ac64: nop 
    /* nop */                                                   // 0x0013ac68: nop 
    /* nop */                                                   // 0x0013ac6c: nop 
    /* nop */                                                   // 0x0013ac70: nop 
    if (v0 >= 0) goto label_0x13ac60;                           // 0x0013ac74: bgezl $v0, 0x13ac60
    v0 = v0 + -0x20;                                            // 0x0013ac78: addiu $v0, $v0, -0x20
    return;                                                     // 0x0013ac7c: jr $ra
    /* nop */                                                   // 0x0013ac80: nop 
}