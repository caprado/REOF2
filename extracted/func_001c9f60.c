void func_001c9f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9f60: addiu $sp, $sp, -0x10
    func_001c7ee0();  // 1c7ee0                                // 0x001c9f68: jal 0x1c7ee0
    /* nop */                                                   // 0x001c9f6c: nop 
    if (v0 >= 0) goto label_0x1c9f88;                           // 0x001c9f78: bgez $v0, 0x1c9f88
    /* nop */                                                   // 0x001c9f7c: nop 
    goto label_0x1c9f98;                                        // 0x001c9f80: b 0x1c9f98
    v0 = -1;                                                    // 0x001c9f84: addiu $v0, $zero, -1
label_0x1c9f88:
    v1 = 1;                                                     // 0x001c9f88: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001c9f8c: lui $at, 0x31
    g_00316aad = v1;  // Global at 0x00316aad                   // 0x001c9f90: sb $v1, 0x6aad($at)
    /* nop */                                                   // 0x001c9f94: nop 
label_0x1c9f98:
    return;                                                     // 0x001c9f9c: jr $ra
    sp = sp + 0x10;                                             // 0x001c9fa0: addiu $sp, $sp, 0x10
}