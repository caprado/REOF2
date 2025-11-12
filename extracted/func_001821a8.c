void func_001821a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a1 << 0x18;                                            // 0x001821a8: sll $a1, $a1, 0x18
    v1 = *(int8_t*)(a0);                                        // 0x001821ac: lb $v1, 0($a0)
    v0 = *(uint8_t*)(a0);                                       // 0x001821b0: lbu $v0, 0($a0)
    a1 = a1 >> 0x18;                                            // 0x001821b4: sra $a1, $a1, 0x18
    if (v1 == 0) goto label_0x1821e4;                           // 0x001821b8: beqz $v1, 0x1821e4
    if (v1 == a1) goto label_0x1821f4;                          // 0x001821c0: beq $v1, $a1, 0x1821f4
    /* nop */                                                   // 0x001821c4: nop 
    a2 = a2 + 1;                                                // 0x001821c8: addiu $a2, $a2, 1
    /* nop */                                                   // 0x001821cc: nop 
label_0x1821d0:
    v1 = *(int8_t*)(a2);                                        // 0x001821d0: lb $v1, 0($a2)
    if (v1 == 0) goto label_0x1821e4;                           // 0x001821d4: beqz $v1, 0x1821e4
    v0 = *(uint8_t*)(a2);                                       // 0x001821d8: lbu $v0, 0($a2)
    if (v1 != a1) goto label_0x1821d0;                          // 0x001821dc: bnel $v1, $a1, 0x1821d0
    a2 = a2 + 1;                                                // 0x001821e0: addiu $a2, $a2, 1
label_0x1821e4:
    v0 = v0 << 0x18;                                            // 0x001821e4: sll $v0, $v0, 0x18
    v0 = v0 >> 0x18;                                            // 0x001821e8: sra $v0, $v0, 0x18
    if (v0 != a1) return;  // Branch to 0x1821fc                // 0x001821ec: bne $v0, $a1, 0x1821fc
    /* nop */                                                   // 0x001821f0: nop 
label_0x1821f4:
    return;                                                     // 0x001821f4: jr $ra
    v0 = a2 - a0;                                               // 0x001821f8: subu $v0, $a2, $a0
}