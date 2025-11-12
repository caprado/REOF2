void func_0011dbf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0xb000 << 16;                                          // 0x0011dbf4: lui $a0, 0xb000
    return func_0011db80();  // Tail call                       // 0x0011dbf8: j 0x11db80
    a0 = a0 | 0x1000;                                           // 0x0011dbfc: ori $a0, $a0, 0x1000
    a0 = 0xb000 << 16;                                          // 0x0011dc04: lui $a0, 0xb000
    return func_0011db80();  // Tail call                       // 0x0011dc08: j 0x11db80
    a0 = a0 | 0x1010;                                           // 0x0011dc0c: ori $a0, $a0, 0x1010
    a0 = 0xb000 << 16;                                          // 0x0011dc14: lui $a0, 0xb000
    return func_0011db80();  // Tail call                       // 0x0011dc18: j 0x11db80
    a0 = a0 | 0x1020;                                           // 0x0011dc1c: ori $a0, $a0, 0x1020
    sp = sp + -0x60;                                            // 0x0011dc20: addiu $sp, $sp, -0x60
    s2 = 0x1f << 16;                                            // 0x0011dc2c: lui $s2, 0x1f
    s1 = s2 + 0x19e8;                                           // 0x0011dc38: addiu $s1, $s2, 0x19e8
    v0 = g_001f19f0;  // Global at 0x001f19f0                   // 0x0011dc44: lw $v0, 8($s1)
    if (v0 < 0) goto label_0x11dc5c;                            // 0x0011dc48: bltz $v0, 0x11dc5c
    v0 = 0x8000 << 16;                                          // 0x0011dc50: lui $v0, 0x8000
    goto label_0x11dd54;                                        // 0x0011dc54: b 0x11dd54
    v0 = v0 | 0x8001;                                           // 0x0011dc58: ori $v0, $v0, 0x8001
label_0x11dc5c:
    s3 = 0x25 << 16;                                            // 0x0011dc5c: lui $s3, 0x25
    s0 = s3 + 0x1080;                                           // 0x0011dc64: addiu $s0, $s3, 0x1080
    g_001f19f8 = 0;  // Global at 0x001f19f8                    // 0x0011dc68: sw $zero, 0x10($s1)
    func_00107d30();  // 0x107c70                                // 0x0011dc74: jal 0x107c70
    a2 = 0x2000;                                                // 0x0011dc78: addiu $a2, $zero, 0x2000
    g_001f19fc = s0;  // Global at 0x001f19fc                   // 0x0011dc7c: sw $s0, 0x14($s1)
    v1 = s0 + 0x2000;                                           // 0x0011dc80: addiu $v1, $s0, 0x2000
    v0 = 0x7f;                                                  // 0x0011dc84: addiu $v0, $zero, 0x7f
    s0 = s0 + 0x1fc0;                                           // 0x0011dc88: addiu $s0, $s0, 0x1fc0
    /* nop */                                                   // 0x0011dc8c: nop 
label_0x11dc90:
    g_00253040 = v1;  // Global at 0x00253040                   // 0x0011dc90: sw $v1, 0($s0)
    v0 = v0 + -1;                                               // 0x0011dc94: addiu $v0, $v0, -1
    s0 = s0 + -0x40;                                            // 0x0011dc98: addiu $s0, $s0, -0x40
    v1 = v1 + -0x40;                                            // 0x0011dc9c: addiu $v1, $v1, -0x40
    /* nop */                                                   // 0x0011dca0: nop 
    if (v0 >= 0) goto label_0x11dc90;                           // 0x0011dca4: bgez $v0, 0x11dc90
    /* nop */                                                   // 0x0011dca8: nop 
    v0 = s3 + 0x1080;                                           // 0x0011dcac: addiu $v0, $s3, 0x1080
    func_0011ef38();  // 0x11eee8                                // 0x0011dcb0: jal 0x11eee8
    g_00253040 = 0;  // Global at 0x00253040                    // 0x0011dcb4: sw $zero, 0x1fc0($v0)
    a1 = 0x12 << 16;                                            // 0x0011dcb8: lui $a1, 0x12
    a0 = 0xb;                                                   // 0x0011dcbc: addiu $a0, $zero, 0xb
    a1 = a1 + -0x1e40;                                          // 0x0011dcc0: addiu $a1, $a1, -0x1e40
    RemoveIntcHandler();  // 0x113fd0                           // 0x0011dcc8: jal 0x113fd0
    if (v1 >= 0) goto label_0x11dce8;                           // 0x0011dcd4: bgezl $v1, 0x11dce8
    v0 = s2 + 0x19e8;                                           // 0x0011dcd8: addiu $v0, $s2, 0x19e8
    v0 = 0x8000 << 16;                                          // 0x0011dcdc: lui $v0, 0x8000
    goto label_0x11dd54;                                        // 0x0011dce0: b 0x11dd54
    v0 = v0 | 0x9021;                                           // 0x0011dce4: ori $v0, $v0, 0x9021
label_0x11dce8:
    func_0011d378();  // 0x11d320                                // 0x0011dce8: jal 0x11d320
    g_80000008 = v1;  // Global at 0x80000008                   // 0x0011dcec: sw $v1, 8($v0)
    v1 = 0x1000 << 16;                                          // 0x0011dcf0: lui $v1, 0x1000
    v1 = v1 | 0x1010;                                           // 0x0011dcf8: ori $v1, $v1, 0x1010
    v0 = 0xffff << 16;                                          // 0x0011dcfc: lui $v0, 0xffff
    s0 = g_10000000;  // Global at 0x10000000                   // 0x0011dd00: lw $s0, 0($v1)
    v0 = v0 | 0xfffc;                                           // 0x0011dd04: ori $v0, $v0, 0xfffc
    v0 = s0 & v0;                                               // 0x0011dd08: and $v0, $s0, $v0
    s0 = v0 | s4;                                               // 0x0011dd0c: or $s0, $v0, $s4
    s0 = s0 | 0x300;                                            // 0x0011dd10: ori $s0, $s0, 0x300
    v0 = s0 & 0x80;                                             // 0x0011dd14: andi $v0, $s0, 0x80
    if (v0 != 0) goto label_0x11dd30;                           // 0x0011dd18: bnez $v0, 0x11dd30
    func_0011dc00();  // 0x11dbf0                                // 0x0011dd20: jal 0x11dbf0
    s0 = s0 | 0xc80;                                            // 0x0011dd24: ori $s0, $s0, 0xc80
    func_0011dc20();  // 0x11dc10                                // 0x0011dd28: jal 0x11dc10
    a0 = 0 | 0xffff;                                            // 0x0011dd2c: ori $a0, $zero, 0xffff
label_0x11dd30:
    func_0011dc10();  // 0x11dc00                                // 0x0011dd30: jal 0x11dc00
    func_00114e90();  // 0x114e28                                // 0x0011dd38: jal 0x114e28
    a0 = 0xb;                                                   // 0x0011dd3c: addiu $a0, $zero, 0xb
    if (s1 == 0) goto label_0x11dd54;                           // 0x0011dd40: beqz $s1, 0x11dd54
    func_0011d390();  // 0x11d378                                // 0x0011dd48: jal 0x11d378
    /* nop */                                                   // 0x0011dd4c: nop 
label_0x11dd54:
    return;                                                     // 0x0011dd6c: jr $ra
    sp = sp + 0x60;                                             // 0x0011dd70: addiu $sp, $sp, 0x60
}