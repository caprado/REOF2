void func_0018cba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018cba0: addiu $sp, $sp, -0x20
    a1 = 3;                                                     // 0x0018cbac: addiu $a1, $zero, 3
    func_0018c690();  // 0x18c660                                // 0x0018cbb8: jal 0x18c660
    a0 = s0 + 0x10;                                             // 0x0018cbc0: addiu $a0, $s0, 0x10
    func_0018c710();  // 0x18c6f0                                // 0x0018cbc4: jal 0x18c6f0
    a1 = 2;                                                     // 0x0018cbc8: addiu $a1, $zero, 2
    a0 = 0x1000 << 16;                                          // 0x0018cbcc: lui $a0, 0x1000
    v1 = 0 | 0x8001;                                            // 0x0018cbd0: ori $v1, $zero, 0x8001
    a1 = v1 | a1;                                               // 0x0018cbd8: or $a1, $v1, $a1
    a0 = 0xe;                                                   // 0x0018cbdc: addiu $a0, $zero, 0xe
    v1 = 0x3f;                                                  // 0x0018cbe4: addiu $v1, $zero, 0x3f
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018cbf8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018cbfc: jr $ra
    sp = sp + 0x20;                                             // 0x0018cc00: addiu $sp, $sp, 0x20
}