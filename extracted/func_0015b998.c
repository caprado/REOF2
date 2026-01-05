void func_0015b998() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x0015b998: addiu $sp, $sp, -0x40
    a2 = sp + 4;                                                // 0x0015b9c0: addiu $a2, $sp, 4
    a3 = sp + 8;                                                // 0x0015b9c4: addiu $a3, $sp, 8
    t0 = sp + 0xc;                                              // 0x0015b9c8: addiu $t0, $sp, 0xc
    func_0015b948();  // 15b948                                // 0x0015b9cc: jal 0x15b948
    s2 = *(int32_t*)((s0) + 0x10);                              // 0x0015b9d0: lw $s2, 0x10($s0)
    func_0015ba80();  // 15ba80                                // 0x0015b9d4: jal 0x15ba80
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0015b9d8: lw $a0, 0x24($s0)
    t1 = 2;                                                     // 0x0015b9dc: addiu $t1, $zero, 2
    a1 = local_0;                                               // 0x0015b9e0: lw $a1, 0($sp)
    a0 = local_4;                                               // 0x0015b9e4: lw $a0, 4($sp)
    a3 = a1 + 0xf;                                              // 0x0015b9e8: addiu $a3, $a1, 0xf
    v1 = (a1 < 0) ? 1 : 0;                                      // 0x0015b9ec: slti $v1, $a1, 0
    if (v1 != 0) a1 = a3;                                       // 0x0015b9f4: movn $a1, $a3, $v1
    a2 = a0 + 0xf;                                              // 0x0015b9f8: addiu $a2, $a0, 0xf
    v1 = (a0 < 0) ? 1 : 0;                                      // 0x0015b9fc: slti $v1, $a0, 0
    if (v1 != 0) a0 = a2;                                       // 0x0015ba00: movn $a0, $a2, $v1
    a1 = a1 >> 4;                                               // 0x0015ba04: sra $a1, $a1, 4
    a0 = a0 >> 4;                                               // 0x0015ba08: sra $a0, $a0, 4
    v1 = t0 << 3;                                               // 0x0015ba10: sll $v1, $t0, 3
    v1 = v1 + t0;                                               // 0x0015ba14: addu $v1, $v1, $t0
    a2 = (unsigned)v1 >> 0x1f;                                  // 0x0015ba18: srl $a2, $v1, 0x1f
    v1 = v1 + a2;                                               // 0x0015ba1c: addu $v1, $v1, $a2
    a0 = a3 << 1;                                               // 0x0015ba24: sll $a0, $a3, 1
    a0 = a0 + a3;                                               // 0x0015ba28: addu $a0, $a0, $a3
    v1 = v1 >> 1;                                               // 0x0015ba2c: sra $v1, $v1, 1
    a1 = a1 << 0xa;                                             // 0x0015ba30: sll $a1, $a1, 0xa
    at = 8 << 16;                                               // 0x0015ba34: lui $at, 8
    at = at | 0x6910;                                           // 0x0015ba38: ori $at, $at, 0x6910
    v1 = at + v1;                                               // 0x0015ba3c: addu $v1, $at, $v1
    a0 = a0 << 7;                                               // 0x0015ba40: sll $a0, $a0, 7
    a1 = a1 + 0x40;                                             // 0x0015ba44: addiu $a1, $a1, 0x40
    *(uint32_t*)(s1) = v1;                                      // 0x0015ba48: sw $v1, 0($s1)
    /* multiply: s2 * a1 -> hi:lo */                            // 0x0015ba4c: mult $ac3, $s2, $a1
    if (v0 == t1) goto label_0x15ba5c;                          // 0x0015ba50: beq $v0, $t1, 0x15ba5c
    a0 = a0 + 0x40;                                             // 0x0015ba54: addiu $a0, $a0, 0x40
    /* multiply: s2 * a0 -> hi:lo */                            // 0x0015ba58: mult $ac3, $s2, $a0
label_0x15ba5c:
    *(uint32_t*)(s3) = v1;                                      // 0x0015ba5c: sw $v1, 0($s3)
    return;                                                     // 0x0015ba74: jr $ra
    sp = sp + 0x40;                                             // 0x0015ba78: addiu $sp, $sp, 0x40
}