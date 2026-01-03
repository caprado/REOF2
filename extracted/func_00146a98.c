void func_00146a98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00146a98: addiu $sp, $sp, -0x30
    a3 = *(int32_t*)((s0) + 0x870);                             // 0x00146ab0: lw $a3, 0x870($s0)
    t0 = a3 + 0x20;                                             // 0x00146ab4: addiu $t0, $a3, 0x20
    a2 = a3 + 0x10;                                             // 0x00146ab8: addiu $a2, $a3, 0x10
    func_00146920();  // 146920                                // 0x00146abc: jal 0x146920
    a3 = a3 + 0x18;                                             // 0x00146ac0: addiu $a3, $a3, 0x18
    a3 = *(int32_t*)((s0) + 0x870);                             // 0x00146ac4: lw $a3, 0x870($s0)
    a2 = 0x21 << 16;                                            // 0x00146ac8: lui $a2, 0x21
    a2 = a2 + 0xd20;                                            // 0x00146acc: addiu $a2, $a2, 0xd20
    v1 = *(int32_t*)((a3) + 0x10);                              // 0x00146adc: lw $v1, 0x10($a3)
    *(uint32_t*)((s0) + 0x98) = v1;                             // 0x00146ae8: sw $v1, 0x98($s0)
    v0 = v0 & 0xf;                                              // 0x00146aec: andi $v0, $v0, 0xf
    v0 = v0 << 2;                                               // 0x00146af0: sll $v0, $v0, 2
    v1 = *(int32_t*)((s1) + 0x5c);                              // 0x00146af4: lw $v1, 0x5c($s1)
    v0 = v0 + a2;                                               // 0x00146af8: addu $v0, $v0, $a2
    *(uint32_t*)((s0) + 0xe4) = v1;                             // 0x00146b00: sw $v1, 0xe4($s0)
    v0 = *(int32_t*)((s1) + 0x60);                              // 0x00146b08: lw $v0, 0x60($s1)
    *(uint32_t*)((s0) + 0xe8) = v0;                             // 0x00146b0c: sw $v0, 0xe8($s0)
    v1 = *(int32_t*)((s1) + 0x44);                              // 0x00146b10: lw $v1, 0x44($s1)
    *(uint32_t*)((s0) + 0xcc) = v1;                             // 0x00146b14: sw $v1, 0xcc($s0)
    v0 = *(int32_t*)((s1) + 0x48);                              // 0x00146b18: lw $v0, 0x48($s1)
    *(uint32_t*)((s0) + 0xd0) = v0;                             // 0x00146b1c: sw $v0, 0xd0($s0)
    v1 = *(int32_t*)((s1) + 0x4c);                              // 0x00146b20: lw $v1, 0x4c($s1)
    *(uint32_t*)((s0) + 0xd4) = v1;                             // 0x00146b24: sw $v1, 0xd4($s0)
    v0 = *(int32_t*)((s1) + 0x50);                              // 0x00146b28: lw $v0, 0x50($s1)
    *(uint32_t*)((s0) + 0xd8) = v0;                             // 0x00146b2c: sw $v0, 0xd8($s0)
    v1 = *(int32_t*)((s1) + 0x54);                              // 0x00146b30: lw $v1, 0x54($s1)
    *(uint32_t*)((s0) + 0xdc) = v1;                             // 0x00146b34: sw $v1, 0xdc($s0)
    v0 = *(int32_t*)((s1) + 0x58);                              // 0x00146b38: lw $v0, 0x58($s1)
    func_001465c8();  // 1465c8                                // 0x00146b3c: jal 0x1465c8
    *(uint32_t*)((s0) + 0xe0) = v0;                             // 0x00146b40: sw $v0, 0xe0($s0)
    if (v0 == 0) goto label_0x146b94;                           // 0x00146b44: beqz $v0, 0x146b94
    v0 = 1;                                                     // 0x00146b48: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s1) + 0x28);                              // 0x00146b4c: lw $v1, 0x28($s1)
    if (v1 != v0) goto label_0x146b98;                          // 0x00146b50: bne $v1, $v0, 0x146b98
    v0 = *(int32_t*)((s0) + 0xc8);                              // 0x00146b58: lw $v0, 0xc8($s0)
    if (v0 == 0) goto label_0x146b74;                           // 0x00146b5c: beqz $v0, 0x146b74
    func_00147460();  // 147460                                // 0x00146b64: jal 0x147460
    goto label_0x146b80;                                        // 0x00146b6c: b 0x146b80
label_0x146b74:
    func_00146668();  // 146668                                // 0x00146b74: jal 0x146668
label_0x146b80:
    return func_001468f8();  // Tail call                       // 0x00146b8c: j 0x1468f8
    sp = sp + 0x30;                                             // 0x00146b90: addiu $sp, $sp, 0x30
label_0x146b94:
label_0x146b98:
    return;                                                     // 0x00146ba0: jr $ra
    sp = sp + 0x30;                                             // 0x00146ba4: addiu $sp, $sp, 0x30
}