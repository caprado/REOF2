void func_00172b38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x00172b38: addiu $sp, $sp, -0x30
    func_00172cb8();  // 0x172c18                                // 0x00172b48: jal 0x172c18
    if (v0 != 0) goto label_0x172ba8;                           // 0x00172b54: bnez $v0, 0x172ba8
    a1 = 5;                                                     // 0x00172b58: addiu $a1, $zero, 5
    func_001752f8();  // 0x1752e8                                // 0x00172b5c: jal 0x1752e8
    /* nop */                                                   // 0x00172b60: nop 
    v1 = 1;                                                     // 0x00172b64: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x172b80;                          // 0x00172b68: bne $v0, $v1, 0x172b80
    func_00172d70();  // 0x172cb8                                // 0x00172b70: jal 0x172cb8
    /* nop */                                                   // 0x00172b74: nop 
    if (v0 != 0) goto label_0x172c04;                           // 0x00172b78: bnez $v0, 0x172c04
    v0 = 1;                                                     // 0x00172b7c: addiu $v0, $zero, 1
label_0x172b80:
    func_001752f8();  // 0x1752e8                                // 0x00172b84: jal 0x1752e8
    a1 = 6;                                                     // 0x00172b88: addiu $a1, $zero, 6
    v1 = 1;                                                     // 0x00172b8c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x172bb0;                          // 0x00172b90: bne $v0, $v1, 0x172bb0
    func_00172df0();  // 0x172d70                                // 0x00172b98: jal 0x172d70
    /* nop */                                                   // 0x00172b9c: nop 
    /* beqzl $v0, 0x172bb4 */                                   // 0x00172ba0: beqzl $v0, 0x172bb4
label_0x172ba8:
    goto label_0x172c04;                                        // 0x00172ba8: b 0x172c04
    v0 = 1;                                                     // 0x00172bac: addiu $v0, $zero, 1
label_0x172bb0:
    a2 = sp + 4;                                                // 0x00172bb4: addiu $a2, $sp, 4
    func_00176060();  // 0x176010                                // 0x00172bb8: jal 0x176010
    v1 = s1 + 0xcc0;                                            // 0x00172bc0: addiu $v1, $s1, 0xcc0
    s0 = *(int32_t*)((v1) + 0x244);                             // 0x00172bc4: lw $s0, 0x244($v1)
    a1 = 0x45;                                                  // 0x00172bcc: addiu $a1, $zero, 0x45
    func_001752f8();  // 0x1752e8                                // 0x00172bd0: jal 0x1752e8
    s1 = *(int32_t*)((v1) + 0x240);                             // 0x00172bd4: lw $s1, 0x240($v1)
    a2 = 0xf << 16;                                             // 0x00172bdc: lui $a2, 0xf
    func_0015b7b0();  // 0x15b740                                // 0x00172be4: jal 0x15b740
    a2 = a2 | 0x4240;                                           // 0x00172be8: ori $a2, $a2, 0x4240
    a0 = local_0;                                               // 0x00172bf0: lw $a0, 0($sp)
    a2 = s1 - v0;                                               // 0x00172bf4: subu $a2, $s1, $v0
    func_001764c8();  // 0x176438                                // 0x00172bf8: jal 0x176438
    a1 = local_4;                                               // 0x00172bfc: lw $a1, 4($sp)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00172c00: sltu $v0, $zero, $v0
label_0x172c04:
    return;                                                     // 0x00172c10: jr $ra
    sp = sp + 0x30;                                             // 0x00172c14: addiu $sp, $sp, 0x30
}