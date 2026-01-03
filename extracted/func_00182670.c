void func_00182670() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00182670: addiu $sp, $sp, -0x50
    func_0010ae00();  // 10ae00                                // 0x00182694: jal 0x10ae00
    v0 = ((unsigned)v0 < (unsigned)0x80) ? 1 : 0;               // 0x0018269c: sltiu $v0, $v0, 0x80
    if (v0 != 0) goto label_0x1826b0;                           // 0x001826a0: bnez $v0, 0x1826b0
    v0 = 0x898;                                                 // 0x001826a4: addiu $v0, $zero, 0x898
label_0x1826a8:
    goto label_0x1827d8;                                        // 0x001826a8: b 0x1827d8
label_0x1826b0:
    a1 = 0x27 << 16;                                            // 0x001826b0: lui $a1, 0x27
    /* multiply: s2 * v0 -> hi:lo */                            // 0x001826b4: mult $ac2, $s2, $v0
    a1 = a1 + 0x7ad0;                                           // 0x001826b8: addiu $a1, $a1, 0x7ad0
    func_0010ac68();  // 10ac68                                // 0x001826c0: jal 0x10ac68
    a1 = v0 + a1;                                               // 0x001826c4: addu $a1, $v0, $a1
    v1 = g_00229f78;  // Global at 0x00229f78                   // 0x001826c8: lb $v1, 0($s0)
    v0 = 0x2f;                                                  // 0x001826cc: addiu $v0, $zero, 0x2f
    if (v1 != v0) goto label_0x182700;                          // 0x001826d0: bne $v1, $v0, 0x182700
    s2 = 0x23 << 16;                                            // 0x001826d4: lui $s2, 0x23
    a0 = s0 + 1;                                                // 0x001826d8: addiu $a0, $s0, 1
    a2 = s2 + -0x6088;                                          // 0x001826dc: addiu $a2, $s2, -0x6088
    v0 = g_00229f78;  // Global at 0x00229f78                   // 0x001826e0: lb $v0, 0($a2)
    v1 = g_00229f79;  // Global at 0x00229f79                   // 0x001826e4: lb $v1, 1($a2)
    *(uint8_t*)(s1) = v0;                                       // 0x001826e8: sb $v0, 0($s1)
    *(uint8_t*)((s1) + 1) = v1;                                 // 0x001826ec: sb $v1, 1($s1)
    func_00182508();  // 182508                                // 0x001826f0: jal 0x182508
    a1 = s2 + -0x6088;                                          // 0x001826f4: addiu $a1, $s2, -0x6088
    goto label_0x182710;                                        // 0x001826f8: b 0x182710
label_0x182700:
    func_00182508();  // 182508                                // 0x00182704: jal 0x182508
    a1 = s2 + -0x6088;                                          // 0x00182708: addiu $a1, $s2, -0x6088
label_0x182710:
    if (s0 == 0) goto label_0x1827b4;                           // 0x00182710: beqz $s0, 0x1827b4
    s3 = 0x23 << 16;                                            // 0x00182714: lui $s3, 0x23
    /* nop */                                                   // 0x0018271c: nop 
label_0x182720:
    func_0010ab20();  // 10ab20                                // 0x00182720: jal 0x10ab20
    a1 = s3 + -0x60a0;                                          // 0x00182724: addiu $a1, $s3, -0x60a0
    if (v0 != 0) goto label_0x18273c;                           // 0x00182728: bnez $v0, 0x18273c
    a1 = 0x23 << 16;                                            // 0x0018272c: lui $a1, 0x23
    goto label_0x1827a0;                                        // 0x00182734: b 0x1827a0
    a1 = s2 + -0x6088;                                          // 0x00182738: addiu $a1, $s2, -0x6088
label_0x18273c:
    func_0010ab20();  // 10ab20                                // 0x00182740: jal 0x10ab20
    a1 = &str_00223ee0;  // "E8101207: can't create sj (ADXT_StartMemIdx)" // 0x00182744: addiu $a1, $a1, -0x6098
    if (v0 != 0) goto label_0x182780;                           // 0x00182748: bnez $v0, 0x182780
    func_0010ae00();  // 10ae00                                // 0x00182750: jal 0x10ae00
    v0 = v0 + s1;                                               // 0x00182758: addu $v0, $v0, $s1
    *(uint8_t*)((v0) + -1) = 0;                                 // 0x00182760: sb $zero, -1($v0)
    func_0010b460();  // 10b460                                // 0x00182764: jal 0x10b460
    a1 = 0x2f;                                                  // 0x00182768: addiu $a1, $zero, 0x2f
    if (v0 == 0) goto label_0x1826a8;                           // 0x0018276c: beqz $v0, 0x1826a8
    *(uint8_t*)((v0) + 1) = 0;                                  // 0x00182774: sb $zero, 1($v0)
    goto label_0x1827a0;                                        // 0x00182778: b 0x1827a0
    a1 = s2 + -0x6088;                                          // 0x0018277c: addiu $a1, $s2, -0x6088
label_0x182780:
    func_0010a860();  // 10a860                                // 0x00182780: jal 0x10a860
    s0 = s2 + -0x6088;                                          // 0x00182788: addiu $s0, $s2, -0x6088
    func_0010a860();  // 10a860                                // 0x00182790: jal 0x10a860
label_0x1827a0:
    func_00182508();  // 182508                                // 0x001827a0: jal 0x182508
    /* nop */                                                   // 0x001827a4: nop 
    if (s0 != 0) goto label_0x182720;                           // 0x001827ac: bnez $s0, 0x182720
label_0x1827b4:
    a1 = s2 + -0x6088;                                          // 0x001827b4: addiu $a1, $s2, -0x6088
    func_0010ab20();  // 10ab20                                // 0x001827b8: jal 0x10ab20
    if (v0 == 0) goto label_0x1827d4;                           // 0x001827c0: beqz $v0, 0x1827d4
    func_0010b460();  // 10b460                                // 0x001827c8: jal 0x10b460
    a1 = 0x2f;                                                  // 0x001827cc: addiu $a1, $zero, 0x2f
    *(uint8_t*)(v0) = 0;                                        // 0x001827d0: sb $zero, 0($v0)
label_0x1827d4:
    v0 = 1;                                                     // 0x001827d4: addiu $v0, $zero, 1
label_0x1827d8:
    return;                                                     // 0x001827ec: jr $ra
    sp = sp + 0x50;                                             // 0x001827f0: addiu $sp, $sp, 0x50
}