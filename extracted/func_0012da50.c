void func_0012da50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0012da50: addiu $sp, $sp, -0x50
    t3 = 0x20;                                                  // 0x0012da54: addiu $t3, $zero, 0x20
    v0 = s2 ^ 1;                                                // 0x0012da60: xori $v0, $s2, 1
    v1 = 0x40;                                                  // 0x0012da64: addiu $v1, $zero, 0x40
    if (v0 != 0) v1 = t3;                                       // 0x0012da68: movn $v1, $t3, $v0
    /* divide: s1 / v1 -> hi:lo */                              // 0x0012da78: div $zero, $s1, $v1
    /* beqzl $v1, 0x12dab4 */                                   // 0x0012daac: beqzl $v1, 0x12dab4
    /* break (trap) */                                          // 0x0012dab0: break 0, 7
    a0 = 1;                                                     // 0x0012dab4: addiu $a0, $zero, 1
    a2 = 4;                                                     // 0x0012dab8: addiu $a2, $zero, 4
    a3 = 4;                                                     // 0x0012dabc: addiu $a3, $zero, 4
    /* mfhi $t3 */                                              // 0x0012dac0
    t3 = v1 - t3;                                               // 0x0012dac4: subu $t3, $v1, $t3
    /* divide: t3 / v1 -> hi:lo */                              // 0x0012dac8: div $zero, $t3, $v1
    /* mfhi $t0 */                                              // 0x0012dacc
    v0 = s1 + t0;                                               // 0x0012dad0: addu $v0, $s1, $t0
    *(uint32_t*)(s3) = t0;                                      // 0x0012dad4: sw $t0, 0($s3)
    t1 = v0 + 0x1f;                                             // 0x0012dad8: addiu $t1, $v0, 0x1f
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x0012dadc: slti $v1, $v0, 0
    if (v1 != 0) v0 = t1;                                       // 0x0012dae0: movn $v0, $t1, $v1
    v0 = v0 >> 5;                                               // 0x0012dae4: sra $v0, $v0, 5
    /* multiply: v0 * s2 -> hi:lo */                            // 0x0012dae8: mult $ac2, $v0, $s2
    s0 = v0 << 3;                                               // 0x0012daec: sll $s0, $v0, 3
    func_00126c40();  // 126c40                                // 0x0012daf0: jal 0x126c40
    s0 = s0 + v0;                                               // 0x0012daf4: addu $s0, $s0, $v0
    s0 = s0 << 1;                                               // 0x0012daf8: sll $s0, $s0, 1
    a2 = 0x800;                                                 // 0x0012dafc: addiu $a2, $zero, 0x800
    s0 = s0 + v0;                                               // 0x0012db00: addu $s0, $s0, $v0
    a1 = s0 + 4;                                                // 0x0012db04: addiu $a1, $s0, 4
    s0 = s0 + 0x803;                                            // 0x0012db08: addiu $s0, $s0, 0x803
    a0 = (a1 < 0) ? 1 : 0;                                      // 0x0012db0c: slti $a0, $a1, 0
    if (a0 != 0) v1 = s0;                                       // 0x0012db14: movn $v1, $s0, $a0
    v1 = v1 >> 0xb;                                             // 0x0012db1c: sra $v1, $v1, 0xb
    v1 = v1 << 0xb;                                             // 0x0012db20: sll $v1, $v1, 0xb
    a1 = a1 - v1;                                               // 0x0012db24: subu $a1, $a1, $v1
    a2 = a2 - a1;                                               // 0x0012db28: subu $a2, $a2, $a1
    a3 = a2 + 0x7ff;                                            // 0x0012db2c: addiu $a3, $a2, 0x7ff
    a1 = (a2 < 0) ? 1 : 0;                                      // 0x0012db30: slti $a1, $a2, 0
    if (a1 != 0) v1 = a3;                                       // 0x0012db38: movn $v1, $a3, $a1
    v1 = v1 >> 0xb;                                             // 0x0012db3c: sra $v1, $v1, 0xb
    a1 = v1 << 0xb;                                             // 0x0012db40: sll $a1, $v1, 0xb
    v1 = a2 - a1;                                               // 0x0012db44: subu $v1, $a2, $a1
    v0 = v0 + v1;                                               // 0x0012db48: addu $v0, $v0, $v1
    *(uint32_t*)(s4) = v0;                                      // 0x0012db4c: sw $v0, 0($s4)
    a2 = *(int32_t*)(s3);                                       // 0x0012db54: lw $a2, 0($s3)
    func_0012da20();  // 12da20                                // 0x0012db58: jal 0x12da20
    a2 = s1 + a2;                                               // 0x0012db5c: addu $a2, $s1, $a2
    *(uint32_t*)(s5) = v0;                                      // 0x0012db64: sw $v0, 0($s5)
    a2 = *(int32_t*)(s3);                                       // 0x0012db68: lw $a2, 0($s3)
    a1 = *(int32_t*)(s4);                                       // 0x0012db6c: lw $a1, 0($s4)
    func_0012da20();  // 12da20                                // 0x0012db70: jal 0x12da20
    a2 = s7 + a2;                                               // 0x0012db74: addu $a2, $s7, $a2
    *(uint32_t*)(s6) = v0;                                      // 0x0012db78: sw $v0, 0($s6)
    return;                                                     // 0x0012dba0: jr $ra
    sp = sp + 0x50;                                             // 0x0012dba4: addiu $sp, $sp, 0x50
}