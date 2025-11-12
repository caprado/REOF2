void func_00168e68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 | a0;                                               // 0x00168e68: or $v0, $a1, $a0
    v0 = v0 & 7;                                                // 0x00168e6c: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x168ed8;                           // 0x00168e70: beqz $v0, 0x168ed8
    v0 = a1 + 0x880;                                            // 0x00168e74: addiu $v0, $a1, 0x880
label_0x168e78:
    a1 = a1 + 0x20;                                             // 0x00168eb8: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x00168ebc: nop 
    /* nop */                                                   // 0x00168ec0: nop 
    if (a1 != v0) goto label_0x168e78;                          // 0x00168ec4: bne $a1, $v0, 0x168e78
    a0 = a0 + 0x20;                                             // 0x00168ec8: addiu $a0, $a0, 0x20
    goto label_0x168f0c;                                        // 0x00168ecc: b 0x168f0c
    /* nop */                                                   // 0x00168ed0: nop 
    /* nop */                                                   // 0x00168ed4: nop 
label_0x168ed8:
    a1 = a1 + 0x20;                                             // 0x00168ef8: addiu $a1, $a1, 0x20
    /* nop */                                                   // 0x00168efc: nop 
    /* nop */                                                   // 0x00168f00: nop 
    if (a1 != v0) goto label_0x168ed8;                          // 0x00168f04: bne $a1, $v0, 0x168ed8
    a0 = a0 + 0x20;                                             // 0x00168f08: addiu $a0, $a0, 0x20
label_0x168f0c:
    a2 = *(int32_t*)((a1) + 0x10);                              // 0x00168f1c: lw $a2, 0x10($a1)
    return;                                                     // 0x00168f30: jr $ra
    *(uint32_t*)((a0) + 0x10) = a2;                             // 0x00168f34: sw $a2, 0x10($a0)
}