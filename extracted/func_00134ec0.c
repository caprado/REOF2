void func_00134ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134ec0: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x00134ecc: lui $a0, 0x20
    a0 = a0 + 0x2180;                                           // 0x00134ed0: addiu $a0, $a0, 0x2180
    return func_00134e90();  // Tail call                       // 0x00134edc: j 0x134e90
    sp = sp + 0x10;                                             // 0x00134ee0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134ee4: nop 
    sp = sp + -0x20;                                            // 0x00134ee8: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x00134eec: lui $v0, 0x20
    s1 = 0x20 << 16;                                            // 0x00134ef4: lui $s1, 0x20
    v0 = v0 + 0x2178;                                           // 0x00134efc: addiu $v0, $v0, 0x2178
    v1 = g_00202184;  // Global at 0x00202184                   // 0x00134f04: lw $v1, 0x2184($s1)
    a0 = g_00202178;  // Global at 0x00202178                   // 0x00134f08: lw $a0, 0($v0)
    if (v1 != 0) goto label_0x134f8c;                           // 0x00134f0c: bnez $v1, 0x134f8c
    v1 = s1 + 0x2184;                                           // 0x00134f10: addiu $v1, $s1, 0x2184
    v0 = 0x25 << 16;                                            // 0x00134f14: lui $v0, 0x25
    v1 = 0x27;                                                  // 0x00134f18: addiu $v1, $zero, 0x27
    v0 = v0 + 0x36a8;                                           // 0x00134f1c: addiu $v0, $v0, 0x36a8
label_0x134f20:
    v1 = v1 + -1;                                               // 0x00134f20: addiu $v1, $v1, -1
    g_002536a8 = 0;  // Global at 0x002536a8                    // 0x00134f24: sw $zero, 0($v0)
    g_002536ac = 0;  // Global at 0x002536ac                    // 0x00134f28: sw $zero, 4($v0)
    /* nop */                                                   // 0x00134f2c: nop 
    /* nop */                                                   // 0x00134f30: nop 
    if (v1 >= 0) goto label_0x134f20;                           // 0x00134f34: bgez $v1, 0x134f20
    v0 = v0 + 8;                                                // 0x00134f38: addiu $v0, $v0, 8
    v0 = 0x25 << 16;                                            // 0x00134f3c: lui $v0, 0x25
    v1 = 0x1f;                                                  // 0x00134f40: addiu $v1, $zero, 0x1f
    v0 = v0 + 0x37e8;                                           // 0x00134f44: addiu $v0, $v0, 0x37e8
    v0 = v0 + 0x1f4;                                            // 0x00134f48: addiu $v0, $v0, 0x1f4
    /* nop */                                                   // 0x00134f4c: nop 
label_0x134f50:
    v1 = v1 + -1;                                               // 0x00134f50: addiu $v1, $v1, -1
    g_002539dc = 0;  // Global at 0x002539dc                    // 0x00134f54: sb $zero, 0($v0)
    /* nop */                                                   // 0x00134f58: nop 
    /* nop */                                                   // 0x00134f5c: nop 
    /* nop */                                                   // 0x00134f60: nop 
    if (v1 >= 0) goto label_0x134f50;                           // 0x00134f64: bgez $v1, 0x134f50
    v0 = v0 + -0x10;                                            // 0x00134f68: addiu $v0, $v0, -0x10
    s0 = 0x25 << 16;                                            // 0x00134f6c: lui $s0, 0x25
    s0 = s0 + 0x39e8;                                           // 0x00134f74: addiu $s0, $s0, 0x39e8
    a2 = 9;                                                     // 0x00134f78: addiu $a2, $zero, 9
    func_00107c70();  // 107c70                                // 0x00134f7c: jal 0x107c70
    g_002539e8 = 0;  // Global at 0x002539e8                    // 0x00134f84: sb $zero, 0($s0)
    v1 = s1 + 0x2184;                                           // 0x00134f88: addiu $v1, $s1, 0x2184
label_0x134f8c:
    v0 = g_00202184;  // Global at 0x00202184                   // 0x00134f90: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00134f9c: addiu $v0, $v0, 1
    g_00202184 = v0;  // Global at 0x00202184                   // 0x00134fa0: sw $v0, 0($v1)
    return;                                                     // 0x00134fa4: jr $ra
    sp = sp + 0x20;                                             // 0x00134fa8: addiu $sp, $sp, 0x20
}