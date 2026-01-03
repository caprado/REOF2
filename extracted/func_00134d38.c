void func_00134d38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_8;
    
    sp = sp + -0x40;                                            // 0x00134d38: addiu $sp, $sp, -0x40
    s1 = 1;                                                     // 0x00134d48: addiu $s1, $zero, 1
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x00134d50: lw $v1, 0xc($s0)
    if (v1 != s1) goto label_0x134d68;                          // 0x00134d54: bne $v1, $s1, 0x134d68
    v0 = 2;                                                     // 0x00134d58: addiu $v0, $zero, 2
    v1 = 2;                                                     // 0x00134d5c: addiu $v1, $zero, 2
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00134d60: sw $v0, 0xc($s0)
    v0 = 2;                                                     // 0x00134d64: addiu $v0, $zero, 2
label_0x134d68:
    if (v1 != v0) goto label_0x134e1c;                          // 0x00134d68: bnel $v1, $v0, 0x134e1c
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00134d70: lw $v0, 0x14($s0)
    if (v0 != s1) goto label_0x134db0;                          // 0x00134d74: bnel $v0, $s1, 0x134db0
    v1 = *(int16_t*)((s0) + 0x36);                              // 0x00134d78: lh $v1, 0x36($s0)
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x00134d7c: lw $a0, 0x18($s0)
    a3 = s0 + 0x28;                                             // 0x00134d80: addiu $a3, $s0, 0x28
    a1 = *(int32_t*)((s0) + 0x1c);                              // 0x00134d84: lw $a1, 0x1c($s0)
    t2 = s0 + 0x34;                                             // 0x00134d88: addiu $t2, $s0, 0x34
    a2 = *(int32_t*)((s0) + 0x20);                              // 0x00134d8c: lw $a2, 0x20($s0)
    t0 = *(int16_t*)((s0) + 0x30);                              // 0x00134d90: lh $t0, 0x30($s0)
    t1 = *(int16_t*)((s0) + 0x32);                              // 0x00134d94: lh $t1, 0x32($s0)
    t3 = *(int16_t*)((s0) + 0x36);                              // 0x00134d98: lh $t3, 0x36($s0)
    v0 = *(int16_t*)((s0) + 0x38);                              // 0x00134d9c: lh $v0, 0x38($s0)
    func_00127398();  // 127398                                // 0x00134da0: jal 0x127398
    local_0 = v0;                                               // 0x00134da4: sw $v0, 0($sp)
    goto label_0x134e10;                                        // 0x00134da8: b 0x134e10
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x00134dac: sw $v0, 0x10($s0)
label_0x134db0:
    t4 = s0 + 0x34;                                             // 0x00134db0: addiu $t4, $s0, 0x34
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x00134db4: lw $a0, 0x18($s0)
    a3 = s0 + 0x28;                                             // 0x00134db8: addiu $a3, $s0, 0x28
    a1 = *(int32_t*)((s0) + 0x1c);                              // 0x00134dbc: lw $a1, 0x1c($s0)
    t1 = s0 + 0x2c;                                             // 0x00134dc0: addiu $t1, $s0, 0x2c
    a2 = *(int32_t*)((s0) + 0x20);                              // 0x00134dc4: lw $a2, 0x20($s0)
    t0 = *(int32_t*)((s0) + 0x24);                              // 0x00134dc8: lw $t0, 0x24($s0)
    t2 = *(int16_t*)((s0) + 0x30);                              // 0x00134dcc: lh $t2, 0x30($s0)
    t3 = *(int16_t*)((s0) + 0x32);                              // 0x00134dd0: lh $t3, 0x32($s0)
    v0 = *(int16_t*)((s0) + 0x38);                              // 0x00134dd4: lh $v0, 0x38($s0)
    local_8 = v1;                                               // 0x00134dd8: sw $v1, 8($sp)
    local_0 = t4;                                               // 0x00134ddc: sw $t4, 0($sp)
    func_00127c88();  // 127c88                                // 0x00134de0: jal 0x127c88
    local_10 = v0;                                              // 0x00134de4: sw $v0, 0x10($sp)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x00134de8: srl $v1, $v0, 0x1f
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x00134dec: sw $v0, 0x10($s0)
    v1 = v0 + v1;                                               // 0x00134df0: addu $v1, $v0, $v1
    v1 = v1 >> 1;                                               // 0x00134df4: sra $v1, $v1, 1
    v1 = v1 << 1;                                               // 0x00134df8: sll $v1, $v1, 1
    v0 = v0 - v1;                                               // 0x00134dfc: subu $v0, $v0, $v1
    if (v0 != s1) goto label_0x134e14;                          // 0x00134e00: bne $v0, $s1, 0x134e14
    v0 = 3;                                                     // 0x00134e04: addiu $v0, $zero, 3
    func_00134d28();  // 134d28                                // 0x00134e08: jal 0x134d28
    /* nop */                                                   // 0x00134e0c: nop 
label_0x134e10:
    v0 = 3;                                                     // 0x00134e10: addiu $v0, $zero, 3
label_0x134e14:
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00134e14: sw $v0, 0xc($s0)
label_0x134e1c:
    return;                                                     // 0x00134e24: jr $ra
    sp = sp + 0x40;                                             // 0x00134e28: addiu $sp, $sp, 0x40
}