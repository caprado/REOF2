void func_00169c20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00169c20: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1ab4);                            // 0x00169c2c: lw $a1, 0x1ab4($a0)
    return func_00166ca8();  // Tail call                        // 0x00169c34: j 0x166c90
    sp = sp + 0x10;                                             // 0x00169c38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169c3c: nop 
    sp = sp + -0x10;                                            // 0x00169c40: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1ab4);                            // 0x00169c54: lw $a1, 0x1ab4($a0)
    return func_00166da0();  // Tail call                        // 0x00169c5c: j 0x166d88
    sp = sp + 0x10;                                             // 0x00169c60: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169c64: nop 
    sp = sp + -0x10;                                            // 0x00169c68: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00169c6c: lui $a1, 0xff00
    a1 = a1 | 0x501;                                            // 0x00169c74: ori $a1, $a1, 0x501
    return func_00169940();  // Tail call                        // 0x00169c7c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00169c80: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169c84: nop 
    sp = sp + -0x10;                                            // 0x00169c88: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00169c8c: lui $a1, 0xff00
    a1 = a1 | 0x501;                                            // 0x00169c94: ori $a1, $a1, 0x501
    return func_00169940();  // Tail call                        // 0x00169c9c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00169ca0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169ca4: nop 
    return;                                                     // 0x00169ca8: jr $ra
}