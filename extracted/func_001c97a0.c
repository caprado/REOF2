void func_001c97a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_1c;
    
    sp = sp + -0x20;                                            // 0x001c97a0: addiu $sp, $sp, -0x20
    func_001c82c0();  // 0x1c8240                                // 0x001c97a8: jal 0x1c8240
    a0 = sp + 0x1c;                                             // 0x001c97ac: addiu $a0, $sp, 0x1c
    v0 = 1;                                                     // 0x001c97b8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1c97cc;                          // 0x001c97bc: bne $v1, $v0, 0x1c97cc
    /* nop */                                                   // 0x001c97c0: nop 
    goto label_0x1c97d0;                                        // 0x001c97c4: b 0x1c97d0
    v0 = local_1c;                                              // 0x001c97c8: lw $v0, 0x1c($sp)
label_0x1c97cc:
    v0 = -1;                                                    // 0x001c97cc: addiu $v0, $zero, -1
label_0x1c97d0:
    return;                                                     // 0x001c97d4: jr $ra
    sp = sp + 0x20;                                             // 0x001c97d8: addiu $sp, $sp, 0x20
}