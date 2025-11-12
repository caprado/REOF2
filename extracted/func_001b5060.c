void func_001b5060() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 != 0) goto label_0x1b5078;                           // 0x001b5060: bnez $a0, 0x1b5078
    v1 = 0x2b << 16;                                            // 0x001b5064: lui $v1, 0x2b
    v1 = 0x2b << 16;                                            // 0x001b5068: lui $v1, 0x2b
    v1 = v1 + -0x3ac0;                                          // 0x001b506c: addiu $v1, $v1, -0x3ac0
    goto label_0x1b5080;                                        // 0x001b5070: b 0x1b5080
    *(uint32_t*)((gp) + -0x7cd8) = v1;                          // 0x001b5074: sw $v1, -0x7cd8($gp)
label_0x1b5078:
    v1 = v1 + -0x3b70;                                          // 0x001b5078: addiu $v1, $v1, -0x3b70
    *(uint32_t*)((gp) + -0x7cd8) = v1;                          // 0x001b507c: sw $v1, -0x7cd8($gp)
label_0x1b5080:
    return;                                                     // 0x001b5080: jr $ra
    /* nop */                                                   // 0x001b5084: nop 
}