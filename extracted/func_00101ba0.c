void func_00101ba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x00101ba0: addiu $sp, $sp, -0x40
    a0 = 0x1e;                                                  // 0x00101ba4: addiu $a0, $zero, 0x1e
    func_001010c8();  // 0x100ea8                                // 0x00101bb0: jal 0x100ea8
    if (v0 != 0) goto label_0x101bc8;                           // 0x00101bb8: bnez $v0, 0x101bc8
    v0 = 0x1f << 16;                                            // 0x00101bbc: lui $v0, 0x1f
    goto label_0x101c44;                                        // 0x00101bc0: b 0x101c44
label_0x101bc8:
    s0 = 0x1f << 16;                                            // 0x00101bc8: lui $s0, 0x1f
    s1 = v0 + -0xf00;                                           // 0x00101bcc: addiu $s1, $v0, -0xf00
    v1 = 8;                                                     // 0x00101bd0: addiu $v1, $zero, 8
    a0 = 0x1f << 16;                                            // 0x00101bd4: lui $a0, 0x1f
    g_001edf58 = v1;  // Global at 0x001edf58                   // 0x00101bd8: sw $v1, -0x20a8($s0)
    a0 = a0 + -0x580;                                           // 0x00101bdc: addiu $a0, $a0, -0x580
    local_0 = 0;                                                // 0x00101be0: sw $zero, 0($sp)
    a1 = 0x16;                                                  // 0x00101be4: addiu $a1, $zero, 0x16
    t2 = 4;                                                     // 0x00101bf8: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00101bfc: jal 0x1176a8
    if (v0 >= 0) goto label_0x101c24;                           // 0x00101c04: bgez $v0, 0x101c24
    v0 = 0x1f << 16;                                            // 0x00101c08: lui $v0, 0x1f
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101c0c: lw $a0, -0x20d4($v0)
    iSignalSema();  // 0x114300                                 // 0x00101c10: jal 0x114300
    /* nop */                                                   // 0x00101c14: nop 
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x00101c18: sw $zero, -0x20a8($s0)
    goto label_0x101c44;                                        // 0x00101c1c: b 0x101c44
label_0x101c24:
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x00101c24: sw $zero, -0x20a8($s0)
    v1 = 0x1f << 16;                                            // 0x00101c28: lui $v1, 0x1f
    v0 = 0x2000 << 16;                                          // 0x00101c2c: lui $v0, 0x2000
    v0 = s1 | v0;                                               // 0x00101c30: or $v0, $s1, $v0
    a0 = g_001edf2c;  // Global at 0x001edf2c                   // 0x00101c34: lw $a0, -0x20d4($v1)
    iSignalSema();  // 0x114300                                 // 0x00101c38: jal 0x114300
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00101c3c: lw $s0, 0($v0)
label_0x101c44:
    return;                                                     // 0x00101c50: jr $ra
    sp = sp + 0x40;                                             // 0x00101c54: addiu $sp, $sp, 0x40
}