void func_00101c58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00101c58: addiu $sp, $sp, -0x50
    s1 = 0x1f << 16;                                            // 0x00101c64: lui $s1, 0x1f
    s2 = s1 + -0xac0;                                           // 0x00101c74: addiu $s2, $s1, -0xac0
    func_00100ea8();  // 100ea8                                // 0x00101c78: jal 0x100ea8
    a0 = 0x22;                                                  // 0x00101c7c: addiu $a0, $zero, 0x22
    /* bnezl $v0, 0x101c90 */                                   // 0x00101c80: bnezl $v0, 0x101c90
    g_001ef540 = s0;  // Global at 0x001ef540                   // 0x00101c84: sw $s0, -0xac0($s1)
    goto label_0x101d10;                                        // 0x00101c88: b 0x101d10
    func_00116c90();  // 116c90                                // 0x00101c94: jal 0x116c90
    a1 = 4;                                                     // 0x00101c98: addiu $a1, $zero, 4
    a0 = 0x1f << 16;                                            // 0x00101c9c: lui $a0, 0x1f
    a2 = 0x1f << 16;                                            // 0x00101ca0: lui $a2, 0x1f
    v1 = 0x1f << 16;                                            // 0x00101ca4: lui $v1, 0x1f
    v0 = 0x1f << 16;                                            // 0x00101ca8: lui $v0, 0x1f
    t0 = g_001efaac;  // Global at 0x001efaac                   // 0x00101cac: lw $t0, -0x554($a0)
    s0 = v0 + -0xf00;                                           // 0x00101cb0: addiu $s0, $v0, -0xf00
    a0 = 0x1f << 16;                                            // 0x00101cb4: lui $a0, 0x1f
    t2 = g_001efab0;  // Global at 0x001efab0                   // 0x00101cb8: lw $t2, -0x550($a2)
    a1 = g_001efaa8;  // Global at 0x001efaa8                   // 0x00101cbc: lw $a1, -0x558($v1)
    a0 = a0 + -0x580;                                           // 0x00101cc0: addiu $a0, $a0, -0x580
    local_0 = 0;                                                // 0x00101cc8: sw $zero, 0($sp)
    func_001176a8();  // 1176a8                                // 0x00101cd4: jal 0x1176a8
    if (v0 >= 0) goto label_0x101cf8;                           // 0x00101cdc: bgez $v0, 0x101cf8
    v1 = 0x1f << 16;                                            // 0x00101ce0: lui $v1, 0x1f
    v0 = 0x1f << 16;                                            // 0x00101ce4: lui $v0, 0x1f
    iSignalSema();  // 0x114300                                 // 0x00101ce8: jal 0x114300
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101cec: lw $a0, -0x20d4($v0)
    goto label_0x101d10;                                        // 0x00101cf0: b 0x101d10
label_0x101cf8:
    v0 = 0x2000 << 16;                                          // 0x00101cf8: lui $v0, 0x2000
    v0 = s0 | v0;                                               // 0x00101cfc: or $v0, $s0, $v0
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101d00: lw $a0, -0x20d4($v1)
    iSignalSema();  // 0x114300                                 // 0x00101d04: jal 0x114300
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00101d08: lw $s0, 0($v0)
label_0x101d10:
    return;                                                     // 0x00101d20: jr $ra
    sp = sp + 0x50;                                             // 0x00101d24: addiu $sp, $sp, 0x50
}