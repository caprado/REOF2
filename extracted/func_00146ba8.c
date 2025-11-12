void func_00146ba8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x00146ba8: addiu $sp, $sp, -0x80
    v0 = 2;                                                     // 0x00146bac: addiu $v0, $zero, 2
    v1 = *(int32_t*)((s1) + 0x18c);                             // 0x00146bdc: lw $v1, 0x18c($s1)
    if (v1 != v0) goto label_0x146bf8;                          // 0x00146be0: bne $v1, $v0, 0x146bf8
    goto label_0x146c00;                                        // 0x00146bf0: b 0x146c00
    s6 = 0x40;                                                  // 0x00146bf4: addiu $s6, $zero, 0x40
label_0x146bf8:
label_0x146c00:
    a3 = *(int32_t*)((s1) + 0x870);                             // 0x00146c00: lw $a3, 0x870($s1)
    s0 = 1;                                                     // 0x00146c0c: addiu $s0, $zero, 1
    t0 = a3 + 0x20;                                             // 0x00146c10: addiu $t0, $a3, 0x20
    a2 = a3 + 0x10;                                             // 0x00146c14: addiu $a2, $a3, 0x10
    func_00146a98();  // 0x146920                                // 0x00146c18: jal 0x146920
    a3 = a3 + 0x18;                                             // 0x00146c1c: addiu $a3, $a3, 0x18
    a3 = *(int32_t*)((s1) + 0x870);                             // 0x00146c20: lw $a3, 0x870($s1)
    v0 = *(int32_t*)((a3) + 0x10);                              // 0x00146c2c: lw $v0, 0x10($a3)
    t0 = a3 + 0x38;                                             // 0x00146c30: addiu $t0, $a3, 0x38
    a2 = a3 + 0x28;                                             // 0x00146c34: addiu $a2, $a3, 0x28
    *(uint32_t*)((s1) + 0x98) = v0;                             // 0x00146c3c: sw $v0, 0x98($s1)
    func_00146a98();  // 0x146920                                // 0x00146c40: jal 0x146920
    a3 = a3 + 0x30;                                             // 0x00146c44: addiu $a3, $a3, 0x30
    a3 = *(int32_t*)((s1) + 0x870);                             // 0x00146c48: lw $a3, 0x870($s1)
    v1 = *(int32_t*)((a3) + 0x28);                              // 0x00146c58: lw $v1, 0x28($a3)
    *(uint32_t*)((s1) + 0x98) = v1;                             // 0x00146c60: sw $v1, 0x98($s1)
    a2 = *(int32_t*)((s3) + 0x5c);                              // 0x00146c68: lw $a2, 0x5c($s3)
    v0 = v0 | t0;                                               // 0x00146c6c: or $v0, $v0, $t0
    *(uint32_t*)((s1) + 0xe4) = a2;                             // 0x00146c74: sw $a2, 0xe4($s1)
    v1 = v1 | t0;                                               // 0x00146c7c: or $v1, $v1, $t0
    a2 = *(int32_t*)((s3) + 0x60);                              // 0x00146c80: lw $a2, 0x60($s3)
    *(uint32_t*)((s1) + 0xe8) = a2;                             // 0x00146c88: sw $a2, 0xe8($s1)
    v0 = *(int32_t*)((s3) + 0x44);                              // 0x00146c8c: lw $v0, 0x44($s3)
    *(uint32_t*)((s1) + 0xcc) = v0;                             // 0x00146c90: sw $v0, 0xcc($s1)
    v1 = *(int32_t*)((s4) + 0x48);                              // 0x00146c94: lw $v1, 0x48($s4)
    *(uint32_t*)((s1) + 0xd0) = v1;                             // 0x00146c98: sw $v1, 0xd0($s1)
    v0 = *(int32_t*)((s3) + 0x50);                              // 0x00146c9c: lw $v0, 0x50($s3)
    *(uint32_t*)((s1) + 0xd8) = v0;                             // 0x00146ca0: sw $v0, 0xd8($s1)
    v1 = *(int32_t*)((s4) + 0x54);                              // 0x00146ca4: lw $v1, 0x54($s4)
    func_00146668();  // 0x1465c8                                // 0x00146ca8: jal 0x1465c8
    *(uint32_t*)((s1) + 0xdc) = v1;                             // 0x00146cac: sw $v1, 0xdc($s1)
    if (v0 == 0) goto label_0x146d38;                           // 0x00146cb0: beqz $v0, 0x146d38
    v0 = 1;                                                     // 0x00146cb4: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s2) + 0x28);                              // 0x00146cb8: lw $v1, 0x28($s2)
    if (v1 != v0) goto label_0x146d3c;                          // 0x00146cbc: bne $v1, $v0, 0x146d3c
    v0 = *(int32_t*)((s5) + 0x28);                              // 0x00146cc4: lw $v0, 0x28($s5)
    if (v0 != v1) goto label_0x146d40;                          // 0x00146cc8: bne $v0, $v1, 0x146d40
    v0 = *(int32_t*)((s2) + 0x10);                              // 0x00146cd0: lw $v0, 0x10($s2)
    v0 = v0 << 1;                                               // 0x00146cd4: sll $v0, $v0, 1
    *(uint32_t*)((s2) + 0x10) = v0;                             // 0x00146cd8: sw $v0, 0x10($s2)
    v1 = *(int32_t*)((s1) + 0xc8);                              // 0x00146cdc: lw $v1, 0xc8($s1)
    if (v1 == 0) goto label_0x146cf8;                           // 0x00146ce0: beqz $v1, 0x146cf8
    func_001476e8();  // 0x147460                                // 0x00146ce8: jal 0x147460
    goto label_0x146d04;                                        // 0x00146cf0: b 0x146d04
    v0 = *(int32_t*)((s2) + 0x10);                              // 0x00146cf4: lw $v0, 0x10($s2)
label_0x146cf8:
    func_00146920();  // 0x146668                                // 0x00146cf8: jal 0x146668
    v0 = *(int32_t*)((s2) + 0x10);                              // 0x00146d00: lw $v0, 0x10($s2)
label_0x146d04:
    v0 = v0 >> 1;                                               // 0x00146d0c: sra $v0, $v0, 1
    *(uint32_t*)((s2) + 0x10) = v0;                             // 0x00146d14: sw $v0, 0x10($s2)
    return func_001468f8();  // Tail call                       // 0x00146d30: j 0x1468f8
    sp = sp + 0x80;                                             // 0x00146d34: addiu $sp, $sp, 0x80
label_0x146d38:
label_0x146d3c:
label_0x146d40:
    return;                                                     // 0x00146d58: jr $ra
    sp = sp + 0x80;                                             // 0x00146d5c: addiu $sp, $sp, 0x80
}