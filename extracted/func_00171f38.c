void func_00171f38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171f38: addiu $sp, $sp, -0x10
    func_00169af0();  // 169af0                                // 0x00171f44: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00171f4c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x171f70;                           // 0x00171f54: beqz $v0, 0x171f70
    a1 = a1 | 0x143;                                            // 0x00171f58: ori $a1, $a1, 0x143
    return func_00169940();  // Tail call                        // 0x00171f68: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00171f6c: addiu $sp, $sp, 0x10
label_0x171f70:
    goto label_0x171f80;                                        // 0x00171f78: j 0x171f80
    sp = sp + 0x10;                                             // 0x00171f7c: addiu $sp, $sp, 0x10
label_0x171f80:
    v1 = 3;                                                     // 0x00171f80: addiu $v1, $zero, 3
    return;                                                     // 0x00171f88: jr $ra
    *(uint32_t*)((a0) + 0x4c) = v1;                             // 0x00171f8c: sw $v1, 0x4c($a0)
}