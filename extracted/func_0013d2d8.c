void func_0013d2d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013d2d8: addiu $sp, $sp, -0x30
    v1 = 0x20 << 16;                                            // 0x0013d2dc: lui $v1, 0x20
    v1 = v1 + 0x4708;                                           // 0x0013d2e4: addiu $v1, $v1, 0x4708
    v0 = g_00204708;  // Global at 0x00204708                   // 0x0013d2f8: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0013d2fc: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x13d378;                           // 0x0013d300: bnez $v0, 0x13d378
    g_00204708 = v0;  // Global at 0x00204708                   // 0x0013d304: sw $v0, 0($v1)
    s3 = 0x20 << 16;                                            // 0x0013d308: lui $s3, 0x20
    s2 = 1;                                                     // 0x0013d30c: addiu $s2, $zero, 1
    s0 = s3 + 0x4710;                                           // 0x0013d310: addiu $s0, $s3, 0x4710
    s1 = 0xf;                                                   // 0x0013d314: addiu $s1, $zero, 0xf
label_0x13d318:
    v0 = g_00204710;  // Global at 0x00204710                   // 0x0013d318: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x13d330;                          // 0x0013d31c: bnel $v0, $s2, 0x13d330
    s1 = s1 + -1;                                               // 0x0013d320: addiu $s1, $s1, -1
    func_0013c9c8();  // 0x13c978                                // 0x0013d324: jal 0x13c978
    s1 = s1 + -1;                                               // 0x0013d32c: addiu $s1, $s1, -1
label_0x13d330:
    if (s1 >= 0) goto label_0x13d318;                           // 0x0013d330: bgez $s1, 0x13d318
    s0 = s0 + 0x238;                                            // 0x0013d334: addiu $s0, $s0, 0x238
    a0 = s3 + 0x4710;                                           // 0x0013d338: addiu $a0, $s3, 0x4710
    func_00107d30();  // 0x107c70                                // 0x0013d340: jal 0x107c70
    a2 = 0x2380;                                                // 0x0013d344: addiu $a2, $zero, 0x2380
    func_0013d258();  // 0x13d250                                // 0x0013d348: jal 0x13d250
    /* nop */                                                   // 0x0013d34c: nop 
    return func_0013d1b8();  // Tail call                        // 0x0013d36c: j 0x13d190
    sp = sp + 0x30;                                             // 0x0013d370: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0013d374: nop 
label_0x13d378:
    return;                                                     // 0x0013d38c: jr $ra
    sp = sp + 0x30;                                             // 0x0013d390: addiu $sp, $sp, 0x30
}