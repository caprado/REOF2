void func_001c9670() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c9670: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001c9674: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x1c9758;                          // 0x001c9680: beq $a0, $v0, 0x1c9758
    v0 = 3;                                                     // 0x001c9688: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x1c9780;                          // 0x001c968c: beq $a0, $v0, 0x1c9780
    v1 = 2;                                                     // 0x001c9690: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1c96a8;                          // 0x001c9694: beq $a0, $v1, 0x1c96a8
    /* nop */                                                   // 0x001c9698: nop 
    goto label_0x1c9780;                                        // 0x001c969c: b 0x1c9780
    /* nop */                                                   // 0x001c96a0: nop 
    /* nop */                                                   // 0x001c96a4: nop 
label_0x1c96a8:
    at = 0x31 << 16;                                            // 0x001c96a8: lui $at, 0x31
    v0 = 4;                                                     // 0x001c96ac: addiu $v0, $zero, 4
    if (a1 == v0) goto label_0x1c96f8;                          // 0x001c96b0: beq $a1, $v0, 0x1c96f8
    g_00316bc0 = 0;  // Global at 0x00316bc0                    // 0x001c96b4: sb $zero, 0x6bc0($at)
    v0 = 5;                                                     // 0x001c96b8: addiu $v0, $zero, 5
    if (a1 == v0) goto label_0x1c96d8;                          // 0x001c96bc: beq $a1, $v0, 0x1c96d8
    /* nop */                                                   // 0x001c96c0: nop 
    if (a1 == v1) goto label_0x1c96d8;                          // 0x001c96c4: beq $a1, $v1, 0x1c96d8
    /* nop */                                                   // 0x001c96c8: nop 
    goto label_0x1c9718;                                        // 0x001c96cc: b 0x1c9718
    /* nop */                                                   // 0x001c96d0: nop 
    /* nop */                                                   // 0x001c96d4: nop 
label_0x1c96d8:
    a0 = 0x31 << 16;                                            // 0x001c96d8: lui $a0, 0x31
    a1 = 0x22 << 16;                                            // 0x001c96dc: lui $a1, 0x22
    a0 = a0 + 0x6bc0;                                           // 0x001c96e0: addiu $a0, $a0, 0x6bc0
    func_0010a860();  // 10a860                                // 0x001c96e4: jal 0x10a860
    a1 = &str_0021f0d0;  // "send \\"                           // 0x001c96e8: addiu $a1, $a1, -0xf30
    goto label_0x1c9730;                                        // 0x001c96ec: b 0x1c9730
    /* nop */                                                   // 0x001c96f0: nop 
    /* nop */                                                   // 0x001c96f4: nop 
label_0x1c96f8:
    a0 = 0x31 << 16;                                            // 0x001c96f8: lui $a0, 0x31
    a1 = 0x22 << 16;                                            // 0x001c96fc: lui $a1, 0x22
    a0 = a0 + 0x6bc0;                                           // 0x001c9700: addiu $a0, $a0, 0x6bc0
    func_0010a860();  // 10a860                                // 0x001c9704: jal 0x10a860
    a1 = &str_0021f1d0;  // "PsIIlibusbkb2800"                  // 0x001c9708: addiu $a1, $a1, -0xe30
    goto label_0x1c9730;                                        // 0x001c970c: b 0x1c9730
    /* nop */                                                   // 0x001c9710: nop 
    /* nop */                                                   // 0x001c9714: nop 
label_0x1c9718:
    a0 = 0x31 << 16;                                            // 0x001c9718: lui $a0, 0x31
    a1 = 0x24 << 16;                                            // 0x001c971c: lui $a1, 0x24
    a0 = a0 + 0x6bc0;                                           // 0x001c9720: addiu $a0, $a0, 0x6bc0
    func_0010a4d8();  // 10a4d8                                // 0x001c9724: jal 0x10a4d8
    a1 = &str_00243890;  // "DROP CHECK.%d.%d. [%d==%d] "       // 0x001c9728: addiu $a1, $a1, 0x3890
    /* nop */                                                   // 0x001c972c: nop 
label_0x1c9730:
    at = 0x31 << 16;                                            // 0x001c9730: lui $at, 0x31
    v1 = 0x31 << 16;                                            // 0x001c9734: lui $v1, 0x31
    v0 = 0x31 << 16;                                            // 0x001c9738: lui $v0, 0x31
    g_00316ac0 = 0;  // Global at 0x00316ac0                    // 0x001c973c: sb $zero, 0x6ac0($at)
    v1 = v1 + 0x6bc0;                                           // 0x001c9740: addiu $v1, $v1, 0x6bc0
    v0 = v0 + 0x6ac0;                                           // 0x001c9744: addiu $v0, $v0, 0x6ac0
    *(uint32_t*)(s0) = v1;                                      // 0x001c9748: sw $v1, 0($s0)
    goto label_0x1c9780;                                        // 0x001c974c: b 0x1c9780
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001c9750: sw $v0, 4($s0)
    /* nop */                                                   // 0x001c9754: nop 
label_0x1c9758:
    at = 0x31 << 16;                                            // 0x001c9758: lui $at, 0x31
    g_00316bc0 = 0;  // Global at 0x00316bc0                    // 0x001c975c: sb $zero, 0x6bc0($at)
    v0 = 0x31 << 16;                                            // 0x001c9760: lui $v0, 0x31
    at = 0x31 << 16;                                            // 0x001c9764: lui $at, 0x31
    v0 = v0 + 0x6bc0;                                           // 0x001c9768: addiu $v0, $v0, 0x6bc0
    g_00316ac0 = 0;  // Global at 0x00316ac0                    // 0x001c976c: sb $zero, 0x6ac0($at)
    *(uint32_t*)(s0) = v0;                                      // 0x001c9770: sw $v0, 0($s0)
    v0 = 0x31 << 16;                                            // 0x001c9774: lui $v0, 0x31
    v0 = v0 + 0x6ac0;                                           // 0x001c9778: addiu $v0, $v0, 0x6ac0
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001c977c: sw $v0, 4($s0)
label_0x1c9780:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c9784: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c978c: jr $ra
    sp = sp + 0x20;                                             // 0x001c9790: addiu $sp, $sp, 0x20
}