void func_001280d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001280d0: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x001280d4: lui $v1, 0x1f
    v1 = v1 + 0x2ebc;                                           // 0x001280dc: addiu $v1, $v1, 0x2ebc
    v0 = g_001f2ebc;  // Global at 0x001f2ebc                   // 0x001280e0: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x001280e4: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x128180;                           // 0x001280e8: bnez $v0, 0x128180
    g_001f2ebc = v0;  // Global at 0x001f2ebc                   // 0x001280ec: sw $v0, 0($v1)
    func_001290c8();  // 1290c8                                // 0x001280f0: jal 0x1290c8
    /* nop */                                                   // 0x001280f4: nop 
    t2 = 0x1f << 16;                                            // 0x001280f8: lui $t2, 0x1f
    a0 = 0x1f << 16;                                            // 0x001280fc: lui $a0, 0x1f
    v1 = 0x1f << 16;                                            // 0x00128100: lui $v1, 0x1f
    a3 = 0x1f << 16;                                            // 0x00128104: lui $a3, 0x1f
    t0 = 0x1f << 16;                                            // 0x00128108: lui $t0, 0x1f
    t1 = 0x1f << 16;                                            // 0x0012810c: lui $t1, 0x1f
    a0 = a0 + 0x3808;                                           // 0x00128114: addiu $a0, $a0, 0x3808
    a2 = 0x20;                                                  // 0x00128118: addiu $a2, $zero, 0x20
    v0 = -1;                                                    // 0x0012811c: addiu $v0, $zero, -1
    g_001f3830 = 0;  // Global at 0x001f3830                    // 0x00128120: sw $zero, 0x3830($v1)
    g_001f3834 = v0;  // Global at 0x001f3834                   // 0x00128124: sw $v0, 0x3834($t2)
    g_001f382c = 0;  // Global at 0x001f382c                    // 0x00128128: sw $zero, 0x382c($a3)
    g_001f3700 = 0;  // Global at 0x001f3700                    // 0x0012812c: sw $zero, 0x3700($t0)
    func_00107c70();  // 107c70                                // 0x00128130: jal 0x107c70
    g_001f3828 = 0;  // Global at 0x001f3828                    // 0x00128134: sw $zero, 0x3828($t1)
    a0 = 0x1f << 16;                                            // 0x00128138: lui $a0, 0x1f
    a1 = 0xff;                                                  // 0x0012813c: addiu $a1, $zero, 0xff
    a0 = a0 + 0x3708;                                           // 0x00128140: addiu $a0, $a0, 0x3708
    func_00107c70();  // 107c70                                // 0x00128144: jal 0x107c70
    a2 = 0x100;                                                 // 0x00128148: addiu $a2, $zero, 0x100
    a0 = 0x1f << 16;                                            // 0x0012814c: lui $a0, 0x1f
    a0 = a0 + 0x3300;                                           // 0x00128150: addiu $a0, $a0, 0x3300
    func_00107c70();  // 107c70                                // 0x00128158: jal 0x107c70
    a2 = 0x400;                                                 // 0x0012815c: addiu $a2, $zero, 0x400
    a0 = 0x1f << 16;                                            // 0x00128160: lui $a0, 0x1f
    a0 = a0 + 0x2ec0;                                           // 0x00128168: addiu $a0, $a0, 0x2ec0
    a2 = 0x440;                                                 // 0x00128170: addiu $a2, $zero, 0x440
    return func_00107d30();  // Tail call                        // 0x00128174: j 0x107c70
    sp = sp + 0x10;                                             // 0x00128178: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012817c: nop 
label_0x128180:
    return;                                                     // 0x00128184: jr $ra
    sp = sp + 0x10;                                             // 0x00128188: addiu $sp, $sp, 0x10
}