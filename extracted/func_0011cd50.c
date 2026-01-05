void func_0011cd50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011cd50: addiu $sp, $sp, -0x10
    InitTLB();  // 0x114740                                     // 0x0011cd58: jal 0x114740
    /* nop */                                                   // 0x0011cd5c: nop 
    v1 = 0x200 << 16;                                           // 0x0011cd60: lui $v1, 0x200
    if (v0 != v1) goto label_0x11cd7c;                          // 0x0011cd64: bne $v0, $v1, 0x11cd7c
    /* nop */                                                   // 0x0011cd68: nop 
    func_0011cd90();  // 11cd90                                // 0x0011cd6c: jal 0x11cd90
    /* nop */                                                   // 0x0011cd70: nop 
    goto label_0x11cd88;                                        // 0x0011cd74: b 0x11cd88
label_0x11cd7c:
    func_00114750();  // 114750                                // 0x0011cd7c: jal 0x114750
    /* nop */                                                   // 0x0011cd80: nop 
label_0x11cd88:
    return;                                                     // 0x0011cd88: jr $ra
    sp = sp + 0x10;                                             // 0x0011cd8c: addiu $sp, $sp, 0x10
}