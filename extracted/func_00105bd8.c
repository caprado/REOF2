void func_00105bd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00105bd8: addiu $sp, $sp, -0x30
    func_00107d30();  // 107d30                                // 0x00105c00: jal 0x107d30
    v0 = 0x1f << 16;                                            // 0x00105c08: lui $v0, 0x1f
    a2 = -4;                                                    // 0x00105c0c: addiu $a2, $zero, -4
    s4 = v0 + -0x200;                                           // 0x00105c10: addiu $s4, $v0, -0x200
    v1 = g_001efe08;  // Global at 0x001efe08                   // 0x00105c18: lw $v1, 8($s4)
    v0 = g_001f0004;  // Global at 0x001f0004                   // 0x00105c1c: lw $v0, 4($v1)
    v0 = v0 & a2;                                               // 0x00105c20: and $v0, $v0, $a2
    v0 = (s0 < 0x1000) ? 1 : 0;                                 // 0x00105c40: slti $v0, $s0, 0x1000
    if (v0 != 0) goto label_0x105ce0;                           // 0x00105c44: bnez $v0, 0x105ce0
    func_0010a260();  // 10a260                                // 0x00105c4c: jal 0x10a260
    v1 = g_001efe08;  // Global at 0x001efe08                   // 0x00105c54: lw $v1, 8($s4)
    v1 = v1 + a1;                                               // 0x00105c60: addu $v1, $v1, $a1
    if (v0 != v1) goto label_0x105ce0;                          // 0x00105c64: bne $v0, $v1, 0x105ce0
    func_0010a260();  // 10a260                                // 0x00105c78: jal 0x10a260
    a1 = -s3;                                                   // 0x00105c7c: negu $a1, $s3
    v1 = 0x1f << 16;                                            // 0x00105c84: lui $v1, 0x1f
    a2 = -1;                                                    // 0x00105c88: addiu $a2, $zero, -1
    if (v0 != a2) goto label_0x105cf0;                          // 0x00105c90: bne $v0, $a2, 0x105cf0
    a3 = v1 + 0x230;                                            // 0x00105c94: addiu $a3, $v1, 0x230
    func_0010a260();  // 10a260                                // 0x00105c98: jal 0x10a260
    /* nop */                                                   // 0x00105c9c: nop 
    a2 = g_001efe08;  // Global at 0x001efe08                   // 0x00105ca0: lw $a2, 8($s4)
    v0 = 1;                                                     // 0x00105ca8: addiu $v0, $zero, 1
    s2 = a3 - a2;                                               // 0x00105cac: subu $s2, $a3, $a2
    v0 = s2 | v0;                                               // 0x00105cb0: or $v0, $s2, $v0
    v1 = (s2 < 0x10) ? 1 : 0;                                   // 0x00105cb4: slti $v1, $s2, 0x10
    if (v1 != 0) goto label_0x105ce0;                           // 0x00105cc0: bnez $v1, 0x105ce0
    v0 = 0x1f << 16;                                            // 0x00105cc8: lui $v0, 0x1f
    v1 = g_001f0218;  // Global at 0x001f0218                   // 0x00105ccc: lw $v1, 0x218($v0)
    v0 = 0x1f << 16;                                            // 0x00105cd0: lui $v0, 0x1f
    v1 = a3 - v1;                                               // 0x00105cd4: subu $v1, $a3, $v1
    g_001f0230 = v1;  // Global at 0x001f0230                   // 0x00105cd8: sw $v1, 0x230($v0)
    *(uint32_t*)((a2) + 4) = a1;                                // 0x00105cdc: sw $a1, 4($a2)
label_0x105ce0:
    func_00107db0();  // 107db0                                // 0x00105ce0: jal 0x107db0
    /* nop */                                                   // 0x00105ce4: nop 
    goto label_0x105d24;                                        // 0x00105ce8: b 0x105d24
label_0x105cf0:
    v0 = 1;                                                     // 0x00105cf0: addiu $v0, $zero, 1
    a1 = g_001efe08;  // Global at 0x001efe08                   // 0x00105cf8: lw $a1, 8($s4)
    v1 = v1 | v0;                                               // 0x00105cfc: or $v1, $v1, $v0
    *(uint32_t*)((a1) + 4) = v1;                                // 0x00105d0c: sw $v1, 4($a1)
    v0 = g_001f0230;  // Global at 0x001f0230                   // 0x00105d10: lw $v0, 0($a3)
    v0 = v0 - s3;                                               // 0x00105d14: subu $v0, $v0, $s3
    func_00107db0();  // 107db0                                // 0x00105d18: jal 0x107db0
    g_001f0230 = v0;  // Global at 0x001f0230                   // 0x00105d1c: sw $v0, 0($a3)
    v0 = 1;                                                     // 0x00105d20: addiu $v0, $zero, 1
label_0x105d24:
    return;                                                     // 0x00105d3c: jr $ra
    sp = sp + 0x30;                                             // 0x00105d40: addiu $sp, $sp, 0x30
}