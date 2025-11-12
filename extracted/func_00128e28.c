void func_00128e28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_100, local_104, local_108;
    
    sp = sp + -0x130;                                           // 0x00128e28: addiu $sp, $sp, -0x130
    a3 = sp + 0x100;                                            // 0x00128e48: addiu $a3, $sp, 0x100
    t0 = sp + 0x104;                                            // 0x00128e4c: addiu $t0, $sp, 0x104
    func_00129c30();  // 0x129ad8                                // 0x00128e54: jal 0x129ad8
    t1 = sp + 0x108;                                            // 0x00128e58: addiu $t1, $sp, 0x108
    if (v0 >= 0) goto label_0x128e70;                           // 0x00128e5c: bgez $v0, 0x128e70
    goto label_0x128ee8;                                        // 0x00128e64: b 0x128ee8
    v0 = -3;                                                    // 0x00128e68: addiu $v0, $zero, -3
    /* nop */                                                   // 0x00128e6c: nop 
label_0x128e70:
    v1 = local_100;                                             // 0x00128e70: lw $v1, 0x100($sp)
    v0 = local_104;                                             // 0x00128e74: lw $v0, 0x104($sp)
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x00128e78: sw $v1, 0x34($s1)
    func_00129c58();  // 0x129c30                                // 0x00128e7c: jal 0x129c30
    *(uint32_t*)((s1) + 0x30) = v0;                             // 0x00128e80: sw $v0, 0x30($s1)
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00128e84: sw $zero, 0x14($s1)
    a2 = *(int32_t*)((s1) + 0x34);                              // 0x00128e88: lw $a2, 0x34($s1)
    v1 = local_108;                                             // 0x00128e90: lw $v1, 0x108($sp)
    a0 = local_104;                                             // 0x00128e94: lw $a0, 0x104($sp)
    *(uint32_t*)((s1) + 0x40) = v1;                             // 0x00128e98: sw $v1, 0x40($s1)
    *(uint32_t*)((s1) + 0x38) = v0;                             // 0x00128ea4: sw $v0, 0x38($s1)
    *(uint32_t*)((s1) + 0x3c) = a0;                             // 0x00128ea8: sw $a0, 0x3c($s1)
    func_001301e0();  // 0x1301a8                                // 0x00128eac: jal 0x1301a8
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00128eb0: lw $a0, 4($s1)
    func_00130280();  // 0x130278                                // 0x00128eb4: jal 0x130278
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00128eb8: lw $a0, 4($s1)
    v1 = 4;                                                     // 0x00128ebc: addiu $v1, $zero, 4
    if (v0 != v1) goto label_0x128ed8;                          // 0x00128ec0: bnel $v0, $v1, 0x128ed8
    a0 = local_108;                                             // 0x00128ec4: lw $a0, 0x108($sp)
    func_00130278();  // 0x130220                                // 0x00128ec8: jal 0x130220
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00128ecc: lw $a0, 4($s1)
    goto label_0x128ee8;                                        // 0x00128ed0: b 0x128ee8
    v0 = -1;                                                    // 0x00128ed4: addiu $v0, $zero, -1
label_0x128ed8:
    v1 = a0 << 0xb;                                             // 0x00128edc: sll $v1, $a0, 0xb
    *(uint32_t*)((s1) + 0xc) = a0;                              // 0x00128ee0: sw $a0, 0xc($s1)
    *(uint32_t*)((s1) + 0x10) = v1;                             // 0x00128ee4: sw $v1, 0x10($s1)
label_0x128ee8:
    return;                                                     // 0x00128ef4: jr $ra
    sp = sp + 0x130;                                            // 0x00128ef8: addiu $sp, $sp, 0x130
}