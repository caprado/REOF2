void func_001f0a78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001f0a78: addiu $sp, $sp, -0x20
    a1 = 0x26;                                                  // 0x001f0a7c: addiu $a1, $zero, 0x26
    a0 = 0x8007 << 16;                                          // 0x001f0a8c: lui $a0, 0x8007
    func_000741e8();  // BIOS/System - 0x741e8                  // 0x001f0a90: jal 0x741e8
    a0 = a0 + 0x4700;                                           // 0x001f0a94: addiu $a0, $a0, 0x4700
    v0 = 0x8007 << 16;                                          // 0x001f0a98: lui $v0, 0x8007
    a1 = 0xffff << 16;                                          // 0x001f0a9c: lui $a1, 0xffff
    a2 = 0x3ff << 16;                                           // 0x001f0aa0: lui $a2, 0x3ff
    a3 = 0xc00 << 16;                                           // 0x001f0aa4: lui $a3, 0xc00
    v1 = v0 + 0x4780;                                           // 0x001f0aa8: addiu $v1, $v0, 0x4780
    a1 = a1 | 0xc402;                                           // 0x001f0ab0: ori $a1, $a1, 0xc402
    a2 = a2 | 0xffff;                                           // 0x001f0ab4: ori $a2, $a2, 0xffff
label_0x1f0ab8:
    v0 = g_80074780;  // Global at 0x80074780                   // 0x001f0ab8: lw $v0, 0($v1)
    if (s0 != v0) goto label_0x1f0adc;                          // 0x001f0abc: bnel $s0, $v0, 0x1f0adc
    a0 = a0 + 1;                                                // 0x001f0ac0: addiu $a0, $a0, 1
    if (s0 != a1) goto label_0x1f0aec;                          // 0x001f0ac4: bne $s0, $a1, 0x1f0aec
    v0 = g_80074784;  // Global at 0x80074784                   // 0x001f0ac8: lw $v0, 4($v1)
    v0 = (unsigned)v0 >> 2;                                     // 0x001f0acc: srl $v0, $v0, 2
    v0 = v0 & a2;                                               // 0x001f0ad0: and $v0, $v0, $a2
    goto label_0x1f0aec;                                        // 0x001f0ad4: b 0x1f0aec
    v0 = v0 | a3;                                               // 0x001f0ad8: or $v0, $v0, $a3
label_0x1f0adc:
    v0 = ((unsigned)a0 < (unsigned)5) ? 1 : 0;                  // 0x001f0adc: sltiu $v0, $a0, 5
    if (v0 != 0) goto label_0x1f0ab8;                           // 0x001f0ae0: bnez $v0, 0x1f0ab8
    v1 = v1 + 8;                                                // 0x001f0ae4: addiu $v1, $v1, 8
label_0x1f0aec:
    return;                                                     // 0x001f0af4: jr $ra
    sp = sp + 0x20;                                             // 0x001f0af8: addiu $sp, $sp, 0x20
}