void func_0017d2b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017d2b0: addiu $sp, $sp, -0x10
    func_00148f00();  // 0x148ed8                                // 0x0017d2c0: jal 0x148ed8
    return func_0017cfb8();  // Tail call                        // 0x0017d2d8: j 0x17cfa8
    sp = sp + 0x10;                                             // 0x0017d2dc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017d2e0: addiu $sp, $sp, -0x10
    return func_00148f48();  // Tail call                        // 0x0017d2ec: j 0x148f00
    sp = sp + 0x10;                                             // 0x0017d2f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017d2f4: nop 
    sp = sp + -0x10;                                            // 0x0017d2f8: addiu $sp, $sp, -0x10
    return func_0017e078();  // Tail call                       // 0x0017d304: j 0x17e078
    sp = sp + 0x10;                                             // 0x0017d308: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017d30c: nop 
    sp = sp + -0x10;                                            // 0x0017d310: addiu $sp, $sp, -0x10
    return func_0017e0d8();  // Tail call                       // 0x0017d31c: j 0x17e0d8
    sp = sp + 0x10;                                             // 0x0017d320: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017d324: nop 
    a0 = a0 + 0x5c;                                             // 0x0017d328: addiu $a0, $a0, 0x5c
    *(uint32_t*)((a0) + 4) = a2;                                // 0x0017d32c: sw $a2, 4($a0)
    return;                                                     // 0x0017d330: jr $ra
    *(uint32_t*)(a0) = a1;                                      // 0x0017d334: sw $a1, 0($a0)
}