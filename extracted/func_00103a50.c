void func_00103a50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00103a50: addiu $sp, $sp, -0x40
    s0 = *(int32_t*)((t6) + 0x10);                              // 0x00103a7c: lw $s0, 0x10($t6)
    v1 = *(int32_t*)((s4) + 0x10);                              // 0x00103a80: lw $v1, 0x10($s4)
    v1 = (v1 < s0) ? 1 : 0;                                     // 0x00103a84: slt $v1, $v1, $s0
    if (v1 != 0) goto label_0x103c54;                           // 0x00103a88: bnez $v1, 0x103c54
    s0 = s0 + -1;                                               // 0x00103a90: addiu $s0, $s0, -1
    t3 = t6 + 0x14;                                             // 0x00103a94: addiu $t3, $t6, 0x14
    v0 = s0 << 2;                                               // 0x00103a98: sll $v0, $s0, 2
    s1 = s4 + 0x14;                                             // 0x00103a9c: addiu $s1, $s4, 0x14
    s3 = t3 + v0;                                               // 0x00103aa0: addu $s3, $t3, $v0
    t1 = s1 + v0;                                               // 0x00103aa4: addu $t1, $s1, $v0
    v1 = *(int32_t*)(s3);                                       // 0x00103aa8: lw $v1, 0($s3)
    t5 = *(int32_t*)(t1);                                       // 0x00103ab0: lw $t5, 0($t1)
    v1 = v1 + 1;                                                // 0x00103ab8: addiu $v1, $v1, 1
    /* divide: t5 / v1 -> hi:lo */                              // 0x00103abc: divu $zero, $t5, $v1
    /* beqzl $v1, 0x103ac8 */                                   // 0x00103ac0: beqzl $v1, 0x103ac8
    /* break (trap) */                                          // 0x00103ac4: break 0, 7
    /* mflo $s5 */                                              // 0x00103ac8
    if (s2 == 0) goto label_0x103b80;                           // 0x00103ad0: beqz $s2, 0x103b80
    /* nop */                                                   // 0x00103adc: nop 
label_0x103ae0:
    a0 = *(int32_t*)(t3);                                       // 0x00103ae0: lw $a0, 0($t3)
    t3 = t3 + 4;                                                // 0x00103ae4: addiu $t3, $t3, 4
    a2 = *(int32_t*)(t2);                                       // 0x00103ae8: lw $a2, 0($t2)
    a3 = ((unsigned)s3 < (unsigned)t3) ? 1 : 0;                 // 0x00103aec: sltu $a3, $s3, $t3
    v0 = a0 & 0xffff;                                           // 0x00103af0: andi $v0, $a0, 0xffff
    a0 = (unsigned)a0 >> 0x10;                                  // 0x00103af4: srl $a0, $a0, 0x10
    v0 = a1 + v1;                                               // 0x00103b00: addu $v0, $a1, $v1
    v1 = a2 & 0xffff;                                           // 0x00103b04: andi $v1, $a2, 0xffff
    a1 = v0 & 0xffff;                                           // 0x00103b08: andi $a1, $v0, 0xffff
    v0 = (unsigned)v0 >> 0x10;                                  // 0x00103b0c: srl $v0, $v0, 0x10
    t0 = a0 + v0;                                               // 0x00103b10: addu $t0, $a0, $v0
    v1 = v1 - a1;                                               // 0x00103b14: subu $v1, $v1, $a1
    v1 = v1 + t4;                                               // 0x00103b18: addu $v1, $v1, $t4
    a2 = (unsigned)a2 >> 0x10;                                  // 0x00103b1c: srl $a2, $a2, 0x10
    v0 = t0 & 0xffff;                                           // 0x00103b20: andi $v0, $t0, 0xffff
    t4 = v1 >> 0x10;                                            // 0x00103b24: sra $t4, $v1, 0x10
    a2 = a2 - v0;                                               // 0x00103b28: subu $a2, $a2, $v0
    *(uint16_t*)(t2) = v1;                                      // 0x00103b2c: sh $v1, 0($t2)
    a1 = a2 + t4;                                               // 0x00103b30: addu $a1, $a2, $t4
    v1 = (unsigned)t0 >> 0x10;                                  // 0x00103b34: srl $v1, $t0, 0x10
    *(uint16_t*)((t2) + 2) = a1;                                // 0x00103b38: sh $a1, 2($t2)
    t2 = t2 + 4;                                                // 0x00103b3c: addiu $t2, $t2, 4
    if (a3 == 0) goto label_0x103ae0;                           // 0x00103b40: beqz $a3, 0x103ae0
    t4 = a1 >> 0x10;                                            // 0x00103b44: sra $t4, $a1, 0x10
    /* bnezl $t5, 0x103b84 */                                   // 0x00103b48: bnezl $t5, 0x103b84
    goto label_0x103b5c;                                        // 0x00103b50: b 0x103b5c
    t1 = t1 + -4;                                               // 0x00103b54: addiu $t1, $t1, -4
    s0 = s0 + -1;                                               // 0x00103b58: addiu $s0, $s0, -1
label_0x103b5c:
    v0 = ((unsigned)s1 < (unsigned)t1) ? 1 : 0;                 // 0x00103b5c: sltu $v0, $s1, $t1
    /* beqzl $v0, 0x103b80 */                                   // 0x00103b60: beqzl $v0, 0x103b80
    *(uint32_t*)((s4) + 0x10) = s0;                             // 0x00103b64: sw $s0, 0x10($s4)
    v0 = *(int32_t*)(t1);                                       // 0x00103b68: lw $v0, 0($t1)
    /* nop */                                                   // 0x00103b6c: nop 
    /* nop */                                                   // 0x00103b70: nop 
    /* beqzl $v0, 0x103b58 */                                   // 0x00103b74: beqzl $v0, 0x103b58
    t1 = t1 + -4;                                               // 0x00103b78: addiu $t1, $t1, -4
    *(uint32_t*)((s4) + 0x10) = s0;                             // 0x00103b7c: sw $s0, 0x10($s4)
label_0x103b80:
    func_001086f0();  // 1086f0                                // 0x00103b84: jal 0x1086f0
    if (v0 < 0) goto label_0x103c50;                            // 0x00103b8c: bltz $v0, 0x103c50
    s2 = s5 + 1;                                                // 0x00103b94: addiu $s2, $s5, 1
    /* nop */                                                   // 0x00103ba4: nop 
label_0x103ba8:
    a0 = *(int32_t*)(t3);                                       // 0x00103ba8: lw $a0, 0($t3)
    t3 = t3 + 4;                                                // 0x00103bac: addiu $t3, $t3, 4
    a1 = *(int32_t*)(t2);                                       // 0x00103bb0: lw $a1, 0($t2)
    a3 = ((unsigned)s3 < (unsigned)t3) ? 1 : 0;                 // 0x00103bb4: sltu $a3, $s3, $t3
    v0 = a0 & 0xffff;                                           // 0x00103bb8: andi $v0, $a0, 0xffff
    a2 = (unsigned)a0 >> 0x10;                                  // 0x00103bbc: srl $a2, $a0, 0x10
    v0 = v0 + v1;                                               // 0x00103bc0: addu $v0, $v0, $v1
    v1 = a1 & 0xffff;                                           // 0x00103bc4: andi $v1, $a1, 0xffff
    a0 = v0 & 0xffff;                                           // 0x00103bc8: andi $a0, $v0, 0xffff
    v0 = (unsigned)v0 >> 0x10;                                  // 0x00103bcc: srl $v0, $v0, 0x10
    t0 = a2 + v0;                                               // 0x00103bd0: addu $t0, $a2, $v0
    v1 = v1 - a0;                                               // 0x00103bd4: subu $v1, $v1, $a0
    v1 = v1 + t4;                                               // 0x00103bd8: addu $v1, $v1, $t4
    a1 = (unsigned)a1 >> 0x10;                                  // 0x00103bdc: srl $a1, $a1, 0x10
    v0 = t0 & 0xffff;                                           // 0x00103be0: andi $v0, $t0, 0xffff
    t4 = v1 >> 0x10;                                            // 0x00103be4: sra $t4, $v1, 0x10
    a1 = a1 - v0;                                               // 0x00103be8: subu $a1, $a1, $v0
    *(uint16_t*)(t2) = v1;                                      // 0x00103bec: sh $v1, 0($t2)
    a1 = a1 + t4;                                               // 0x00103bf0: addu $a1, $a1, $t4
    v1 = (unsigned)t0 >> 0x10;                                  // 0x00103bf4: srl $v1, $t0, 0x10
    *(uint16_t*)((t2) + 2) = a1;                                // 0x00103bf8: sh $a1, 2($t2)
    t2 = t2 + 4;                                                // 0x00103bfc: addiu $t2, $t2, 4
    if (a3 == 0) goto label_0x103ba8;                           // 0x00103c00: beqz $a3, 0x103ba8
    t4 = a1 >> 0x10;                                            // 0x00103c04: sra $t4, $a1, 0x10
    v0 = s0 << 2;                                               // 0x00103c08: sll $v0, $s0, 2
    t1 = s1 + v0;                                               // 0x00103c0c: addu $t1, $s1, $v0
    v1 = *(int32_t*)(t1);                                       // 0x00103c10: lw $v1, 0($t1)
    if (v1 != 0) goto label_0x103c54;                           // 0x00103c14: bnez $v1, 0x103c54
    goto label_0x103c2c;                                        // 0x00103c1c: b 0x103c2c
    t1 = t1 + -4;                                               // 0x00103c20: addiu $t1, $t1, -4
    /* nop */                                                   // 0x00103c24: nop 
    s0 = s0 + -1;                                               // 0x00103c28: addiu $s0, $s0, -1
label_0x103c2c:
    v0 = ((unsigned)s1 < (unsigned)t1) ? 1 : 0;                 // 0x00103c2c: sltu $v0, $s1, $t1
    /* beqzl $v0, 0x103c50 */                                   // 0x00103c30: beqzl $v0, 0x103c50
    *(uint32_t*)((s4) + 0x10) = s0;                             // 0x00103c34: sw $s0, 0x10($s4)
    v0 = *(int32_t*)(t1);                                       // 0x00103c38: lw $v0, 0($t1)
    /* nop */                                                   // 0x00103c3c: nop 
    /* nop */                                                   // 0x00103c40: nop 
    /* beqzl $v0, 0x103c28 */                                   // 0x00103c44: beqzl $v0, 0x103c28
    t1 = t1 + -4;                                               // 0x00103c48: addiu $t1, $t1, -4
    *(uint32_t*)((s4) + 0x10) = s0;                             // 0x00103c4c: sw $s0, 0x10($s4)
label_0x103c50:
label_0x103c54:
    return;                                                     // 0x00103c74: jr $ra
    sp = sp + 0x40;                                             // 0x00103c78: addiu $sp, $sp, 0x40
}