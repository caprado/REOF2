void func_00130b58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00130b58: addiu $sp, $sp, -0x10
    func_00135c78();  // 135c78                                // 0x00130b64: jal 0x135c78
    v0 = 1;                                                     // 0x00130b70: addiu $v0, $zero, 1
    a2 = a1 + 0x7ff;                                            // 0x00130b74: addiu $a2, $a1, 0x7ff
    a0 = (a1 < 0) ? 1 : 0;                                      // 0x00130b78: slti $a0, $a1, 0
    if (a0 != 0) v1 = a2;                                       // 0x00130b80: movn $v1, $a2, $a0
    v1 = v1 >> 0xb;                                             // 0x00130b84: sra $v1, $v1, 0xb
    a0 = v1 << 0xb;                                             // 0x00130b88: sll $a0, $v1, 0xb
    a2 = v1 + 1;                                                // 0x00130b8c: addiu $a2, $v1, 1
    a1 = a1 - a0;                                               // 0x00130b90: subu $a1, $a1, $a0
    if (a1 <= 0) goto label_0x130ba0;                           // 0x00130b94: blez $a1, 0x130ba0
    *(uint32_t*)(s0) = v1;                                      // 0x00130b98: sw $v1, 0($s0)
    *(uint32_t*)(s0) = a2;                                      // 0x00130b9c: sw $a2, 0($s0)
label_0x130ba0:
    return;                                                     // 0x00130ba8: jr $ra
    sp = sp + 0x10;                                             // 0x00130bac: addiu $sp, $sp, 0x10
}