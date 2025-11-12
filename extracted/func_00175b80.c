void func_00175b80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 4;                                                     // 0x00175b84: addiu $a0, $zero, 4
    v1 = *(int32_t*)((a1) + 0x48);                              // 0x00175b88: lw $v1, 0x48($a1)
    if (v1 != a0) goto label_0x175bac;                          // 0x00175b90: bne $v1, $a0, 0x175bac
    a2 = a1 + 0x94c;                                            // 0x00175b94: addiu $a2, $a1, 0x94c
    v1 = *(int32_t*)((a1) + 0x50);                              // 0x00175b98: lw $v1, 0x50($a1)
    if (v1 != 0) goto label_0x175bac;                           // 0x00175b9c: bnez $v1, 0x175bac
    /* nop */                                                   // 0x00175ba0: nop 
    v0 = *(int32_t*)((a2) + 0x18);                              // 0x00175ba4: lw $v0, 0x18($a2)
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00175ba8: sltiu $v0, $v0, 1
label_0x175bac:
    return;                                                     // 0x00175bac: jr $ra
    /* nop */                                                   // 0x00175bb0: nop 
}