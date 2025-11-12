void func_001aff00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aff00: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x001aff04: lui $a0, 0x22
    a1 = 0x31 << 16;                                            // 0x001aff08: lui $a1, 0x31
    a0 = a0 + -0x4000;                                          // 0x001aff10: addiu $a0, $a0, -0x4000
    a1 = a1 + 0x30ec;                                           // 0x001aff14: addiu $a1, $a1, 0x30ec
    func_001afea0();  // 0x1afe50                                // 0x001aff18: jal 0x1afe50
    a2 = 0x1f;                                                  // 0x001aff1c: addiu $a2, $zero, 0x1f
    a1 = 0x31 << 16;                                            // 0x001aff20: lui $a1, 0x31
    a0 = gp + -0x63bc;                                          // 0x001aff24: addiu $a0, $gp, -0x63bc
    a1 = a1 + 0x3100;                                           // 0x001aff28: addiu $a1, $a1, 0x3100
    func_001afea0();  // 0x1afe50                                // 0x001aff2c: jal 0x1afe50
    a2 = 1;                                                     // 0x001aff30: addiu $a2, $zero, 1
    a0 = 0x22 << 16;                                            // 0x001aff34: lui $a0, 0x22
    a1 = 0x31 << 16;                                            // 0x001aff38: lui $a1, 0x31
    a0 = a0 + -0x3f50;                                          // 0x001aff3c: addiu $a0, $a0, -0x3f50
    a1 = a1 + 0x30d8;                                           // 0x001aff40: addiu $a1, $a1, 0x30d8
    func_001afea0();  // 0x1afe50                                // 0x001aff44: jal 0x1afe50
    a2 = 0x2d;                                                  // 0x001aff48: addiu $a2, $zero, 0x2d
    return;                                                     // 0x001aff50: jr $ra
    sp = sp + 0x10;                                             // 0x001aff54: addiu $sp, $sp, 0x10
}