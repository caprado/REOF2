void func_00168be8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00168be8: addiu $sp, $sp, -0x10
    a1 = 0x26 << 16;                                            // 0x00168bec: lui $a1, 0x26
    a0 = 0x20;                                                  // 0x00168bf4: addiu $a0, $zero, 0x20
    a1 = a1 + 0x2f88;                                           // 0x00168bf8: addiu $a1, $a1, 0x2f88
    return func_00178cd8();  // Tail call                       // 0x00168c00: j 0x178cd8
    sp = sp + 0x10;                                             // 0x00168c04: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00168c08: addiu $sp, $sp, -0x10
    return func_00178db0();  // Tail call                        // 0x00168c14: j 0x178d68
    sp = sp + 0x10;                                             // 0x00168c18: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00168c1c: nop 
    *(uint32_t*)((a0) + 0x90) = 0;                              // 0x00168c20: sw $zero, 0x90($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x00168c24: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x00168c28: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x00168c2c: sw $zero, 8($a0)
    return;                                                     // 0x00168c30: jr $ra
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x00168c34: sw $zero, 0xc($a0)
}