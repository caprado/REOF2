void func_001626b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001626b8: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x4c);                              // 0x001626c0: lw $a0, 0x4c($a0)
    return func_0013cd90();  // Tail call                        // 0x001626c8: j 0x13cd60
    sp = sp + 0x10;                                             // 0x001626cc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001626d0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x4c);                              // 0x001626d8: lw $a0, 0x4c($a0)
    return func_0013ce50();  // Tail call                        // 0x001626e0: j 0x13cdc0
    sp = sp + 0x10;                                             // 0x001626e4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001626e8: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x4c);                              // 0x001626f0: lw $a0, 0x4c($a0)
    return func_0013cee8();  // Tail call                        // 0x001626f8: j 0x13ce50
    sp = sp + 0x10;                                             // 0x001626fc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00162700: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x4c);                              // 0x00162708: lw $a0, 0x4c($a0)
    return func_0013cf80();  // Tail call                        // 0x00162710: j 0x13cee8
    sp = sp + 0x10;                                             // 0x00162714: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00162718: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x4c);                              // 0x00162720: lw $a0, 0x4c($a0)
    return func_0013d018();  // Tail call                        // 0x00162728: j 0x13cf80
    sp = sp + 0x10;                                             // 0x0016272c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00162730: addiu $sp, $sp, -0x10
    func_0013cd90();  // 0x13cd60                                // 0x00162738: jal 0x13cd60
    /* nop */                                                   // 0x0016273c: nop 
    v0 = v0 ^ 3;                                                // 0x00162740: xori $v0, $v0, 3
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00162748: sltiu $v0, $v0, 1
    return;                                                     // 0x0016274c: jr $ra
    sp = sp + 0x10;                                             // 0x00162750: addiu $sp, $sp, 0x10
}