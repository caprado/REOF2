void func_001c9470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9470: addiu $sp, $sp, -0x10
    func_001c88d0();  // 1c88d0                                // 0x001c9478: jal 0x1c88d0
    /* nop */                                                   // 0x001c947c: nop 
    v1 = -1;                                                    // 0x001c9484: addiu $v1, $zero, -1
    if (v0 == v1) goto label_0x1c94a8;                          // 0x001c948c: beq $v0, $v1, 0x1c94a8
    v1 = -0x21;                                                 // 0x001c9490: addiu $v1, $zero, -0x21
    if (v0 == v1) goto label_0x1c94a8;                          // 0x001c9494: beq $v0, $v1, 0x1c94a8
    /* nop */                                                   // 0x001c9498: nop 
    goto label_0x1c94b0;                                        // 0x001c949c: b 0x1c94b0
    /* nop */                                                   // 0x001c94a0: nop 
    /* nop */                                                   // 0x001c94a4: nop 
label_0x1c94a8:
    v0 = -1;                                                    // 0x001c94a8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001c94ac: nop 
label_0x1c94b0:
    return;                                                     // 0x001c94b4: jr $ra
    sp = sp + 0x10;                                             // 0x001c94b8: addiu $sp, $sp, 0x10
}