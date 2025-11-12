void func_001bf3c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf3c0: addiu $sp, $sp, -0x20
    v0 = 2;                                                     // 0x001bf3c4: addiu $v0, $zero, 2
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf3d0: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf4d0;                          // 0x001bf3d4: beq $v1, $v0, 0x1bf4d0
    v0 = 1;                                                     // 0x001bf3dc: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1bf444;                          // 0x001bf3e0: beq $v1, $v0, 0x1bf444
    /* nop */                                                   // 0x001bf3e4: nop 
    if (v1 == 0) goto label_0x1bf3f8;                           // 0x001bf3e8: beqz $v1, 0x1bf3f8
    /* nop */                                                   // 0x001bf3ec: nop 
    goto label_0x1bf4f4;                                        // 0x001bf3f0: b 0x1bf4f4
    v0 = -1;                                                    // 0x001bf3f4: addiu $v0, $zero, -1
label_0x1bf3f8:
    func_001bf010();  // 0x1befe0                                // 0x001bf3f8: jal 0x1befe0
    /* nop */                                                   // 0x001bf3fc: nop 
    if (v0 < 0) goto label_0x1bf4f0;                            // 0x001bf400: bltz $v0, 0x1bf4f0
    /* nop */                                                   // 0x001bf404: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf408: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf40c: addiu $v0, $gp, -0x6300
    v1 = v1 << 2;                                               // 0x001bf410: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf414: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf418: lw $a0, 0($v0)
    func_00181710();  // 0x181618                                // 0x001bf41c: jal 0x181618
    a1 = s0 + 0x72;                                             // 0x001bf420: addiu $a1, $s0, 0x72
    if (v0 >= 0) goto label_0x1bf434;                           // 0x001bf424: bgez $v0, 0x1bf434
    /* nop */                                                   // 0x001bf428: nop 
    goto label_0x1bf4f4;                                        // 0x001bf42c: b 0x1bf4f4
    v0 = 1;                                                     // 0x001bf430: addiu $v0, $zero, 1
label_0x1bf434:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf434: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf438: addiu $v0, $v0, 1
    goto label_0x1bf4f0;                                        // 0x001bf43c: b 0x1bf4f0
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf440: sw $v0, 4($s0)
label_0x1bf444:
    func_001bf010();  // 0x1befe0                                // 0x001bf444: jal 0x1befe0
    /* nop */                                                   // 0x001bf448: nop 
    if (v0 < 0) goto label_0x1bf4f0;                            // 0x001bf44c: bltz $v0, 0x1bf4f0
    /* nop */                                                   // 0x001bf450: nop 
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf454: lw $a0, 0x1c($s0)
    v0 = 0x11;                                                  // 0x001bf458: addiu $v0, $zero, 0x11
    v1 = a0 & 0xffff;                                           // 0x001bf45c: andi $v1, $a0, 0xffff
    if (v1 != v0) goto label_0x1bf478;                          // 0x001bf460: bne $v1, $v0, 0x1bf478
    /* nop */                                                   // 0x001bf464: nop 
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001bf468: sw $zero, 0x1c($s0)
label_0x1bf46c:
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf46c: sw $zero, 4($s0)
    goto label_0x1bf4f4;                                        // 0x001bf470: b 0x1bf4f4
label_0x1bf478:
    if (a0 >= 0) goto label_0x1bf48c;                           // 0x001bf478: bgez $a0, 0x1bf48c
    /* nop */                                                   // 0x001bf47c: nop 
label_0x1bf480:
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf480: sw $zero, 4($s0)
    goto label_0x1bf4f4;                                        // 0x001bf484: b 0x1bf4f4
    v0 = 1;                                                     // 0x001bf488: addiu $v0, $zero, 1
label_0x1bf48c:
    v0 = *(int32_t*)((s0) + 0xc8);                              // 0x001bf48c: lw $v0, 0xc8($s0)
    if (v0 == 0) goto label_0x1bf46c;                           // 0x001bf490: beqz $v0, 0x1bf46c
    /* nop */                                                   // 0x001bf494: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf498: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf49c: addiu $v0, $gp, -0x6300
    a1 = s0 + 0x72;                                             // 0x001bf4a0: addiu $a1, $s0, 0x72
    v1 = v1 << 2;                                               // 0x001bf4a4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf4a8: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf4ac: lw $a0, 0($v0)
    func_00181910();  // 0x181810                                // 0x001bf4b0: jal 0x181810
    a2 = 0xf;                                                   // 0x001bf4b4: addiu $a2, $zero, 0xf
    if (v0 < 0) goto label_0x1bf480;                            // 0x001bf4b8: bltz $v0, 0x1bf480
    /* nop */                                                   // 0x001bf4bc: nop 
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf4c0: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf4c4: addiu $v0, $v0, 1
    goto label_0x1bf4f0;                                        // 0x001bf4c8: b 0x1bf4f0
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf4cc: sw $v0, 4($s0)
label_0x1bf4d0:
    func_001bf010();  // 0x1befe0                                // 0x001bf4d0: jal 0x1befe0
    /* nop */                                                   // 0x001bf4d4: nop 
    if (v0 < 0) goto label_0x1bf4f0;                            // 0x001bf4d8: bltz $v0, 0x1bf4f0
    /* nop */                                                   // 0x001bf4dc: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf4e0: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf4e4: lw $v0, 0x1c($s0)
    goto label_0x1bf4f4;                                        // 0x001bf4e8: b 0x1bf4f4
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bf4ec: slt $v0, $v0, $zero
label_0x1bf4f0:
    v0 = -1;                                                    // 0x001bf4f0: addiu $v0, $zero, -1
label_0x1bf4f4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf4f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf4fc: jr $ra
    sp = sp + 0x20;                                             // 0x001bf500: addiu $sp, $sp, 0x20
}