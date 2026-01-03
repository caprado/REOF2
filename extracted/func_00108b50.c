void func_00108b50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x00108b50: addiu $sp, $sp, -0x50
    a1 = 1;                                                     // 0x00108b5c: addiu $a1, $zero, 1
    func_00107e00();  // 107e00                                // 0x00108b7c: jal 0x107e00
    v0 = 0x7fff << 16;                                          // 0x00108b88: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x00108b90: ori $v0, $v0, 0xffff
    v1 = 0xffff << 16;                                          // 0x00108b94: lui $v1, 0xffff
    v0 = a0 & v0;                                               // 0x00108b9c: and $v0, $a0, $v0
    s0 = s0 & v1;                                               // 0x00108ba0: and $s0, $s0, $v1
    v1 = 0xf << 16;                                             // 0x00108ba4: lui $v1, 0xf
    v1 = v1 | 0xffff;                                           // 0x00108bac: ori $v1, $v1, 0xffff
    s0 = s0 | v0;                                               // 0x00108bb0: or $s0, $s0, $v0
    a0 = a0 & v1;                                               // 0x00108bb4: and $a0, $a0, $v1
    local_4 = a0;                                               // 0x00108bbc: sw $a0, 4($sp)
    if (s2 == 0) goto label_0x108bd4;                           // 0x00108bc0: beqz $s2, 0x108bd4
    s1 = s3 + 0x14;                                             // 0x00108bc4: addiu $s1, $s3, 0x14
    v0 = 0x10 << 16;                                            // 0x00108bc8: lui $v0, 0x10
    v0 = a0 | v0;                                               // 0x00108bcc: or $v0, $a0, $v0
    local_4 = v0;                                               // 0x00108bd0: sw $v0, 4($sp)
label_0x108bd4:
    if (a1 == 0) goto label_0x108c48;                           // 0x00108bdc: beqz $a1, 0x108c48
    func_00108190();  // 108190                                // 0x00108be4: jal 0x108190
    local_0 = a1;                                               // 0x00108be8: sw $a1, 0($sp)
    if (a1 == 0) goto label_0x108c20;                           // 0x00108bf0: beqz $a1, 0x108c20
    v0 = local_4;                                               // 0x00108bf4: lw $v0, 4($sp)
    a0 = -a1;                                                   // 0x00108bf8: negu $a0, $a1
    v1 = local_0;                                               // 0x00108bfc: lw $v1, 0($sp)
    v0 = v0 << a0;                                              // 0x00108c00: sllv $v0, $v0, $a0
    v1 = v1 | v0;                                               // 0x00108c04: or $v1, $v1, $v0
    *(uint32_t*)(s1) = v1;                                      // 0x00108c08: sw $v1, 0($s1)
    v0 = local_4;                                               // 0x00108c0c: lw $v0, 4($sp)
    v0 = (unsigned)v0 >> a1;                                    // 0x00108c10: srlv $v0, $v0, $a1
    goto label_0x108c28;                                        // 0x00108c14: b 0x108c28
    local_4 = v0;                                               // 0x00108c18: sw $v0, 4($sp)
    /* nop */                                                   // 0x00108c1c: nop 
label_0x108c20:
    v0 = local_0;                                               // 0x00108c20: lw $v0, 0($sp)
    *(uint32_t*)(s1) = v0;                                      // 0x00108c24: sw $v0, 0($s1)
label_0x108c28:
    a0 = local_4;                                               // 0x00108c28: lw $a0, 4($sp)
    v1 = 1;                                                     // 0x00108c2c: addiu $v1, $zero, 1
    v0 = 2;                                                     // 0x00108c30: addiu $v0, $zero, 2
    if (a0 == 0) v0 = v1;                                       // 0x00108c34: movz $v0, $v1, $a0
    *(uint32_t*)((s1) + 4) = a0;                                // 0x00108c38: sw $a0, 4($s1)
    goto label_0x108c68;                                        // 0x00108c40: b 0x108c68
    *(uint32_t*)((s3) + 0x10) = v0;                             // 0x00108c44: sw $v0, 0x10($s3)
label_0x108c48:
    a0 = sp + 4;                                                // 0x00108c48: addiu $a0, $sp, 4
    func_00108190();  // 108190                                // 0x00108c4c: jal 0x108190
    s0 = 1;                                                     // 0x00108c50: addiu $s0, $zero, 1
    a0 = 1;                                                     // 0x00108c54: addiu $a0, $zero, 1
    v1 = local_4;                                               // 0x00108c58: lw $v1, 4($sp)
    a1 = v0 + 0x20;                                             // 0x00108c5c: addiu $a1, $v0, 0x20
    *(uint32_t*)(s1) = v1;                                      // 0x00108c60: sw $v1, 0($s1)
    *(uint32_t*)((s3) + 0x10) = a0;                             // 0x00108c64: sw $a0, 0x10($s3)
label_0x108c68:
    if (s2 == 0) goto label_0x108c88;                           // 0x00108c68: beqz $s2, 0x108c88
    v0 = s2 + a1;                                               // 0x00108c6c: addu $v0, $s2, $a1
    v1 = 0x35;                                                  // 0x00108c70: addiu $v1, $zero, 0x35
    v1 = v1 - a1;                                               // 0x00108c74: subu $v1, $v1, $a1
    v0 = v0 + -0x433;                                           // 0x00108c78: addiu $v0, $v0, -0x433
    goto label_0x108ca8;                                        // 0x00108c7c: b 0x108ca8
    *(uint32_t*)(s4) = v0;                                      // 0x00108c80: sw $v0, 0($s4)
    /* nop */                                                   // 0x00108c84: nop 
label_0x108c88:
    v1 = a1 + -0x432;                                           // 0x00108c88: addiu $v1, $a1, -0x432
    v0 = s0 << 2;                                               // 0x00108c8c: sll $v0, $s0, 2
    *(uint32_t*)(s4) = v1;                                      // 0x00108c90: sw $v1, 0($s4)
    v0 = s1 + v0;                                               // 0x00108c94: addu $v0, $s1, $v0
    func_00108110();  // 108110                                // 0x00108c98: jal 0x108110
    a0 = g_000ffbc9;  // Global at 0x000ffbc9                   // 0x00108c9c: lw $a0, -4($v0)
    v1 = s0 << 5;                                               // 0x00108ca0: sll $v1, $s0, 5
    v1 = v1 - v0;                                               // 0x00108ca4: subu $v1, $v1, $v0
label_0x108ca8:
    *(uint32_t*)(s5) = v1;                                      // 0x00108ca8: sw $v1, 0($s5)
    return;                                                     // 0x00108ccc: jr $ra
    sp = sp + 0x50;                                             // 0x00108cd0: addiu $sp, $sp, 0x50
}