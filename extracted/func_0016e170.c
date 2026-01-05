void func_0016e170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016e170: addiu $sp, $sp, -0x10
    t4 = *(int32_t*)((t5) + 0x1b30);                            // 0x0016e17c: lw $t4, 0x1b30($t5)
    a3 = g_ff000003;  // Global at 0xff000003                   // 0x0016e180: lw $a3, 4($a1)
    t3 = t4 + 4;                                                // 0x0016e184: addiu $t3, $t4, 4
    a2 = g_feffffff;  // Global at 0xfeffffff                   // 0x0016e188: lw $a2, 0($a1)
    v0 = *(int32_t*)((t3) + 8);                                 // 0x0016e18c: lw $v0, 8($t3)
    v1 = *(int32_t*)((t3) + 0xc);                               // 0x0016e190: lw $v1, 0xc($t3)
    t6 = *(int32_t*)((t5) + 0x38);                              // 0x0016e198: lw $t6, 0x38($t5)
    /* multiply: v0 * v1 -> hi:lo */                            // 0x0016e19c: mult $ac2, $v0, $v1
    v0 = (v0 < a1) ? 1 : 0;                                     // 0x0016e1a0: slt $v0, $v0, $a1
    if (v0 == 0) goto label_0x16e1c0;                           // 0x0016e1a4: beqz $v0, 0x16e1c0
    t1 = *(int32_t*)((t3) + 0x1c);                              // 0x0016e1a8: lw $t1, 0x1c($t3)
    a1 = 0xff00 << 16;                                          // 0x0016e1ac: lui $a1, 0xff00
    a1 = a1 | 0xf17;                                            // 0x0016e1b4: ori $a1, $a1, 0xf17
    return func_00169940();  // Tail call                        // 0x0016e1b8: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016e1bc: addiu $sp, $sp, 0x10
label_0x16e1c0:
    a1 = a2 + 0xf;                                              // 0x0016e1c0: addiu $a1, $a2, 0xf
    v1 = (a2 < 0) ? 1 : 0;                                      // 0x0016e1c4: slti $v1, $a2, 0
    v0 = (a3 < 0) ? 1 : 0;                                      // 0x0016e1c8: slti $v0, $a3, 0
    a0 = a3 + 0xf;                                              // 0x0016e1cc: addiu $a0, $a3, 0xf
    if (v1 != 0) a2 = a1;                                       // 0x0016e1d0: movn $a2, $a1, $v1
    v1 = 2;                                                     // 0x0016e1d4: addiu $v1, $zero, 2
    if (v0 != 0) a3 = a0;                                       // 0x0016e1d8: movn $a3, $a0, $v0
    a1 = a2 >> 4;                                               // 0x0016e1dc: sra $a1, $a2, 4
    if (t6 != v1) goto label_0x16e1f8;                          // 0x0016e1e0: bne $t6, $v1, 0x16e1f8
    v0 = a3 >> 4;                                               // 0x0016e1e4: sra $v0, $a3, 4
    /* multiply: a1 * v0 -> hi:lo */                            // 0x0016e1e8: mult $ac2, $a1, $v0
    goto label_0x16e208;                                        // 0x0016e1ec: b 0x16e208
    v0 = v0 << 0xa;                                             // 0x0016e1f0: sll $v0, $v0, 0xa
    /* nop */                                                   // 0x0016e1f4: nop 
label_0x16e1f8:
    /* multiply: a1 * v0 -> hi:lo */                            // 0x0016e1f8: mult $ac3, $a1, $v0
    v0 = v1 << 1;                                               // 0x0016e1fc: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0016e200: addu $v0, $v0, $v1
    v0 = v0 << 7;                                               // 0x0016e204: sll $v0, $v0, 7
label_0x16e208:
    t2 = v0 + 0x40;                                             // 0x0016e208: addiu $t2, $v0, 0x40
    v1 = *(int32_t*)((t3) + 0x14);                              // 0x0016e20c: lw $v1, 0x14($t3)
    t0 = 2;                                                     // 0x0016e210: addiu $t0, $zero, 2
    v0 = *(int32_t*)((t3) + 0x18);                              // 0x0016e214: lw $v0, 0x18($t3)
    a3 = v1 + 0xf;                                              // 0x0016e218: addiu $a3, $v1, 0xf
    a1 = (v1 < 0) ? 1 : 0;                                      // 0x0016e21c: slti $a1, $v1, 0
    a2 = v0 + 0xf;                                              // 0x0016e220: addiu $a2, $v0, 0xf
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0016e224: slti $a0, $v0, 0
    if (a1 != 0) v1 = a3;                                       // 0x0016e228: movn $v1, $a3, $a1
    if (a0 != 0) v0 = a2;                                       // 0x0016e22c: movn $v0, $a2, $a0
    v1 = v1 >> 4;                                               // 0x0016e230: sra $v1, $v1, 4
    if (t6 != t0) goto label_0x16e260;                          // 0x0016e234: bne $t6, $t0, 0x16e260
    v0 = v0 >> 4;                                               // 0x0016e238: sra $v0, $v0, 4
    /* multiply: v1 * v0 -> hi:lo */                            // 0x0016e23c: mult $ac2, $v1, $v0
    v0 = v0 << 0xa;                                             // 0x0016e240: sll $v0, $v0, 0xa
    v0 = v0 + 0x40;                                             // 0x0016e244: addiu $v0, $v0, 0x40
    v0 = ((unsigned)v0 < (unsigned)t2) ? 1 : 0;                 // 0x0016e248: sltu $v0, $v0, $t2
    if (v0 != 0) goto label_0x16e280;                           // 0x0016e24c: bnez $v0, 0x16e280
    /* nop */                                                   // 0x0016e250: nop 
    goto label_0x16e298;                                        // 0x0016e254: b 0x16e298
    v0 = *(int32_t*)((t3) + 0x20);                              // 0x0016e258: lw $v0, 0x20($t3)
    /* nop */                                                   // 0x0016e25c: nop 
label_0x16e260:
    /* multiply: v1 * v0 -> hi:lo */                            // 0x0016e260: mult $ac3, $v1, $v0
    v0 = v1 << 1;                                               // 0x0016e264: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0016e268: addu $v0, $v0, $v1
    v0 = v0 << 7;                                               // 0x0016e26c: sll $v0, $v0, 7
    v0 = v0 + 0x40;                                             // 0x0016e270: addiu $v0, $v0, 0x40
    v0 = ((unsigned)v0 < (unsigned)t2) ? 1 : 0;                 // 0x0016e274: sltu $v0, $v0, $t2
    /* beqzl $v0, 0x16e298 */                                   // 0x0016e278: beqzl $v0, 0x16e298
    v0 = *(int32_t*)((t3) + 0x20);                              // 0x0016e27c: lw $v0, 0x20($t3)
label_0x16e280:
    a1 = 0xff00 << 16;                                          // 0x0016e280: lui $a1, 0xff00
    a1 = a1 | 0xf18;                                            // 0x0016e28c: ori $a1, $a1, 0xf18
    return func_00169940();  // Tail call                        // 0x0016e290: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016e294: addiu $sp, $sp, 0x10
label_0x16e298:
    if (v0 == 0) goto label_0x16e2d8;                           // 0x0016e298: beqz $v0, 0x16e2d8
    /* nop */                                                   // 0x0016e29c: nop 
    if (t1 <= 0) goto label_0x16e304;                           // 0x0016e2a0: blez $t1, 0x16e304
    v1 = t4 + 0x30;                                             // 0x0016e2ac: addiu $v1, $t4, 0x30
label_0x16e2b0:
    a1 = a1 + 1;                                                // 0x0016e2b0: addiu $a1, $a1, 1
    *(uint32_t*)(v1) = a0;                                      // 0x0016e2b4: sw $a0, 0($v1)
    v0 = (a1 < t1) ? 1 : 0;                                     // 0x0016e2b8: slt $v0, $a1, $t1
    v1 = v1 + 4;                                                // 0x0016e2bc: addiu $v1, $v1, 4
    /* nop */                                                   // 0x0016e2c0: nop 
    if (v0 != 0) goto label_0x16e2b0;                           // 0x0016e2c4: bnez $v0, 0x16e2b0
    a0 = a0 + t2;                                               // 0x0016e2c8: addu $a0, $a0, $t2
    goto label_0x16e308;                                        // 0x0016e2cc: b 0x16e308
    *(uint32_t*)((t4) + 0x138) = t1;                            // 0x0016e2d0: sw $t1, 0x138($t4)
    /* nop */                                                   // 0x0016e2d4: nop 
label_0x16e2d8:
    if (t1 <= 0) goto label_0x16e308;                           // 0x0016e2d8: blezl $t1, 0x16e308
    *(uint32_t*)((t4) + 0x138) = t1;                            // 0x0016e2dc: sw $t1, 0x138($t4)
    a1 = a1 + -1;                                               // 0x0016e2e4: addiu $a1, $a1, -1
label_0x16e2e8:
    /* nop */                                                   // 0x0016e2e8: nop 
    /* nop */                                                   // 0x0016e2ec: nop 
    /* nop */                                                   // 0x0016e2f0: nop 
    /* nop */                                                   // 0x0016e2f4: nop 
    /* nop */                                                   // 0x0016e2f8: nop 
    if (a1 != 0) goto label_0x16e2e8;                           // 0x0016e2fc: bnez $a1, 0x16e2e8
    a1 = a1 + -1;                                               // 0x0016e300: addiu $a1, $a1, -1
label_0x16e304:
    *(uint32_t*)((t4) + 0x138) = t1;                            // 0x0016e304: sw $t1, 0x138($t4)
label_0x16e308:
    a1 = t4 + 0x30;                                             // 0x0016e308: addiu $a1, $t4, 0x30
    func_0016f8b0();  // 16f8b0                                // 0x0016e310: jal 0x16f8b0
    a0 = t4 + 0x13c;                                            // 0x0016e314: addiu $a0, $t4, 0x13c
    return;                                                     // 0x0016e320: jr $ra
    sp = sp + 0x10;                                             // 0x0016e324: addiu $sp, $sp, 0x10
}