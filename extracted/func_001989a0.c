void func_001989a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_c;
    
    sp = sp + -0x10;                                            // 0x001989a0: addiu $sp, $sp, -0x10
    v0 = (unsigned)a0 >> 0x10;                                  // 0x001989a4: srl $v0, $a0, 0x10
    local_c = v0;                                               // 0x001989a8: sb $v0, 0xc($sp)
    t1 = sp + 0xd;                                              // 0x001989ac: addiu $t1, $sp, 0xd
    v0 = (unsigned)a0 >> 8;                                     // 0x001989b0: srl $v0, $a0, 8
    t0 = sp + 0xe;                                              // 0x001989b4: addiu $t0, $sp, 0xe
    *(uint8_t*)(t1) = v0;                                       // 0x001989b8: sb $v0, 0($t1)
    a2 = sp + 0xf;                                              // 0x001989bc: addiu $a2, $sp, 0xf
    *(uint8_t*)(t0) = a0;                                       // 0x001989c0: sb $a0, 0($t0)
    v0 = (unsigned)a0 >> 0x18;                                  // 0x001989c4: srl $v0, $a0, 0x18
    if (a1 != 0) goto label_0x198a34;                           // 0x001989c8: bnez $a1, 0x198a34
    *(uint8_t*)(a2) = v0;                                       // 0x001989cc: sb $v0, 0($a2)
    v1 = 1;                                                     // 0x001989d4: addiu $v1, $zero, 1
    a0 = 0x80;                                                  // 0x001989d8: addiu $a0, $zero, 0x80
    a1 = 0xff;                                                  // 0x001989dc: addiu $a1, $zero, 0xff
    v0 = t2 + sp;                                               // 0x001989e0: addu $v0, $t2, $sp
label_0x1989e4:
    a3 = v0 + 0xc;                                              // 0x001989e4: addiu $a3, $v0, 0xc
    v0 = *(uint8_t*)(a3);                                       // 0x001989e8: lbu $v0, 0($a3)
    if (v0 != a1) goto label_0x1989fc;                          // 0x001989ec: bne $v0, $a1, 0x1989fc
    /* nop */                                                   // 0x001989f0: nop 
    goto label_0x198a1c;                                        // 0x001989f4: b 0x198a1c
    *(uint8_t*)(a3) = a0;                                       // 0x001989f8: sb $a0, 0($a3)
label_0x1989fc:
    if (v0 == 0) goto label_0x198a1c;                           // 0x001989fc: beqz $v0, 0x198a1c
    /* nop */                                                   // 0x00198a00: nop 
    v0 = (unsigned)v0 >> 1;                                     // 0x00198a04: srl $v0, $v0, 1
    *(uint8_t*)(a3) = v0;                                       // 0x00198a08: sb $v0, 0($a3)
    v0 = *(uint8_t*)(a3);                                       // 0x00198a0c: lbu $v0, 0($a3)
    if (v0 != 0) goto label_0x198a1c;                           // 0x00198a10: bnez $v0, 0x198a1c
    /* nop */                                                   // 0x00198a14: nop 
    *(uint8_t*)(a3) = v1;                                       // 0x00198a18: sb $v1, 0($a3)
label_0x198a1c:
    t2 = t2 + 1;                                                // 0x00198a1c: addiu $t2, $t2, 1
    v0 = (t2 < 4) ? 1 : 0;                                      // 0x00198a20: slti $v0, $t2, 4
    if (v0 != 0) goto label_0x1989e4;                           // 0x00198a24: bnez $v0, 0x1989e4
    v0 = t2 + sp;                                               // 0x00198a28: addu $v0, $t2, $sp
    goto label_0x198a70;                                        // 0x00198a2c: b 0x198a70
    a1 = *(uint8_t*)(a2);                                       // 0x00198a30: lbu $a1, 0($a2)
label_0x198a34:
    v1 = *(uint8_t*)(a2);                                       // 0x00198a34: lbu $v1, 0($a2)
    v0 = 0xff;                                                  // 0x00198a38: addiu $v0, $zero, 0xff
    if (v1 != v0) goto label_0x198a4c;                          // 0x00198a3c: bne $v1, $v0, 0x198a4c
    v0 = 0x80;                                                  // 0x00198a40: addiu $v0, $zero, 0x80
    goto label_0x198a6c;                                        // 0x00198a44: b 0x198a6c
    *(uint8_t*)(a2) = v0;                                       // 0x00198a48: sb $v0, 0($a2)
label_0x198a4c:
    if (v1 == 0) goto label_0x198a6c;                           // 0x00198a4c: beqz $v1, 0x198a6c
    v0 = (unsigned)v1 >> 1;                                     // 0x00198a50: srl $v0, $v1, 1
    *(uint8_t*)(a2) = v0;                                       // 0x00198a54: sb $v0, 0($a2)
    v0 = *(uint8_t*)(a2);                                       // 0x00198a58: lbu $v0, 0($a2)
    if (v0 != 0) goto label_0x198a6c;                           // 0x00198a5c: bnez $v0, 0x198a6c
    /* nop */                                                   // 0x00198a60: nop 
    v0 = 1;                                                     // 0x00198a64: addiu $v0, $zero, 1
    *(uint8_t*)(a2) = v0;                                       // 0x00198a68: sb $v0, 0($a2)
label_0x198a6c:
    a1 = *(uint8_t*)(a2);                                       // 0x00198a6c: lbu $a1, 0($a2)
label_0x198a70:
    a0 = local_c;                                               // 0x00198a70: lbu $a0, 0xc($sp)
    v1 = *(uint8_t*)(t1);                                       // 0x00198a74: lbu $v1, 0($t1)
    v0 = *(uint8_t*)(t0);                                       // 0x00198a78: lbu $v0, 0($t0)
    a1 = a1 << 0x18;                                            // 0x00198a7c: sll $a1, $a1, 0x18
    a0 = a0 << 0x10;                                            // 0x00198a80: sll $a0, $a0, 0x10
    v1 = v1 << 8;                                               // 0x00198a84: sll $v1, $v1, 8
    a0 = a1 | a0;                                               // 0x00198a88: or $a0, $a1, $a0
    v1 = v1 | a0;                                               // 0x00198a8c: or $v1, $v1, $a0
    v0 = v0 | v1;                                               // 0x00198a90: or $v0, $v0, $v1
    return;                                                     // 0x00198a94: jr $ra
    sp = sp + 0x10;                                             // 0x00198a98: addiu $sp, $sp, 0x10
}