void func_001729b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x001729b8: addiu $sp, $sp, -0x30
    a1 = 0x43;                                                  // 0x001729bc: addiu $a1, $zero, 0x43
    func_001752e8();  // 1752e8                                // 0x001729d0: jal 0x1752e8
    s1 = s0 + 0x94c;                                            // 0x001729d4: addiu $s1, $s0, 0x94c
    if (v0 == 0) goto label_0x172b20;                           // 0x001729d8: beqz $v0, 0x172b20
    func_001752e8();  // 1752e8                                // 0x001729e0: jal 0x1752e8
    a1 = 0xf;                                                   // 0x001729e4: addiu $a1, $zero, 0xf
    /* beqzl $v0, 0x172b24 */                                   // 0x001729e8: beqzl $v0, 0x172b24
    v1 = *(int32_t*)((s0) + 0x50);                              // 0x001729f0: lw $v1, 0x50($s0)
    if (v1 != 0) goto label_0x172b20;                           // 0x001729f4: bnez $v1, 0x172b20
    a0 = *(int32_t*)((s0) + 0x48);                              // 0x001729fc: lw $a0, 0x48($s0)
    v1 = 4;                                                     // 0x00172a00: addiu $v1, $zero, 4
    if (a0 != v1) goto label_0x172b24;                          // 0x00172a04: bnel $a0, $v1, 0x172b24
    func_00172c18();  // 172c18                                // 0x00172a0c: jal 0x172c18
    /* bnezl $v0, 0x172b20 */                                   // 0x00172a14: bnezl $v0, 0x172b20
    func_001752e8();  // 1752e8                                // 0x00172a20: jal 0x1752e8
    a1 = 5;                                                     // 0x00172a24: addiu $a1, $zero, 5
    v1 = 1;                                                     // 0x00172a28: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x172a44;                          // 0x00172a2c: bne $v0, $v1, 0x172a44
    v1 = *(int32_t*)((s1) + 0x20);                              // 0x00172a34: lw $v1, 0x20($s1)
    if (v1 == 0) goto label_0x172b20;                           // 0x00172a38: beqz $v1, 0x172b20
label_0x172a44:
    func_001752e8();  // 1752e8                                // 0x00172a44: jal 0x1752e8
    a1 = 6;                                                     // 0x00172a48: addiu $a1, $zero, 6
    v1 = 1;                                                     // 0x00172a4c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x172a6c;                          // 0x00172a50: bne $v0, $v1, 0x172a6c
    func_001679e0();  // 1679e0                                // 0x00172a58: jal 0x1679e0
    a1 = 2;                                                     // 0x00172a5c: addiu $a1, $zero, 2
    if (v0 > 0) goto label_0x172b20;                            // 0x00172a60: bgtz $v0, 0x172b20
label_0x172a6c:
    func_00177950();  // 177950                                // 0x00172a6c: jal 0x177950
    a1 = 1;                                                     // 0x00172a70: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x172a8c;                           // 0x00172a74: beqz $v0, 0x172a8c
    func_001679e0();  // 1679e0                                // 0x00172a7c: jal 0x1679e0
    if (v0 > 0) goto label_0x172b20;                            // 0x00172a84: bgtz $v0, 0x172b20
label_0x172a8c:
    func_001752e8();  // 1752e8                                // 0x00172a90: jal 0x1752e8
    a1 = 5;                                                     // 0x00172a94: addiu $a1, $zero, 5
    v1 = 1;                                                     // 0x00172a98: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x172ab8;                          // 0x00172a9c: bnel $v0, $v1, 0x172ab8
    func_00172cb8();  // 172cb8                                // 0x00172aa4: jal 0x172cb8
    if (v0 != 0) goto label_0x172b20;                           // 0x00172aac: bnez $v0, 0x172b20
label_0x172ab8:
    a2 = sp + 4;                                                // 0x00172ab8: addiu $a2, $sp, 4
    func_00176010();  // 176010                                // 0x00172abc: jal 0x176010
    v1 = s0 + 0xcc0;                                            // 0x00172ac4: addiu $v1, $s0, 0xcc0
    s1 = *(int32_t*)((v1) + 0x244);                             // 0x00172ac8: lw $s1, 0x244($v1)
    a1 = 0x44;                                                  // 0x00172ad0: addiu $a1, $zero, 0x44
    func_001752e8();  // 1752e8                                // 0x00172ad4: jal 0x1752e8
    s0 = *(int32_t*)((v1) + 0x240);                             // 0x00172ad8: lw $s0, 0x240($v1)
    a2 = 0xf << 16;                                             // 0x00172ae0: lui $a2, 0xf
    func_0015b740();  // 15b740                                // 0x00172ae8: jal 0x15b740
    a2 = a2 | 0x4240;                                           // 0x00172aec: ori $a2, $a2, 0x4240
    a0 = local_0;                                               // 0x00172af0: lw $a0, 0($sp)
    if (a0 <= 0) goto label_0x172b04;                           // 0x00172af4: blez $a0, 0x172b04
    s0 = s0 - v0;                                               // 0x00172af8: subu $s0, $s0, $v0
    if (s0 > 0) goto label_0x172b10;                            // 0x00172afc: bgtz $s0, 0x172b10
    a1 = local_4;                                               // 0x00172b00: lw $a1, 4($sp)
label_0x172b04:
    goto label_0x172b20;                                        // 0x00172b04: b 0x172b20
    /* nop */                                                   // 0x00172b0c: nop 
label_0x172b10:
    func_00176438();  // 176438                                // 0x00172b14: jal 0x176438
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00172b1c: sltiu $v0, $v0, 1
label_0x172b20:
label_0x172b24:
    return;                                                     // 0x00172b2c: jr $ra
    sp = sp + 0x30;                                             // 0x00172b30: addiu $sp, $sp, 0x30
}