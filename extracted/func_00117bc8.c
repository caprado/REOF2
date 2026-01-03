void func_00117bc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x80;                                            // 0x00117bc8: addiu $sp, $sp, -0x80
    v0 = *(int32_t*)((s1) + 4);                                 // 0x00117bec: lw $v0, 4($s1)
    a0 = *(int32_t*)((s1) + 0x24);                              // 0x00117bf0: lw $a0, 0x24($s1)
    a1 = *(int32_t*)((s1) + 8);                                 // 0x00117bf4: lw $a1, 8($s1)
    /* call function at address in v0 */                        // 0x00117bf8: jalr $v0
    a2 = *(int32_t*)((s1) + 0xc);                               // 0x00117bfc: lw $a2, 0xc($s1)
    /* bnezl $s2, 0x117c0c */                                   // 0x00117c04: bnezl $s2, 0x117c0c
    s4 = *(int32_t*)((s1) + 0x2c);                              // 0x00117c08: lw $s4, 0x2c($s1)
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x00117c0c: lw $a1, 0xc($s1)
    if (a1 <= 0) goto label_0x117c20;                           // 0x00117c10: blez $a1, 0x117c20
    /* nop */                                                   // 0x00117c14: nop 
    func_00116c90();  // 116c90                                // 0x00117c18: jal 0x116c90
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00117c1c: lw $a0, 8($s1)
label_0x117c20:
    if (s4 <= 0) goto label_0x117c30;                           // 0x00117c20: blez $s4, 0x117c30
    func_00116c90();  // 116c90                                // 0x00117c28: jal 0x116c90
label_0x117c30:
    func_0011d320();  // 11d320                                // 0x00117c30: jal 0x11d320
    /* nop */                                                   // 0x00117c34: nop 
    a1 = *(int32_t*)((s1) + 0x34);                              // 0x00117c38: lw $a1, 0x34($s1)
    v0 = a1 & 4;                                                // 0x00117c3c: andi $v0, $a1, 4
    if (v0 == 0) goto label_0x117c5c;                           // 0x00117c40: beqz $v0, 0x117c5c
    a1 = (unsigned)a1 >> 0x10;                                  // 0x00117c44: srl $a1, $a1, 0x10
    a0 = 0x25 << 16;                                            // 0x00117c48: lui $a0, 0x25
    func_00117000();  // 117000                                // 0x00117c4c: jal 0x117000
    a0 = a0 + -0x1ec0;                                          // 0x00117c50: addiu $a0, $a0, -0x1ec0
    goto label_0x117c6c;                                        // 0x00117c54: b 0x117c6c
label_0x117c5c:
    a0 = 0x25 << 16;                                            // 0x00117c5c: lui $a0, 0x25
    func_00116fd0();  // 116fd0                                // 0x00117c60: jal 0x116fd0
    a0 = a0 + -0x1ec0;                                          // 0x00117c64: addiu $a0, $a0, -0x1ec0
label_0x117c6c:
    func_0011d378();  // 11d378                                // 0x00117c6c: jal 0x11d378
    /* nop */                                                   // 0x00117c70: nop 
    v1 = 0x8000 << 16;                                          // 0x00117c74: lui $v1, 0x8000
    a0 = *(int32_t*)((s1) + 0x1c);                              // 0x00117c78: lw $a0, 0x1c($s1)
    v1 = v1 | 0xa;                                              // 0x00117c7c: ori $v1, $v1, 0xa
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x00117c80: sw $v1, 0x20($s0)
    *(uint32_t*)((s0) + 0x1c) = a0;                             // 0x00117c84: sw $a0, 0x1c($s0)
    v0 = *(int32_t*)((s1) + 0x30);                              // 0x00117c88: lw $v0, 0x30($s1)
    /* beqzl $v0, 0x117cc8 */                                   // 0x00117c8c: beqzl $v0, 0x117cc8
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x00117c90: sw $zero, 0x18($s0)
    /* nop */                                                   // 0x00117c94: nop 
label_0x117c98:
    a0 = 0x8000 << 16;                                          // 0x00117c98: lui $a0, 0x8000
    t0 = *(int32_t*)((s1) + 0x28);                              // 0x00117c9c: lw $t0, 0x28($s1)
    a0 = a0 | 8;                                                // 0x00117ca0: ori $a0, $a0, 8
    a2 = 0x40;                                                  // 0x00117ca8: addiu $a2, $zero, 0x40
    func_00116ac8();  // 116ac8                                // 0x00117cb0: jal 0x116ac8
    if (v0 == 0) goto label_0x117c98;                           // 0x00117cb8: beqz $v0, 0x117c98
    goto label_0x117d74;                                        // 0x00117cc0: b 0x117d74
    if (s4 <= 0) goto label_0x117cec;                           // 0x00117ccc: blez $s4, 0x117cec
    *(uint32_t*)((s0) + 0x10) = 0;                              // 0x00117cd0: sw $zero, 0x10($s0)
    v0 = *(int32_t*)((s1) + 0x28);                              // 0x00117cd4: lw $v0, 0x28($s1)
    s3 = 1;                                                     // 0x00117cd8: addiu $s3, $zero, 1
    local_0 = s2;                                               // 0x00117cdc: sw $s2, 0($sp)
    local_4 = v0;                                               // 0x00117ce0: sw $v0, 4($sp)
    local_8 = s4;                                               // 0x00117ce4: sw $s4, 8($sp)
    local_c = 0;                                                // 0x00117ce8: sw $zero, 0xc($sp)
label_0x117cec:
    a1 = s3 << 4;                                               // 0x00117cec: sll $a1, $s3, 4
    a0 = *(int32_t*)((s1) + 0x20);                              // 0x00117cf0: lw $a0, 0x20($s1)
    v1 = sp + a1;                                               // 0x00117cf4: addu $v1, $sp, $a1
    v0 = sp + 4;                                                // 0x00117cf8: addiu $v0, $sp, 4
    g_80000000 = s0;  // Global at 0x80000000                   // 0x00117cfc: sw $s0, 0($v1)
    v0 = v0 + a1;                                               // 0x00117d00: addu $v0, $v0, $a1
    *(uint32_t*)(v0) = a0;                                      // 0x00117d04: sw $a0, 0($v0)
    v1 = sp + 8;                                                // 0x00117d08: addiu $v1, $sp, 8
    v1 = v1 + a1;                                               // 0x00117d0c: addu $v1, $v1, $a1
    a0 = 0x40;                                                  // 0x00117d10: addiu $a0, $zero, 0x40
    v0 = sp + 0xc;                                              // 0x00117d14: addiu $v0, $sp, 0xc
    g_80000000 = a0;  // Global at 0x80000000                   // 0x00117d18: sw $a0, 0($v1)
    v0 = v0 + a1;                                               // 0x00117d1c: addu $v0, $v0, $a1
    s3 = s3 + 1;                                                // 0x00117d20: addiu $s3, $s3, 1
    *(uint32_t*)(v0) = 0;                                       // 0x00117d24: sw $zero, 0($v0)
    /* nop */                                                   // 0x00117d2c: nop 
    isceSifSetDma();  // 0x1146a0                               // 0x00117d30: jal 0x1146a0
    if (v0 != 0) goto label_0x117d70;                           // 0x00117d38: bnez $v0, 0x117d70
    v1 = 0x10 << 16;                                            // 0x00117d40: lui $v1, 0x10
    a0 = -1;                                                    // 0x00117d44: addiu $a0, $zero, -1
label_0x117d48:
    v1 = v1 + -1;                                               // 0x00117d48: addiu $v1, $v1, -1
    /* nop */                                                   // 0x00117d4c: nop 
    /* nop */                                                   // 0x00117d50: nop 
    /* nop */                                                   // 0x00117d54: nop 
    /* nop */                                                   // 0x00117d58: nop 
    if (v1 != a0) goto label_0x117d48;                          // 0x00117d5c: bne $v1, $a0, 0x117d48
    /* nop */                                                   // 0x00117d60: nop 
    /* beqzl $v0, 0x117d30 */                                   // 0x00117d64: beqzl $v0, 0x117d30
label_0x117d70:
label_0x117d74:
    return;                                                     // 0x00117d84: jr $ra
    sp = sp + 0x80;                                             // 0x00117d88: addiu $sp, $sp, 0x80
}