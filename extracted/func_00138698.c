void func_00138698() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00138698: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x0013869c: lui $v0, 0x20
    s0 = v0 + 0x2208;                                           // 0x001386a8: addiu $s0, $v0, 0x2208
    s1 = 0x1f;                                                  // 0x001386b0: addiu $s1, $zero, 0x1f
    s2 = 1;                                                     // 0x001386b8: addiu $s2, $zero, 1
    /* nop */                                                   // 0x001386bc: nop 
label_0x1386c0:
    v0 = g_00202208;  // Global at 0x00202208                   // 0x001386c0: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x1386d8;                          // 0x001386c4: bnel $v0, $s2, 0x1386d8
    s1 = s1 + -1;                                               // 0x001386c8: addiu $s1, $s1, -1
    func_00138310();  // 138310                                // 0x001386cc: jal 0x138310
    s1 = s1 + -1;                                               // 0x001386d4: addiu $s1, $s1, -1
label_0x1386d8:
    if (s1 >= 0) goto label_0x1386c0;                           // 0x001386d8: bgez $s1, 0x1386c0
    s0 = s0 + 0x40;                                             // 0x001386dc: addiu $s0, $s0, 0x40
    return func_00139288();  // Tail call                        // 0x001386f0: j 0x139228
    sp = sp + 0x20;                                             // 0x001386f4: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x001386f8: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x001386fc: lui $v0, 0x20
    s0 = v0 + 0x2204;                                           // 0x00138704: addiu $s0, $v0, 0x2204
    a0 = 0x22 << 16;                                            // 0x0013870c: lui $a0, 0x22
    a0 = &str_00225160;  // "DTR_Init: out\n"                   // 0x00138710: addiu $a0, $a0, 0x5160
    func_00116508();  // 116508                                // 0x00138714: jal 0x116508
    a1 = g_00202204;  // Global at 0x00202204                   // 0x00138718: lw $a1, 0($s0)
    a0 = 0x20 << 16;                                            // 0x0013871c: lui $a0, 0x20
    v0 = g_00202204;  // Global at 0x00202204                   // 0x00138720: lw $v0, 0($s0)
    a0 = a0 + 0x2208;                                           // 0x00138724: addiu $a0, $a0, 0x2208
    if (v0 != 0) goto label_0x138740;                           // 0x0013872c: bnez $v0, 0x138740
    a2 = 0x800;                                                 // 0x00138730: addiu $a2, $zero, 0x800
    func_00107c70();  // 107c70                                // 0x00138734: jal 0x107c70
    /* nop */                                                   // 0x00138738: nop 
    v0 = g_00202204;  // Global at 0x00202204                   // 0x0013873c: lw $v0, 0($s0)
label_0x138740:
    v0 = v0 + 1;                                                // 0x00138740: addiu $v0, $v0, 1
    a0 = 0x22 << 16;                                            // 0x00138744: lui $a0, 0x22
    g_00202204 = v0;  // Global at 0x00202204                   // 0x00138748: sw $v0, 0($s0)
    a0 = &str_00225178;  // "i:%d DTR_MAX_OBJ:%d\n"             // 0x0013874c: addiu $a0, $a0, 0x5178
    return func_00116598();  // Tail call                        // 0x00138758: j 0x116508
    sp = sp + 0x10;                                             // 0x0013875c: addiu $sp, $sp, 0x10
    v1 = 0x20 << 16;                                            // 0x00138760: lui $v1, 0x20
    v1 = v1 + 0x2204;                                           // 0x00138764: addiu $v1, $v1, 0x2204
    v0 = g_00202204;  // Global at 0x00202204                   // 0x00138768: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0013876c: addiu $v0, $v0, -1
    return;                                                     // 0x00138770: jr $ra
    g_00202204 = v0;  // Global at 0x00202204                   // 0x00138774: sw $v0, 0($v1)
}