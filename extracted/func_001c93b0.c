void func_001c93b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c93b0: addiu $sp, $sp, -0x10
    func_001c87f0();  // 1c87f0                                // 0x001c93b8: jal 0x1c87f0
    /* nop */                                                   // 0x001c93bc: nop 
    v1 = -1;                                                    // 0x001c93c4: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c93e8;                          // 0x001c93cc: beq $v0, $v1, 0x1c93e8
    v1 = -0x21;                                                 // 0x001c93d0: addiu $v1, $zero, -0x21
    if (v0 == v1) goto label_0x1c93e8;                          // 0x001c93d4: beq $v0, $v1, 0x1c93e8
    /* nop */                                                   // 0x001c93d8: nop 
    goto label_0x1c93f0;                                        // 0x001c93dc: b 0x1c93f0
    /* nop */                                                   // 0x001c93e0: nop 
    /* nop */                                                   // 0x001c93e4: nop 
label_0x1c93e8:
    v0 = -1;                                                    // 0x001c93e8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001c93ec: nop 
label_0x1c93f0:
    v1 = 1;                                                     // 0x001c93f0: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001c93f4: lui $at, 0x31
    g_00316aac = v1;  // Global at 0x00316aac                   // 0x001c93f8: sb $v1, 0x6aac($at)
    return;                                                     // 0x001c9400: jr $ra
    sp = sp + 0x10;                                             // 0x001c9404: addiu $sp, $sp, 0x10
}