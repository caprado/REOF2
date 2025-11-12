void func_001c6cb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = 0x1474;                                                // 0x001c6cb4: addiu $a2, $zero, 0x1474
    a0 = 0x31 << 16;                                            // 0x001c6cb8: lui $a0, 0x31
    return func_00107b68();  // Tail call                        // 0x001c6cbc: j 0x107ab8
    a0 = a0 + 0x1d30;                                           // 0x001c6cc0: addiu $a0, $a0, 0x1d30
    /* nop */                                                   // 0x001c6cc4: nop 
    /* nop */                                                   // 0x001c6cc8: nop 
    /* nop */                                                   // 0x001c6ccc: nop 
    sp = sp + -0x20;                                            // 0x001c6cd0: addiu $sp, $sp, -0x20
    a2 = 0x7800;                                                // 0x001c6cd4: addiu $a2, $zero, 0x7800
    a0 = 0x31 << 16;                                            // 0x001c6ce4: lui $a0, 0x31
    a1 = s0 + 0x10;                                             // 0x001c6ce8: addiu $a1, $s0, 0x10
    func_00107b68();  // 0x107ab8                                // 0x001c6cec: jal 0x107ab8
    a0 = a0 + -0x5ad0;                                          // 0x001c6cf0: addiu $a0, $a0, -0x5ad0
    at = 0 | 0x8390;                                            // 0x001c6cf4: ori $at, $zero, 0x8390
    a0 = 0x31 << 16;                                            // 0x001c6cf8: lui $a0, 0x31
    a1 = s0 + at;                                               // 0x001c6cfc: addu $a1, $s0, $at
    a0 = a0 + 0x64d0;                                           // 0x001c6d00: addiu $a0, $a0, 0x64d0
    func_00107b68();  // 0x107ab8                                // 0x001c6d04: jal 0x107ab8
    a2 = 0x140;                                                 // 0x001c6d08: addiu $a2, $zero, 0x140
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6d10: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6d14: jr $ra
    sp = sp + 0x20;                                             // 0x001c6d18: addiu $sp, $sp, 0x20
}