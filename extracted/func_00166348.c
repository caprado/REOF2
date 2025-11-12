void func_00166348() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00166348: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016634c: lui $a1, 0xff00
    a1 = a1 | 0xa01;                                            // 0x00166354: ori $a1, $a1, 0xa01
    return func_00169940();  // Tail call                        // 0x0016635c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00166360: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00166364: nop 
    sp = sp + -0x10;                                            // 0x00166368: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016636c: lui $a1, 0xff00
    a1 = a1 | 0xa01;                                            // 0x00166374: ori $a1, $a1, 0xa01
    return func_00169940();  // Tail call                        // 0x0016637c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00166380: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00166384: nop 
    sp = sp + -0x10;                                            // 0x00166388: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016638c: lui $a1, 0xff00
    a1 = a1 | 0xa01;                                            // 0x00166394: ori $a1, $a1, 0xa01
    return func_00169940();  // Tail call                        // 0x0016639c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x001663a0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001663a4: nop 
    sp = sp + -0x10;                                            // 0x001663a8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x001663ac: lui $a1, 0xff00
    a1 = a1 | 0xa01;                                            // 0x001663b4: ori $a1, $a1, 0xa01
    return func_00169940();  // Tail call                        // 0x001663bc: j 0x1698d0
    sp = sp + 0x10;                                             // 0x001663c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001663c4: nop 
    return;                                                     // 0x001663c8: jr $ra
}