void func_001ad600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001ad600: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001ad60c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ad614: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)((gp) + -0x63d8);                           // 0x001ad61c: lw $v0, -0x63d8($gp)
    if (v0 == 0) goto label_0x1ad638;                           // 0x001ad620: beqz $v0, 0x1ad638
    a0 = 2;                                                     // 0x001ad624: addiu $a0, $zero, 2
    func_001adc60();  // 0x1adbe0                                // 0x001ad628: jal 0x1adbe0
    /* nop */                                                   // 0x001ad62c: nop 
    goto label_0x1ad8d0;                                        // 0x001ad630: b 0x1ad8d0
    v0 = -1;                                                    // 0x001ad634: addiu $v0, $zero, -1
label_0x1ad638:
    v1 = 0x2b << 16;                                            // 0x001ad638: lui $v1, 0x2b
    v1 = v1 + -0x57f0;                                          // 0x001ad63c: addiu $v1, $v1, -0x57f0
label_0x1ad640:
    v0 = a0 << 2;                                               // 0x001ad640: sll $v0, $a0, 2
    v0 = v1 + v0;                                               // 0x001ad644: addu $v0, $v1, $v0
    a0 = a0 + -1;                                               // 0x001ad648: addiu $a0, $a0, -1
    g_002aa878 = 0;  // Global at 0x002aa878                    // 0x001ad64c: sw $zero, 0($v0)
    /* nop */                                                   // 0x001ad650: nop 
    if (a0 >= 0) goto label_0x1ad640;                           // 0x001ad654: bgez $a0, 0x1ad640
    /* nop */                                                   // 0x001ad658: nop 
    a0 = 0x2b << 16;                                            // 0x001ad65c: lui $a0, 0x2b
    a0 = a0 + -0x57e0;                                          // 0x001ad664: addiu $a0, $a0, -0x57e0
    func_00107d30();  // 0x107c70                                // 0x001ad668: jal 0x107c70
    a2 = 0x48;                                                  // 0x001ad66c: addiu $a2, $zero, 0x48
    func_001af0d0();  // 0x1af020                                // 0x001ad670: jal 0x1af020
    a0 = gp + -0x63d0;                                          // 0x001ad674: addiu $a0, $gp, -0x63d0
    v1 = s0 << 1;                                               // 0x001ad67c: sll $v1, $s0, 1
label_0x1ad680:
    v0 = 0x2b << 16;                                            // 0x001ad680: lui $v0, 0x2b
    v1 = v1 + s0;                                               // 0x001ad684: addu $v1, $v1, $s0
    v0 = v0 + -0x57e0;                                          // 0x001ad688: addiu $v0, $v0, -0x57e0
    v1 = v1 << 3;                                               // 0x001ad68c: sll $v1, $v1, 3
    a1 = v0 + v1;                                               // 0x001ad690: addu $a1, $v0, $v1
    if (s0 != 0) goto label_0x1ad6e8;                           // 0x001ad694: bnez $s0, 0x1ad6e8
    *(uint8_t*)(a1) = 0;                                        // 0x001ad698: sb $zero, 0($a1)
    at = 0x31 << 16;                                            // 0x001ad69c: lui $at, 0x31
    v0 = 0x42c8 << 16;                                          // 0x001ad6a0: lui $v0, 0x42c8
    a0 = g_003137a9;  // Global at 0x003137a9                   // 0x001ad6a4: lbu $a0, 0x37a9($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001ad6a8: mtc1 $v0, $f0
    v1 = 0x64;                                                  // 0x001ad6ac: addiu $v1, $zero, 0x64
    v0 = a0 << 7;                                               // 0x001ad6b0: sll $v0, $a0, 7
    a0 = v0 - a0;                                               // 0x001ad6b4: subu $a0, $v0, $a0
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ad6b8: div $zero, $a0, $v1
    /* move to FPU: $a0, $f1 */                                 // 0x001ad6bc: mtc1 $a0, $f1
    /* nop */                                                   // 0x001ad6c0: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001ad6c4: cvt.s.w $f1, $f1
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001ad6c8: div.s $f0, $f1, $f0
    /* mflo $v0 */                                              // 0x001ad6cc
    *(uint32_t*)((a1) + 8) = v0;                                // 0x001ad6d0: sw $v0, 8($a1)
    *(uint32_t*)((a1) + 4) = v0;                                // 0x001ad6d4: sw $v0, 4($a1)
    /* nop */                                                   // 0x001ad6d8: nop 
    /* nop */                                                   // 0x001ad6dc: nop 
    goto label_0x1ad728;                                        // 0x001ad6e0: b 0x1ad728
    *(float*)((a1) + 0x10) = FPU_F0;  // Store float            // 0x001ad6e4: swc1 $f0, 0x10($a1)
label_0x1ad6e8:
    at = 0x31 << 16;                                            // 0x001ad6e8: lui $at, 0x31
    v0 = 0x42c8 << 16;                                          // 0x001ad6ec: lui $v0, 0x42c8
    a0 = g_003137aa;  // Global at 0x003137aa                   // 0x001ad6f0: lbu $a0, 0x37aa($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001ad6f4: mtc1 $v0, $f0
    v1 = 0x64;                                                  // 0x001ad6f8: addiu $v1, $zero, 0x64
    v0 = a0 << 7;                                               // 0x001ad6fc: sll $v0, $a0, 7
    a0 = v0 - a0;                                               // 0x001ad700: subu $a0, $v0, $a0
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ad704: div $zero, $a0, $v1
    /* move to FPU: $a0, $f1 */                                 // 0x001ad708: mtc1 $a0, $f1
    /* nop */                                                   // 0x001ad70c: nop 
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001ad710: cvt.s.w $f1, $f1
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001ad714: div.s $f0, $f1, $f0
    /* mflo $v0 */                                              // 0x001ad718
    *(uint32_t*)((a1) + 8) = v0;                                // 0x001ad71c: sw $v0, 8($a1)
    *(uint32_t*)((a1) + 4) = v0;                                // 0x001ad720: sw $v0, 4($a1)
    *(float*)((a1) + 0x10) = FPU_F0;  // Store float            // 0x001ad724: swc1 $f0, 0x10($a1)
label_0x1ad728:
    v0 = gp + -0x7d20;                                          // 0x001ad728: addiu $v0, $gp, -0x7d20
    *(uint32_t*)((a1) + 0xc) = 0;                               // 0x001ad72c: sw $zero, 0xc($a1)
    v0 = v0 + s0;                                               // 0x001ad730: addu $v0, $v0, $s0
    v1 = 2;                                                     // 0x001ad734: addiu $v1, $zero, 2
    v0 = g_42c80000;  // Global at 0x42c80000                   // 0x001ad738: lb $v0, 0($v0)
    *(uint8_t*)((a1) + 1) = v0;                                 // 0x001ad73c: sb $v0, 1($a1)
    v0 = *(int8_t*)((a1) + 1);                                  // 0x001ad740: lb $v0, 1($a1)
    if (v0 != v1) goto label_0x1ad7c8;                          // 0x001ad744: bne $v0, $v1, 0x1ad7c8
    s2 = a1 + 1;                                                // 0x001ad748: addiu $s2, $a1, 1
    a0 = v0 << 5;                                               // 0x001ad74c: sll $a0, $v0, 5
    v1 = 0x2c;                                                  // 0x001ad750: addiu $v1, $zero, 0x2c
    a0 = a0 - v0;                                               // 0x001ad754: subu $a0, $a0, $v0
    a0 = a0 << 2;                                               // 0x001ad758: sll $a0, $a0, 2
    a1 = a0 + v0;                                               // 0x001ad75c: addu $a1, $a0, $v0
    a0 = a1 << 4;                                               // 0x001ad760: sll $a0, $a1, 4
    a1 = a0 - a1;                                               // 0x001ad764: subu $a1, $a0, $a1
    a0 = a1 << 2;                                               // 0x001ad768: sll $a0, $a1, 2
    a0 = a1 + a0;                                               // 0x001ad76c: addu $a0, $a1, $a0
    a0 = a0 << 7;                                               // 0x001ad770: sll $a0, $a0, 7
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ad774: div $zero, $a0, $v1
    /* nop */                                                   // 0x001ad778: nop 
    /* nop */                                                   // 0x001ad77c: nop 
    /* mflo $a0 */                                              // 0x001ad780
    v1 = a0 << 2;                                               // 0x001ad784: sll $v1, $a0, 2
    v1 = v1 + a0;                                               // 0x001ad788: addu $v1, $v1, $a0
    a0 = v1 + 0x800;                                            // 0x001ad78c: addiu $a0, $v1, 0x800
    if (a0 >= 0) goto label_0x1ad7a0;                           // 0x001ad790: bgez $a0, 0x1ad7a0
    v1 = a0 >> 0xb;                                             // 0x001ad794: sra $v1, $a0, 0xb
    v1 = a0 + 0x7ff;                                            // 0x001ad798: addiu $v1, $a0, 0x7ff
    v1 = v1 >> 0xb;                                             // 0x001ad79c: sra $v1, $v1, 0xb
label_0x1ad7a0:
    a0 = v1 << 0xb;                                             // 0x001ad7a0: sll $a0, $v1, 0xb
    v1 = v0 << 7;                                               // 0x001ad7a4: sll $v1, $v0, 7
    a0 = a0 + 0x24;                                             // 0x001ad7a8: addiu $a0, $a0, 0x24
    v1 = v1 + v0;                                               // 0x001ad7ac: addu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x001ad7b0: sll $v1, $v1, 1
    v0 = v1 + v0;                                               // 0x001ad7b4: addu $v0, $v1, $v0
    v0 = v0 << 6;                                               // 0x001ad7b8: sll $v0, $v0, 6
    v0 = v0 + a0;                                               // 0x001ad7bc: addu $v0, $v0, $a0
    goto label_0x1ad83c;                                        // 0x001ad7c0: b 0x1ad83c
    s4 = v0 + 0x40;                                             // 0x001ad7c4: addiu $s4, $v0, 0x40
label_0x1ad7c8:
    a0 = v0 << 5;                                               // 0x001ad7c8: sll $a0, $v0, 5
    v1 = 0x2c;                                                  // 0x001ad7cc: addiu $v1, $zero, 0x2c
    a0 = a0 - v0;                                               // 0x001ad7d0: subu $a0, $a0, $v0
    a0 = a0 << 2;                                               // 0x001ad7d4: sll $a0, $a0, 2
    a1 = a0 + v0;                                               // 0x001ad7d8: addu $a1, $a0, $v0
    a0 = a1 << 4;                                               // 0x001ad7dc: sll $a0, $a1, 4
    a1 = a0 - a1;                                               // 0x001ad7e0: subu $a1, $a0, $a1
    a0 = a1 << 2;                                               // 0x001ad7e4: sll $a0, $a1, 2
    a0 = a1 + a0;                                               // 0x001ad7e8: addu $a0, $a1, $a0
    a0 = a0 << 6;                                               // 0x001ad7ec: sll $a0, $a0, 6
    /* divide: a0 / v1 -> hi:lo */                              // 0x001ad7f0: div $zero, $a0, $v1
    /* nop */                                                   // 0x001ad7f4: nop 
    /* nop */                                                   // 0x001ad7f8: nop 
    /* mflo $v1 */                                              // 0x001ad7fc
    v1 = v1 << 2;                                               // 0x001ad800: sll $v1, $v1, 2
    a0 = v1 + 0x800;                                            // 0x001ad804: addiu $a0, $v1, 0x800
    if (a0 >= 0) goto label_0x1ad818;                           // 0x001ad808: bgez $a0, 0x1ad818
    v1 = a0 >> 0xb;                                             // 0x001ad80c: sra $v1, $a0, 0xb
    v1 = a0 + 0x7ff;                                            // 0x001ad810: addiu $v1, $a0, 0x7ff
    v1 = v1 >> 0xb;                                             // 0x001ad814: sra $v1, $v1, 0xb
label_0x1ad818:
    a0 = v1 << 0xb;                                             // 0x001ad818: sll $a0, $v1, 0xb
    v1 = v0 << 7;                                               // 0x001ad81c: sll $v1, $v0, 7
    a0 = a0 + 0x24;                                             // 0x001ad820: addiu $a0, $a0, 0x24
    v1 = v1 + v0;                                               // 0x001ad824: addu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x001ad828: sll $v1, $v1, 1
    v0 = v1 + v0;                                               // 0x001ad82c: addu $v0, $v1, $v0
    v0 = v0 << 6;                                               // 0x001ad830: sll $v0, $v0, 6
    v0 = v0 + a0;                                               // 0x001ad834: addu $v0, $v0, $a0
    s4 = v0 + 0x40;                                             // 0x001ad838: addiu $s4, $v0, 0x40
label_0x1ad83c:
    v0 = 0x2b << 16;                                            // 0x001ad83c: lui $v0, 0x2b
    s1 = s0 << 2;                                               // 0x001ad840: sll $s1, $s0, 2
    v0 = v0 + -0x5798;                                          // 0x001ad844: addiu $v0, $v0, -0x5798
    func_001aefc0();  // 0x1aef60                                // 0x001ad84c: jal 0x1aef60
    s3 = v0 + s1;                                               // 0x001ad850: addu $s3, $v0, $s1
    *(uint32_t*)(s3) = v0;                                      // 0x001ad854: sw $v0, 0($s3)
    v0 = 0x2b << 16;                                            // 0x001ad858: lui $v0, 0x2b
    v0 = v0 + -0x5788;                                          // 0x001ad85c: addiu $v0, $v0, -0x5788
    s1 = v0 + s1;                                               // 0x001ad860: addu $s1, $v0, $s1
label_0x1ad864:
    a0 = *(int8_t*)(s2);                                        // 0x001ad864: lb $a0, 0($s2)
    a1 = *(int32_t*)(s3);                                       // 0x001ad868: lw $a1, 0($s3)
    func_00131588();  // 0x1312a0                                // 0x001ad86c: jal 0x1312a0
    *(uint32_t*)(s1) = v0;                                      // 0x001ad874: sw $v0, 0($s1)
    if (v0 == 0) goto label_0x1ad864;                           // 0x001ad878: beqz $v0, 0x1ad864
    /* nop */                                                   // 0x001ad87c: nop 
    v1 = *(int8_t*)(s2);                                        // 0x001ad880: lb $v1, 0($s2)
    v0 = 2;                                                     // 0x001ad884: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1ad89c;                          // 0x001ad888: bne $v1, $v0, 0x1ad89c
    /* nop */                                                   // 0x001ad88c: nop 
    a0 = *(int32_t*)(s1);                                       // 0x001ad890: lw $a0, 0($s1)
    func_00132668();  // 0x132638                                // 0x001ad894: jal 0x132638
    a1 = 0x19;                                                  // 0x001ad898: addiu $a1, $zero, 0x19
label_0x1ad89c:
    a0 = *(int32_t*)(s1);                                       // 0x001ad89c: lw $a0, 0($s1)
    func_00132890();  // 0x132888                                // 0x001ad8a0: jal 0x132888
    a1 = 2;                                                     // 0x001ad8a4: addiu $a1, $zero, 2
    a0 = *(int32_t*)(s1);                                       // 0x001ad8a8: lw $a0, 0($s1)
    func_001325a8();  // 0x132578                                // 0x001ad8ac: jal 0x132578
    a1 = 0x1e;                                                  // 0x001ad8b0: addiu $a1, $zero, 0x1e
    s0 = s0 + 1;                                                // 0x001ad8b4: addiu $s0, $s0, 1
    v0 = (s0 < 3) ? 1 : 0;                                      // 0x001ad8b8: slti $v0, $s0, 3
    if (v0 != 0) goto label_0x1ad680;                           // 0x001ad8bc: bnez $v0, 0x1ad680
    v1 = s0 << 1;                                               // 0x001ad8c0: sll $v1, $s0, 1
    v1 = 1;                                                     // 0x001ad8c4: addiu $v1, $zero, 1
    *(uint32_t*)((gp) + -0x63d8) = v1;                          // 0x001ad8cc: sw $v1, -0x63d8($gp)
label_0x1ad8d0:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001ad8d4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001ad8dc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ad8e0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ad8e4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ad8e8: jr $ra
    sp = sp + 0x60;                                             // 0x001ad8ec: addiu $sp, $sp, 0x60
}