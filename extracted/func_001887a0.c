void func_001887a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x24;                                                  // 0x001887a0: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x001887a4: lui $v1, 0x28
    a1 = v1 + -0x2fb8;                                          // 0x001887ac: addiu $a1, $v1, -0x2fb8
    v0 = a0 + a1;                                               // 0x001887b0: addu $v0, $a0, $a1
    v1 = *(int32_t*)(v0);                                       // 0x001887b4: lw $v1, 0($v0)
    if (v1 != 0) return;  // Branch to 0x1887c8                 // 0x001887b8: bnez $v1, 0x1887c8
    v1 = a1 + a0;                                               // 0x001887bc: addu $v1, $a1, $a0
    return;                                                     // 0x001887c0: jr $ra
    v0 = -1;                                                    // 0x001887c4: addiu $v0, $zero, -1
}