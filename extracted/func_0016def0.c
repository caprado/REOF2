void func_0016def0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_c;
    
    sp = sp + -0x50;                                            // 0x0016def0: addiu $sp, $sp, -0x50
    s2 = s0 + 0x90c;                                            // 0x0016df0c: addiu $s2, $s0, 0x90c
    v1 = *(int32_t*)((s2) + 0x10);                              // 0x0016df30: lw $v1, 0x10($s2)
    if (v1 != 0) goto label_0x16dff8;                           // 0x0016df34: bnez $v1, 0x16dff8
    s3 = *(int32_t*)((s0) + 0x1b30);                            // 0x0016df38: lw $s3, 0x1b30($s0)
    func_00159038();  // 0x158fd8                                // 0x0016df3c: jal 0x158fd8
    /* nop */                                                   // 0x0016df40: nop 
    if (v0 == 0) goto label_0x16df68;                           // 0x0016df44: beqz $v0, 0x16df68
    a1 = 0xff00 << 16;                                          // 0x0016df4c: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x0016df54: jal 0x1698d0
    a1 = a1 | 0xf16;                                            // 0x0016df58: ori $a1, $a1, 0xf16
    goto label_0x16dffc;                                        // 0x0016df5c: b 0x16dffc
    /* nop */                                                   // 0x0016df64: nop 
label_0x16df68:
    a1 = sp + 4;                                                // 0x0016df68: addiu $a1, $sp, 4
    a2 = sp + 8;                                                // 0x0016df6c: addiu $a2, $sp, 8
    func_00159100();  // 0x159038                                // 0x0016df70: jal 0x159038
    a3 = sp + 0xc;                                              // 0x0016df74: addiu $a3, $sp, 0xc
    func_001752f8();  // 0x1752e8                                // 0x0016df7c: jal 0x1752e8
    a1 = 0x3c;                                                  // 0x0016df80: addiu $a1, $zero, 0x3c
    if (v0 != 0) goto label_0x16df98;                           // 0x0016df88: bnez $v0, 0x16df98
    a1 = 1;                                                     // 0x0016df8c: addiu $a1, $zero, 1
    goto label_0x16dfc8;                                        // 0x0016df90: b 0x16dfc8
    *(uint32_t*)((s3) + 0xe8) = 0;                              // 0x0016df94: sw $zero, 0xe8($s3)
label_0x16df98:
    func_001671e8();  // 0x1671c8                                // 0x0016df98: jal 0x1671c8
    /* nop */                                                   // 0x0016df9c: nop 
    v1 = local_c;                                               // 0x0016dfa0: lw $v1, 0xc($sp)
    v0 = -1;                                                    // 0x0016dfa8: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x16dfc0;                          // 0x0016dfac: bne $v1, $v0, 0x16dfc0
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x0016dfb0: slt $v0, $v1, $a0
    v1 = local_4;                                               // 0x0016dfb4: lw $v1, 4($sp)
    local_c = v1;                                               // 0x0016dfb8: sw $v1, 0xc($sp)
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x0016dfbc: slt $v0, $v1, $a0
label_0x16dfc0:
    if (v0 == 0) v1 = a0;                                       // 0x0016dfc0: movz $v1, $a0, $v0
    *(uint32_t*)((s3) + 0xe8) = v1;                             // 0x0016dfc4: sw $v1, 0xe8($s3)
label_0x16dfc8:
    a1 = local_0;                                               // 0x0016dfc8: lw $a1, 0($sp)
    func_0016e138();  // 0x16e020                                // 0x0016dfd0: jal 0x16e020
    a1 = local_0;                                               // 0x0016dfdc: lw $a1, 0($sp)
    func_0016e170();  // 0x16e138                                // 0x0016dfe4: jal 0x16e138
    a3 = local_4;                                               // 0x0016dfe8: lw $a3, 4($sp)
    func_0016e328();  // 0x16e170                                // 0x0016dff0: jal 0x16e170
label_0x16dff8:
label_0x16dffc:
    return;                                                     // 0x0016e014: jr $ra
    sp = sp + 0x50;                                             // 0x0016e018: addiu $sp, $sp, 0x50
}