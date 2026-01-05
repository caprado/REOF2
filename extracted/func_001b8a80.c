void func_001b8a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b8a80: addiu $sp, $sp, -0x10
    a2 = *(uint8_t*)((a0) + 0x550);                             // 0x001b8a88: lbu $a2, 0x550($a0)
    if (a2 != 0) goto label_0x1b8aa0;                           // 0x001b8a8c: bnez $a2, 0x1b8aa0
    /* nop */                                                   // 0x001b8a90: nop 
    v1 = *(uint8_t*)((a0) + 0x33);                              // 0x001b8a94: lbu $v1, 0x33($a0)
    if (v1 == 0) goto label_0x1b8abc;                           // 0x001b8a98: beqz $v1, 0x1b8abc
    /* nop */                                                   // 0x001b8a9c: nop 
label_0x1b8aa0:
    t2 = *(uint8_t*)((a0) + 0x33);                              // 0x001b8aa0: lbu $t2, 0x33($a0)
    a3 = a0 + 0x38;                                             // 0x001b8aa4: addiu $a3, $a0, 0x38
    a2 = a2 & 0xff;                                             // 0x001b8aa8: andi $a2, $a2, 0xff
    t0 = 1;                                                     // 0x001b8aac: addiu $t0, $zero, 1
    func_001b8b40();  // 1b8b40                                // 0x001b8ab4: jal 0x1b8b40
    a0 = 0xc;                                                   // 0x001b8ab8: addiu $a0, $zero, 0xc
label_0x1b8abc:
    return;                                                     // 0x001b8ac0: jr $ra
    sp = sp + 0x10;                                             // 0x001b8ac4: addiu $sp, $sp, 0x10
}