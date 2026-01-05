void func_00167d50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00167d50: addiu $sp, $sp, -0x60
    func_00169af0();  // 169af0                                // 0x00167d88: jal 0x169af0
    if (v0 == 0) goto label_0x167db0;                           // 0x00167d90: beqz $v0, 0x167db0
    a1 = 0xff00 << 16;                                          // 0x00167d98: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x00167d9c: jal 0x1698d0
    a1 = a1 | 0x162;                                            // 0x00167da0: ori $a1, $a1, 0x162
    goto label_0x167e7c;                                        // 0x00167da4: b 0x167e7c
    /* nop */                                                   // 0x00167dac: nop 
label_0x167db0:
    s6 = *(int32_t*)((s0) + 0xdc8);                             // 0x00167db0: lw $s6, 0xdc8($s0)
    s1 = s0 + 0xcc0;                                            // 0x00167db4: addiu $s1, $s0, 0xcc0
    *(uint32_t*)(s7) = 0;                                       // 0x00167db8: sw $zero, 0($s7)
    func_00175ed0();  // 175ed0                                // 0x00167dc4: jal 0x175ed0
    v1 = *(int32_t*)((s1) + 0x120);                             // 0x00167dcc: lw $v1, 0x120($s1)
    if (v1 == 0) goto label_0x167e78;                           // 0x00167dd4: beqz $v1, 0x167e78
    a0 = *(int32_t*)(s4);                                       // 0x00167ddc: lw $a0, 0($s4)
    v1 = 1;                                                     // 0x00167de0: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x167e78;                          // 0x00167de4: beq $a0, $v1, 0x167e78
    func_00169b88();  // 169b88                                // 0x00167dec: jal 0x169b88
    s5 = s0 + 0xcc8;                                            // 0x00167df0: addiu $s5, $s0, 0xcc8
    s0 = *(int32_t*)((s1) + 0x124);                             // 0x00167df4: lw $s0, 0x124($s1)
    /* nop */                                                   // 0x00167dfc: nop 
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x00167e00: slti $v0, $s1, 0x20
    if (v0 == 0) goto label_0x167e54;                           // 0x00167e04: beqz $v0, 0x167e54
    s1 = s1 + 1;                                                // 0x00167e08: addiu $s1, $s1, 1
    a0 = s0 + 0x1f;                                             // 0x00167e0c: addiu $a0, $s0, 0x1f
    v1 = (s0 < 0) ? 1 : 0;                                      // 0x00167e10: slti $v1, $s0, 0
    a1 = *(int32_t*)(s4);                                       // 0x00167e18: lw $a1, 0($s4)
    if (v1 != 0) v0 = a0;                                       // 0x00167e1c: movn $v0, $a0, $v1
    v0 = v0 >> 5;                                               // 0x00167e24: sra $v0, $v0, 5
    v0 = v0 << 5;                                               // 0x00167e28: sll $v0, $v0, 5
    v0 = s0 - v0;                                               // 0x00167e2c: subu $v0, $s0, $v0
    v0 = v0 << 2;                                               // 0x00167e30: sll $v0, $v0, 2
    v0 = v0 + s5;                                               // 0x00167e34: addu $v0, $v0, $s5
    func_0015b740();  // 15b740                                // 0x00167e38: jal 0x15b740
    a0 = *(int32_t*)((v0) + 0x120);                             // 0x00167e3c: lw $a0, 0x120($v0)
    v0 = *(int32_t*)(s3);                                       // 0x00167e44: lw $v0, 0($s3)
    v0 = (v0 < s2) ? 1 : 0;                                     // 0x00167e48: slt $v0, $v0, $s2
    /* bnezl $v0, 0x167e00 */                                   // 0x00167e4c: bnezl $v0, 0x167e00
    s0 = s0 + -1;                                               // 0x00167e50: addiu $s0, $s0, -1
label_0x167e54:
    *(uint32_t*)(s7) = s0;                                      // 0x00167e54: sw $s0, 0($s7)
    v0 = *(int32_t*)(s3);                                       // 0x00167e5c: lw $v0, 0($s3)
    v0 = v0 - s2;                                               // 0x00167e60: subu $v0, $v0, $s2
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00167e64: slti $v1, $v0, 0
    if (v1 != 0) v0 = 0;                                        // 0x00167e68: movn $v0, $zero, $v1
    func_00169ba0();  // 169ba0                                // 0x00167e6c: jal 0x169ba0
    *(uint32_t*)(s3) = v0;                                      // 0x00167e70: sw $v0, 0($s3)
label_0x167e78:
label_0x167e7c:
    return;                                                     // 0x00167ea0: jr $ra
    sp = sp + 0x60;                                             // 0x00167ea4: addiu $sp, $sp, 0x60
}