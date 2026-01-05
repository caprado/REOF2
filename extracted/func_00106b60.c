void func_00106b60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x90;                                            // 0x00106b60: addiu $sp, $sp, -0x90
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x00106b78: lhu $v1, 0xc($s0)
    v0 = v1 & 2;                                                // 0x00106b7c: andi $v0, $v1, 2
    if (v0 == 0) goto label_0x106ba0;                           // 0x00106b80: beqz $v0, 0x106ba0
    v0 = 1;                                                     // 0x00106b84: addiu $v0, $zero, 1
    v1 = s0 + 0x43;                                             // 0x00106b88: addiu $v1, $s0, 0x43
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x00106b8c: sw $v0, 0x14($s0)
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x00106b90: sw $v1, 0x10($s0)
    goto label_0x106c9c;                                        // 0x00106b94: b 0x106c9c
    *(uint32_t*)(s0) = v1;                                      // 0x00106b98: sw $v1, 0($s0)
    /* nop */                                                   // 0x00106b9c: nop 
label_0x106ba0:
    a1 = *(int16_t*)((s0) + 0xe);                               // 0x00106ba0: lh $a1, 0xe($s0)
    if (a1 < 0) goto label_0x106bc8;                            // 0x00106ba4: bltz $a1, 0x106bc8
    v0 = v1 | 0x800;                                            // 0x00106ba8: ori $v0, $v1, 0x800
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x00106bac: lw $a0, 0x54($s0)
    func_001061f8();  // 1061f8                                // 0x00106bb0: jal 0x1061f8
    if (v0 >= 0) goto label_0x106bd8;                           // 0x00106bb8: bgez $v0, 0x106bd8
    v0 = local_4;                                               // 0x00106bbc: lw $v0, 4($sp)
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x00106bc0: lhu $v1, 0xc($s0)
    v0 = v1 | 0x800;                                            // 0x00106bc4: ori $v0, $v1, 0x800
label_0x106bc8:
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00106bcc: sh $v0, 0xc($s0)
    goto label_0x106c1c;                                        // 0x00106bd0: b 0x106c1c
    s1 = 0x400;                                                 // 0x00106bd4: addiu $s1, $zero, 0x400
label_0x106bd8:
    a0 = 0 | 0x8000;                                            // 0x00106bd8: ori $a0, $zero, 0x8000
    s1 = 0x400;                                                 // 0x00106bdc: addiu $s1, $zero, 0x400
    v0 = v0 & 0xf000;                                           // 0x00106be0: andi $v0, $v0, 0xf000
    v1 = v0 ^ 0x2000;                                           // 0x00106be4: xori $v1, $v0, 0x2000
    if (v0 != a0) goto label_0x106c10;                          // 0x00106be8: bne $v0, $a0, 0x106c10
    s2 = ((unsigned)v1 < (unsigned)1) ? 1 : 0;                  // 0x00106bec: sltiu $s2, $v1, 1
    v0 = 0x11 << 16;                                            // 0x00106bf0: lui $v0, 0x11
    v1 = *(int32_t*)((s0) + 0x28);                              // 0x00106bf4: lw $v1, 0x28($s0)
    v0 = v0 + -0x5900;                                          // 0x00106bf8: addiu $v0, $v0, -0x5900
    if (v1 != v0) goto label_0x106c14;                          // 0x00106bfc: bne $v1, $v0, 0x106c14
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00106c00: lhu $v0, 0xc($s0)
    *(uint32_t*)((s0) + 0x4c) = s1;                             // 0x00106c04: sw $s1, 0x4c($s0)
    goto label_0x106c18;                                        // 0x00106c08: b 0x106c18
    v0 = v0 | 0x400;                                            // 0x00106c0c: ori $v0, $v0, 0x400
label_0x106c10:
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00106c10: lhu $v0, 0xc($s0)
label_0x106c14:
    v0 = v0 | 0x800;                                            // 0x00106c14: ori $v0, $v0, 0x800
label_0x106c18:
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00106c18: sh $v0, 0xc($s0)
label_0x106c1c:
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x00106c1c: lw $a0, 0x54($s0)
    func_001071e0();  // 1071e0                                // 0x00106c20: jal 0x1071e0
    a1 = 0x400;                                                 // 0x00106c24: addiu $a1, $zero, 0x400
    if (a1 != 0) goto label_0x106c58;                           // 0x00106c2c: bnez $a1, 0x106c58
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00106c30: lhu $v0, 0xc($s0)
    a0 = s0 + 0x43;                                             // 0x00106c34: addiu $a0, $s0, 0x43
    v1 = 1;                                                     // 0x00106c38: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x10) = a0;                             // 0x00106c3c: sw $a0, 0x10($s0)
    v0 = v0 | 2;                                                // 0x00106c40: ori $v0, $v0, 2
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x00106c44: sw $v1, 0x14($s0)
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00106c48: sh $v0, 0xc($s0)
    goto label_0x106c9c;                                        // 0x00106c4c: b 0x106c9c
    *(uint32_t*)(s0) = a0;                                      // 0x00106c50: sw $a0, 0($s0)
    /* nop */                                                   // 0x00106c54: nop 
label_0x106c58:
    v1 = 0x10 << 16;                                            // 0x00106c58: lui $v1, 0x10
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x00106c5c: lw $a0, 0x54($s0)
    v1 = v1 + 0x54d8;                                           // 0x00106c60: addiu $v1, $v1, 0x54d8
    v0 = v0 | 0x80;                                             // 0x00106c64: ori $v0, $v0, 0x80
    *(uint32_t*)((s0) + 0x10) = a1;                             // 0x00106c68: sw $a1, 0x10($s0)
    *(uint32_t*)((a0) + 0x3c) = v1;                             // 0x00106c6c: sw $v1, 0x3c($a0)
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00106c70: sh $v0, 0xc($s0)
    *(uint32_t*)((s0) + 0x14) = s1;                             // 0x00106c74: sw $s1, 0x14($s0)
    if (s2 == 0) goto label_0x106c9c;                           // 0x00106c78: beqz $s2, 0x106c9c
    *(uint32_t*)(s0) = a1;                                      // 0x00106c7c: sw $a1, 0($s0)
    func_00114a90();  // 114a90                                // 0x00106c80: jal 0x114a90
    a0 = *(int16_t*)((s0) + 0xe);                               // 0x00106c84: lh $a0, 0xe($s0)
    /* beqzl $v0, 0x106ca0 */                                   // 0x00106c88: beqzl $v0, 0x106ca0
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00106c90: lhu $v0, 0xc($s0)
    v0 = v0 | 1;                                                // 0x00106c94: ori $v0, $v0, 1
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x00106c98: sh $v0, 0xc($s0)
label_0x106c9c:
    return;                                                     // 0x00106cac: jr $ra
    sp = sp + 0x90;                                             // 0x00106cb0: addiu $sp, $sp, 0x90
}