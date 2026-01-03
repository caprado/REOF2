void func_00171d38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171d38: addiu $sp, $sp, -0x10
    func_00169af0();  // 169af0                                // 0x00171d44: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00171d4c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x171d70;                           // 0x00171d54: beqz $v0, 0x171d70
    a1 = a1 | 0x141;                                            // 0x00171d58: ori $a1, $a1, 0x141
    func_001698d0();  // 1698d0                                // 0x00171d5c: jal 0x1698d0
    /* nop */                                                   // 0x00171d60: nop 
    goto label_0x171d74;                                        // 0x00171d64: b 0x171d74
    /* nop */                                                   // 0x00171d6c: nop 
label_0x171d70:
    v0 = *(int32_t*)((s0) + 0x50);                              // 0x00171d70: lw $v0, 0x50($s0)
label_0x171d74:
    return;                                                     // 0x00171d7c: jr $ra
    sp = sp + 0x10;                                             // 0x00171d80: addiu $sp, $sp, 0x10
}