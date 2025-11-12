void func_001c6960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c6960: addiu $sp, $sp, -0x20
    a2 = 0x7800;                                                // 0x001c696c: addiu $a2, $zero, 0x7800
    func_00107d30();  // 0x107c70                                // 0x001c6978: jal 0x107c70
    a0 = s0 + 0x10;                                             // 0x001c697c: addiu $a0, $s0, 0x10
    a1 = 0x31 << 16;                                            // 0x001c6980: lui $a1, 0x31
    a0 = s0 + 0x10;                                             // 0x001c6984: addiu $a0, $s0, 0x10
    a1 = a1 + -0x5ad0;                                          // 0x001c6988: addiu $a1, $a1, -0x5ad0
    func_00107b68();  // 0x107ab8                                // 0x001c698c: jal 0x107ab8
    a2 = 0x7800;                                                // 0x001c6990: addiu $a2, $zero, 0x7800
    at = 0 | 0x8390;                                            // 0x001c6994: ori $at, $zero, 0x8390
    a0 = s0 + at;                                               // 0x001c699c: addu $a0, $s0, $at
    func_00107d30();  // 0x107c70                                // 0x001c69a0: jal 0x107c70
    a2 = 0x140;                                                 // 0x001c69a4: addiu $a2, $zero, 0x140
    at = 0 | 0x8390;                                            // 0x001c69a8: ori $at, $zero, 0x8390
    a1 = 0x31 << 16;                                            // 0x001c69ac: lui $a1, 0x31
    a0 = s0 + at;                                               // 0x001c69b0: addu $a0, $s0, $at
    a1 = a1 + 0x64d0;                                           // 0x001c69b4: addiu $a1, $a1, 0x64d0
    func_00107b68();  // 0x107ab8                                // 0x001c69b8: jal 0x107ab8
    a2 = 0x140;                                                 // 0x001c69bc: addiu $a2, $zero, 0x140
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c69c4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c69c8: jr $ra
    sp = sp + 0x20;                                             // 0x001c69cc: addiu $sp, $sp, 0x20
}