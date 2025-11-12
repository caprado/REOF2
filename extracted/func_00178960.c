void func_00178960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178960: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00178964: lui $a1, 0xff00
    a1 = a1 | 0x601;                                            // 0x0017896c: ori $a1, $a1, 0x601
    return func_00169940();  // Tail call                        // 0x00178974: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00178978: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017897c: nop 
    sp = sp + -0x10;                                            // 0x00178980: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00178984: lui $a1, 0xff00
    a1 = a1 | 0x601;                                            // 0x0017898c: ori $a1, $a1, 0x601
    return func_00169940();  // Tail call                        // 0x00178994: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00178998: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017899c: nop 
    sp = sp + -0x10;                                            // 0x001789a0: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x001789a4: lui $a1, 0xff00
    a1 = a1 | 0x601;                                            // 0x001789ac: ori $a1, $a1, 0x601
    return func_00169940();  // Tail call                        // 0x001789b4: j 0x1698d0
    sp = sp + 0x10;                                             // 0x001789b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001789bc: nop 
    sp = sp + -0x10;                                            // 0x001789c0: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x001789c4: lui $a1, 0xff00
    a1 = a1 | 0x601;                                            // 0x001789cc: ori $a1, $a1, 0x601
    return func_00169940();  // Tail call                        // 0x001789d4: j 0x1698d0
    sp = sp + 0x10;                                             // 0x001789d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001789dc: nop 
    return;                                                     // 0x001789e0: jr $ra
}