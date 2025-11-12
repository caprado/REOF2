void func_00188dc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00188dc8: addiu $sp, $sp, -0x40
    s2 = 0x28 << 16;                                            // 0x00188dd4: lui $s2, 0x28
    a0 = s2 + 0x4740;                                           // 0x00188de0: addiu $a0, $s2, 0x4740
    func_00114c70();  // 0x114bd8                                // 0x00188de8: jal 0x114bd8
    a1 = a0 + 0x80;                                             // 0x00188dec: addiu $a1, $a0, 0x80
    func_0011d378();  // 0x11d320                                // 0x00188df0: jal 0x11d320
    s0 = s0 << 2;                                               // 0x00188df4: sll $s0, $s0, 2
    v1 = 0x28 << 16;                                            // 0x00188df8: lui $v1, 0x28
    a2 = s2 + 0x4740;                                           // 0x00188dfc: addiu $a2, $s2, 0x4740
    a1 = v1 + 0x47c0;                                           // 0x00188e00: addiu $a1, $v1, 0x47c0
    func_0011d390();  // 0x11d378                                // 0x00188e84: jal 0x11d378
    s1 = v1 + 0x47c0;                                           // 0x00188e88: addiu $s1, $v1, 0x47c0
    a0 = 1;                                                     // 0x00188e8c: addiu $a0, $zero, 1
    s0 = s0 + s1;                                               // 0x00188e90: addu $s0, $s0, $s1
    v0 = 3;                                                     // 0x00188e94: addiu $v0, $zero, 3
    v1 = *(int32_t*)(s0);                                       // 0x00188e98: lw $v1, 0($s0)
    v1 = v1 ^ 1;                                                // 0x00188ea0: xori $v1, $v1, 1
    if (v1 == 0) v0 = a0;                                       // 0x00188eac: movz $v0, $a0, $v1
    return;                                                     // 0x00188eb4: jr $ra
    sp = sp + 0x40;                                             // 0x00188eb8: addiu $sp, $sp, 0x40
}