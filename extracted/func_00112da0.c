void func_00112da0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_20, local_8;
    
    sp = sp + -0xd0;                                            // 0x00112da0: addiu $sp, $sp, -0xd0
    a1 = a1 << 0x10;                                            // 0x00112da4: sll $a1, $a1, 0x10
    t0 = t0 << 0x10;                                            // 0x00112dac: sll $t0, $t0, 0x10
    s0 = t1 << 0x10;                                            // 0x00112db4: sll $s0, $t1, 0x10
    t2 = t2 << 0x10;                                            // 0x00112dbc: sll $t2, $t2, 0x10
    s0 = s0 >> 0x10;                                            // 0x00112dc4: sra $s0, $s0, 0x10
    s6 = a1 >> 0x10;                                            // 0x00112dcc: sra $s6, $a1, 0x10
    s5 = t0 >> 0x10;                                            // 0x00112dd4: sra $s5, $t0, 0x10
    s7 = t2 >> 0x10;                                            // 0x00112de4: sra $s7, $t2, 0x10
    s1 = a2 << 0x10;                                            // 0x00112dec: sll $s1, $a2, 0x10
    func_001123a0();  // 1123a0                                // 0x00112df4: jal 0x1123a0
    fp = a3 << 0x10;                                            // 0x00112df8: sll $fp, $a3, 0x10
    s3 = s1 >> 0x10;                                            // 0x00112dfc: sra $s3, $s1, 0x10
    s4 = fp >> 0x10;                                            // 0x00112e00: sra $s4, $fp, 0x10
    local_20 = v0;                                              // 0x00112e04: sw $v0, 0x20($sp)
    func_001124c8();  // 1124c8                                // 0x00112e1c: jal 0x1124c8
    a0 = s2 + 0x28;                                             // 0x00112e24: addiu $a0, $s2, 0x28
    func_001124c8();  // 1124c8                                // 0x00112e38: jal 0x1124c8
    a0 = s2 + 0x60;                                             // 0x00112e40: addiu $a0, $s2, 0x60
    func_001129c8();  // 1129c8                                // 0x00112e54: jal 0x1129c8
    a0 = s2 + 0x150;                                            // 0x00112e60: addiu $a0, $s2, 0x150
    func_001129c8();  // 1129c8                                // 0x00112e70: jal 0x1129c8
    if (s7 == 0) goto label_0x112ef0;                           // 0x00112e78: beqz $s7, 0x112ef0
    v0 = s1 >> 0x11;                                            // 0x00112e7c: sra $v0, $s1, 0x11
    s0 = 0x800;                                                 // 0x00112e80: addiu $s0, $zero, 0x800
    s1 = fp >> 0x11;                                            // 0x00112e84: sra $s1, $fp, 0x11
    local_0 = 0;                                                // 0x00112e88: sw $zero, 0($sp)
    s1 = s0 - s1;                                               // 0x00112e8c: subu $s1, $s0, $s1
    local_8 = 0;                                                // 0x00112e90: sw $zero, 8($sp)
    s0 = s0 - v0;                                               // 0x00112e94: subu $s0, $s0, $v0
    a0 = s2 + 0xe0;                                             // 0x00112e98: addiu $a0, $s2, 0xe0
    local_10 = 0;                                               // 0x00112e9c: sw $zero, 0x10($sp)
    func_00112bb0();  // 112bb0                                // 0x00112eb8: jal 0x112bb0
    local_0 = 0;                                                // 0x00112ecc: sw $zero, 0($sp)
    local_8 = 0;                                                // 0x00112ed0: sw $zero, 8($sp)
    a0 = s2 + 0x1d0;                                            // 0x00112ed4: addiu $a0, $s2, 0x1d0
    local_10 = 0;                                               // 0x00112ed8: sw $zero, 0x10($sp)
    func_00112bb0();  // 112bb0                                // 0x00112ee8: jal 0x112bb0
label_0x112ef0:
    t1 = 0xe;                                                   // 0x00112ef4: addiu $t1, $zero, 0xe
    /* FPU: subu.qb $zero, $s2, $v0 */                          // 0x00112ef8: subu.qb $zero, $s2, $v0
    a1 = -0x8000;                                               // 0x00112efc: addiu $a1, $zero, -0x8000
    v1 = 8;                                                     // 0x00112f04: addiu $v1, $zero, 8
    v0 = 8;                                                     // 0x00112f0c: addiu $v0, $zero, 8
    if (s7 != 0) v0 = t1;                                       // 0x00112f14: movn $v0, $t1, $s7
    a0 = a0 & a1;                                               // 0x00112f18: and $a0, $a0, $a1
    if (s7 != 0) v1 = t1;                                       // 0x00112f1c: movn $v1, $t1, $s7
    a2 = a2 & a1;                                               // 0x00112f20: and $a2, $a2, $a1
    a0 = a0 | v0;                                               // 0x00112f24: or $a0, $a0, $v0
    a2 = a2 | v1;                                               // 0x00112f28: or $a2, $a2, $v1
    v0 = 0 | 0x8000;                                            // 0x00112f2c: ori $v0, $zero, 0x8000
    a2 = a2 | v0;                                               // 0x00112f34: or $a2, $a2, $v0
    a0 = a0 | v0;                                               // 0x00112f3c: or $a0, $a0, $v0
    v1 = -1;                                                    // 0x00112f40: addiu $v1, $zero, -1
    a1 = -0x10;                                                 // 0x00112f48: addiu $a1, $zero, -0x10
    v0 = 0 | 0x8000;                                            // 0x00112f4c: ori $v0, $zero, 0x8000
    a2 = a2 & v1;                                               // 0x00112f54: and $a2, $a2, $v1
    a0 = a0 & v1;                                               // 0x00112f58: and $a0, $a0, $v1
    t0 = t0 & a1;                                               // 0x00112f5c: and $t0, $t0, $a1
    a3 = a3 & a1;                                               // 0x00112f60: and $a3, $a3, $a1
    a2 = a2 | v0;                                               // 0x00112f64: or $a2, $a2, $v0
    a0 = a0 | v0;                                               // 0x00112f68: or $a0, $a0, $v0
    t0 = t0 | t1;                                               // 0x00112f6c: or $t0, $t0, $t1
    a3 = a3 | t1;                                               // 0x00112f70: or $a3, $a3, $t1
    func_00112900();  // 112900                                // 0x00112f8c: jal 0x112900
    v1 = local_20;                                              // 0x00112f94: lw $v1, 0x20($sp)
    a0 = 1;                                                     // 0x00112f9c: addiu $a0, $zero, 1
    a0 = a0 | 1;                                                // 0x00112fa4: ori $a0, $a0, 1
    v1 = 0 | 0xffff;                                            // 0x00112fac: ori $v1, $zero, 0xffff
    v1 = v1 | 0xffff;                                           // 0x00112fb4: ori $v1, $v1, 0xffff
    v0 = v0 & v1;                                               // 0x00112fb8: and $v0, $v0, $v1
    if (v0 == a0) goto label_0x112fd0;                          // 0x00112fbc: beq $v0, $a0, 0x112fd0
    v1 = local_20;                                              // 0x00112fc0: lw $v1, 0x20($sp)
    v0 = *(int16_t*)(v1);                                       // 0x00112fc4: lh $v0, 0($v1)
    if (v0 != 0) goto label_0x11300c;                           // 0x00112fc8: bnez $v0, 0x11300c
label_0x112fd0:
    a2 = a2 >> 1;                                               // 0x00112fd0: sra $a2, $a2, 1
    v0 = a2 << 0x10;                                            // 0x00112fdc: sll $v0, $a2, 0x10
    a1 = -0x200;                                                // 0x00112fe0: addiu $a1, $zero, -0x200
    v0 = v0 >> 0x10;                                            // 0x00112fe4: sra $v0, $v0, 0x10
    v1 = v1 & a1;                                               // 0x00112fe8: and $v1, $v1, $a1
    v0 = v0 & 0x1ff;                                            // 0x00112fec: andi $v0, $v0, 0x1ff
    a0 = a0 & a1;                                               // 0x00112ff0: and $a0, $a0, $a1
    a2 = a2 & 0x1ff;                                            // 0x00112ff4: andi $a2, $a2, 0x1ff
    a0 = a0 | v0;                                               // 0x00112ff8: or $a0, $a0, $v0
    v1 = v1 | a2;                                               // 0x00112ffc: or $v1, $v1, $a2
label_0x11300c:
    return;                                                     // 0x00113030: jr $ra
    sp = sp + 0xd0;                                             // 0x00113034: addiu $sp, $sp, 0xd0
}