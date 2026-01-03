void func_00160660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00160660: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x00160674: jal 0x15fc80
    if (v0 != 0) goto label_0x1606a0;                           // 0x0016067c: bnez $v0, 0x1606a0
    a0 = 0x23 << 16;                                            // 0x00160684: lui $a0, 0x23
    a0 = &str_002280c8;  // "E211051: mwPlySetFloatSpeed: handle is invalid." // 0x00160690: addiu $a0, $a0, -0x7f38
    return func_001634a8();  // Tail call                        // 0x00160698: j 0x163410
    sp = sp + 0x20;                                             // 0x0016069c: addiu $sp, $sp, 0x20
label_0x1606a0:
    func_0015f7e0();  // 15f7e0                                // 0x001606a0: jal 0x15f7e0
    /* nop */                                                   // 0x001606a4: nop 
    return func_00172000();  // Tail call                        // 0x001606bc: j 0x171f90
    sp = sp + 0x20;                                             // 0x001606c0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001606c4: nop 
    sp = sp + -0x30;                                            // 0x001606c8: addiu $sp, $sp, -0x30
    *(float*)((sp) + 0x20) = FPU_F20;  // Store float           // 0x001606d4: swc1 $f20, 0x20($sp)
    func_0015fc80();  // 15fc80                                // 0x001606e4: jal 0x15fc80
    /* FPU: mov.s $f20, $f12 */                                 // 0x001606e8: mov.s $f20, $f12
    if (v0 != 0) goto label_0x160718;                           // 0x001606ec: bnez $v0, 0x160718
    a0 = 0x23 << 16;                                            // 0x001606f4: lui $a0, 0x23
    a0 = &str_002280f8;  // "E201184 : MwsfdBufFmt value is invalid." // 0x00160700: addiu $a0, $a0, -0x7f08
    FPU_F20 = *(float*)((sp) + 0x20);  // Load float            // 0x0016070c: lwc1 $f20, 0x20($sp)
    return func_001634a8();  // Tail call                        // 0x00160710: j 0x163410
    sp = sp + 0x30;                                             // 0x00160714: addiu $sp, $sp, 0x30
label_0x160718:
    func_0015f7e0();  // 15f7e0                                // 0x00160718: jal 0x15f7e0
    /* nop */                                                   // 0x0016071c: nop 
    at = 0x447a << 16;                                          // 0x00160720: lui $at, 0x447a
    /* move to FPU: $at, $f12 */                                // 0x00160724: mtc1 $at, $f12
    func_00111560();  // 111560                                // 0x0016072c: jal 0x111560
    /* FPU: mul.s $f12, $f20, $f12 */                           // 0x00160730: mul.s $f12, $f20, $f12
    a1 = 0 | 0xff80;                                            // 0x00160734: ori $a1, $zero, 0xff80
    func_00111998();  // 111998                                // 0x0016073c: jal 0x111998
    func_00112048();  // 112048                                // 0x00160748: jal 0x112048
    func_00111f90();  // 111f90                                // 0x00160754: jal 0x111f90
    func_00111f40();  // 111f40                                // 0x00160760: jal 0x111f40
    a1 = s0 + -1;                                               // 0x00160768: addiu $a1, $s0, -1
    v0 = (0 < v0) ? 1 : 0;                                      // 0x0016076c: slt $v0, $zero, $v0
    if (v0 == 0) a1 = s0;                                       // 0x00160774: movz $a1, $s0, $v0
    FPU_F20 = *(float*)((sp) + 0x20);  // Load float            // 0x00160788: lwc1 $f20, 0x20($sp)
    return func_00172000();  // Tail call                        // 0x0016078c: j 0x171f90
    sp = sp + 0x30;                                             // 0x00160790: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00160794: nop 
    return;                                                     // 0x00160798: jr $ra
    /* nop */                                                   // 0x0016079c: nop 
}