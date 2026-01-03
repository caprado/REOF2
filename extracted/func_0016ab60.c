void func_0016ab60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_20, local_24, local_28, local_4, local_8, local_c;
    
    sp = sp + -0x80;                                            // 0x0016ab60: addiu $sp, $sp, -0x80
    func_00166c90();  // 166c90                                // 0x0016aba0: jal 0x166c90
    if (v0 != 0) goto label_0x16ac58;                           // 0x0016aba8: bnez $v0, 0x16ac58
    s0 = local_4;                                               // 0x0016abb0: lw $s0, 4($sp)
    v1 = local_c;                                               // 0x0016abb4: lw $v1, 0xc($sp)
    s3 = local_0;                                               // 0x0016abb8: lw $s3, 0($sp)
    a0 = (s0 < s1) ? 1 : 0;                                     // 0x0016abbc: slt $a0, $s0, $s1
    v1 = s0 + v1;                                               // 0x0016abc0: addu $v1, $s0, $v1
    s4 = local_8;                                               // 0x0016abc4: lw $s4, 8($sp)
    v1 = (v1 < s1) ? 1 : 0;                                     // 0x0016abc8: slt $v1, $v1, $s1
    if (v1 != 0) goto label_0x16ac54;                           // 0x0016abcc: bnez $v1, 0x16ac54
    s5 = local_14;                                              // 0x0016abd0: lw $s5, 0x14($sp)
    if (a0 != 0) goto label_0x16abf0;                           // 0x0016abd4: bnez $a0, 0x16abf0
    func_00155b20();  // 155b20                                // 0x0016abe0: jal 0x155b20
    goto label_0x16ac10;                                        // 0x0016abe8: b 0x16ac10
label_0x16abf0:
    func_00155b20();  // 155b20                                // 0x0016abf4: jal 0x155b20
    a1 = s2 + s0;                                               // 0x0016ac00: addu $a1, $s2, $s0
    func_00155b20();  // 155b20                                // 0x0016ac04: jal 0x155b20
    a2 = s1 - s0;                                               // 0x0016ac08: subu $a2, $s1, $s0
label_0x16ac10:
    func_00166d88();  // 166d88                                // 0x0016ac18: jal 0x166d88
    /* bnezl $v0, 0x16ac58 */                                   // 0x0016ac20: bnezl $v0, 0x16ac58
    if (fp < 0) goto label_0x16ac50;                            // 0x0016ac28: bltz $fp, 0x16ac50
    a2 = sp + 0x20;                                             // 0x0016ac34: addiu $a2, $sp, 0x20
    local_20 = fp;                                              // 0x0016ac38: sw $fp, 0x20($sp)
    local_24 = s3;                                              // 0x0016ac3c: sw $s3, 0x24($sp)
    func_00173ed8();  // 173ed8                                // 0x0016ac40: jal 0x173ed8
    local_28 = s1;                                              // 0x0016ac44: sw $s1, 0x28($sp)
    if (v0 != 0) goto label_0x16ac58;                           // 0x0016ac48: bnez $v0, 0x16ac58
label_0x16ac50:
    v0 = 1;                                                     // 0x0016ac50: addiu $v0, $zero, 1
label_0x16ac54:
label_0x16ac58:
    return;                                                     // 0x0016ac7c: jr $ra
    sp = sp + 0x80;                                             // 0x0016ac80: addiu $sp, $sp, 0x80
}