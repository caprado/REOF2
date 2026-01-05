void func_001d9490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001d9490: addiu $sp, $sp, -0x70
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d9498: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d94a4: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d94b4: addu.qb $zero, $sp, $s1
    func_001a2ef0();  // 1a2ef0                                // 0x001d94bc: jal 0x1a2ef0
    *(uint16_t*)((s5) + 0x814) = v0;                            // 0x001d94c4: sh $v0, 0x814($s5)
    goto label_0x1d9674;                                        // 0x001d94c8: b 0x1d9674
label_0x1d94d0:
    func_001a2ff0();  // 1a2ff0                                // 0x001d94d0: jal 0x1a2ff0
    v0 = s0 << 1;                                               // 0x001d94dc: sll $v0, $s0, 1
    v0 = s5 + v0;                                               // 0x001d94e0: addu $v0, $s5, $v0
    func_001b1090();  // 1b1090                                // 0x001d94e4: jal 0x1b1090
    s1 = v0 + 8;                                                // 0x001d94e8: addiu $s1, $v0, 8
    *(uint16_t*)(s1) = v0;                                      // 0x001d94ec: sh $v0, 0($s1)
    a0 = 0x4c << 16;                                            // 0x001d94f0: lui $a0, 0x4c
    a2 = *(uint16_t*)(s1);                                      // 0x001d94f4: lhu $a2, 0($s1)
    a0 = a0 + 0x4290;                                           // 0x001d94f8: addiu $a0, $a0, 0x4290
    v1 = *(int32_t*)((s2) + 0x34);                              // 0x001d94fc: lw $v1, 0x34($s2)
    a1 = a2 << 3;                                               // 0x001d9500: sll $a1, $a2, 3
    a1 = a1 + a2;                                               // 0x001d9504: addu $a1, $a1, $a2
    a1 = a1 << 1;                                               // 0x001d9508: sll $a1, $a1, 1
    a1 = a1 + a2;                                               // 0x001d950c: addu $a1, $a1, $a2
    a1 = a1 << 2;                                               // 0x001d9510: sll $a1, $a1, 2
    if (v1 == 0) goto label_0x1d95e8;                           // 0x001d9514: beqz $v1, 0x1d95e8
    s1 = a0 + a1;                                               // 0x001d9518: addu $s1, $a0, $a1
    a1 = *(int32_t*)((s2) + 0x100);                             // 0x001d951c: lw $a1, 0x100($s2)
    func_001a30c0();  // 1a30c0                                // 0x001d9520: jal 0x1a30c0
    if (s3 != 0) goto label_0x1d9558;                           // 0x001d9528: bnez $s3, 0x1d9558
    a1 = *(int32_t*)(v0);                                       // 0x001d952c: lw $a1, 0($v0)
    func_001d3c40();  // 1d3c40                                // 0x001d9530: jal 0x1d3c40
    *(uint32_t*)((s1) + 0x44) = v0;                             // 0x001d9538: sw $v0, 0x44($s1)
    v1 = *(int32_t*)((s1) + 0x44);                              // 0x001d953c: lw $v1, 0x44($s1)
    if (v1 != 0) goto label_0x1d9564;                           // 0x001d9540: bnez $v1, 0x1d9564
    a0 = 0xff0;                                                 // 0x001d9544: addiu $a0, $zero, 0xff0
    func_001d3cb0();  // 1d3cb0                                // 0x001d9548: jal 0x1d3cb0
    /* nop */                                                   // 0x001d954c: nop 
    goto label_0x1d9564;                                        // 0x001d9550: b 0x1d9564
    *(uint32_t*)((s1) + 0x44) = v0;                             // 0x001d9554: sw $v0, 0x44($s1)
label_0x1d9558:
    func_001d3d20();  // 1d3d20                                // 0x001d9558: jal 0x1d3d20
    *(uint32_t*)((s1) + 0x44) = v0;                             // 0x001d9560: sw $v0, 0x44($s1)
label_0x1d9564:
    FPU_F0 = *(float*)((s2) + 0x10);  // Load float             // 0x001d9564: lwc1 $f0, 0x10($s2)
    *(float*)((s1) + 4) = FPU_F0;  // Store float               // 0x001d9568: swc1 $f0, 4($s1)
    FPU_F0 = *(float*)((s2) + 0x14);  // Load float             // 0x001d956c: lwc1 $f0, 0x14($s2)
    *(float*)((s1) + 8) = FPU_F0;  // Store float               // 0x001d9570: swc1 $f0, 8($s1)
    FPU_F0 = *(float*)((s2) + 0x18);  // Load float             // 0x001d9574: lwc1 $f0, 0x18($s2)
    *(float*)((s1) + 0xc) = FPU_F0;  // Store float             // 0x001d9578: swc1 $f0, 0xc($s1)
    FPU_F0 = *(float*)((s2) + 0x1c);  // Load float             // 0x001d957c: lwc1 $f0, 0x1c($s2)
    *(float*)((s1) + 0x10) = FPU_F0;  // Store float            // 0x001d9580: swc1 $f0, 0x10($s1)
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x001d9584: lwc1 $f0, 0($s2)
    *(float*)((s1) + 0x24) = FPU_F0;  // Store float            // 0x001d9588: swc1 $f0, 0x24($s1)
    FPU_F0 = *(float*)((s2) + 4);  // Load float                // 0x001d958c: lwc1 $f0, 4($s2)
    *(float*)((s1) + 0x28) = FPU_F0;  // Store float            // 0x001d9590: swc1 $f0, 0x28($s1)
    FPU_F0 = *(float*)((s2) + 8);  // Load float                // 0x001d9594: lwc1 $f0, 8($s2)
    *(float*)((s1) + 0x2c) = FPU_F0;  // Store float            // 0x001d9598: swc1 $f0, 0x2c($s1)
    FPU_F0 = *(float*)((s2) + 0xc);  // Load float              // 0x001d959c: lwc1 $f0, 0xc($s2)
    *(float*)((s1) + 0x30) = FPU_F0;  // Store float            // 0x001d95a0: swc1 $f0, 0x30($s1)
    FPU_F0 = *(float*)((s2) + 0x20);  // Load float             // 0x001d95a4: lwc1 $f0, 0x20($s2)
    *(float*)((s1) + 0x14) = FPU_F0;  // Store float            // 0x001d95a8: swc1 $f0, 0x14($s1)
    FPU_F0 = *(float*)((s2) + 0x24);  // Load float             // 0x001d95ac: lwc1 $f0, 0x24($s2)
    *(float*)((s1) + 0x18) = FPU_F0;  // Store float            // 0x001d95b0: swc1 $f0, 0x18($s1)
    FPU_F0 = *(float*)((s2) + 0x28);  // Load float             // 0x001d95b4: lwc1 $f0, 0x28($s2)
    *(float*)((s1) + 0x1c) = FPU_F0;  // Store float            // 0x001d95b8: swc1 $f0, 0x1c($s1)
    FPU_F0 = *(float*)((s2) + 0x2c);  // Load float             // 0x001d95bc: lwc1 $f0, 0x2c($s2)
    *(float*)((s1) + 0x20) = FPU_F0;  // Store float            // 0x001d95c0: swc1 $f0, 0x20($s1)
    *(uint32_t*)((s1) + 0x40) = 0;                              // 0x001d95c4: sw $zero, 0x40($s1)
    *(uint32_t*)((s1) + 0x3c) = 0;                              // 0x001d95c8: sw $zero, 0x3c($s1)
    *(uint32_t*)((s1) + 0x38) = 0;                              // 0x001d95cc: sw $zero, 0x38($s1)
    *(uint32_t*)((s1) + 0x34) = 0;                              // 0x001d95d0: sw $zero, 0x34($s1)
    FPU_F0 = *(float*)((s2) + 0x30);  // Load float             // 0x001d95d4: lwc1 $f0, 0x30($s2)
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001d95d8: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x001d95dc: mfc1 $v1, $f0
    goto label_0x1d9670;                                        // 0x001d95e0: b 0x1d9670
    *(uint32_t*)((s1) + 0x48) = v1;                             // 0x001d95e4: sw $v1, 0x48($s1)
label_0x1d95e8:
    FPU_F0 = *(float*)((s2) + 0x10);  // Load float             // 0x001d95e8: lwc1 $f0, 0x10($s2)
    *(float*)((s1) + 4) = FPU_F0;  // Store float               // 0x001d95ec: swc1 $f0, 4($s1)
    FPU_F0 = *(float*)((s2) + 0x14);  // Load float             // 0x001d95f0: lwc1 $f0, 0x14($s2)
    *(float*)((s1) + 8) = FPU_F0;  // Store float               // 0x001d95f4: swc1 $f0, 8($s1)
    FPU_F0 = *(float*)((s2) + 0x18);  // Load float             // 0x001d95f8: lwc1 $f0, 0x18($s2)
    *(float*)((s1) + 0xc) = FPU_F0;  // Store float             // 0x001d95fc: swc1 $f0, 0xc($s1)
    FPU_F0 = *(float*)((s2) + 0x1c);  // Load float             // 0x001d9600: lwc1 $f0, 0x1c($s2)
    *(float*)((s1) + 0x10) = FPU_F0;  // Store float            // 0x001d9604: swc1 $f0, 0x10($s1)
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x001d9608: lwc1 $f0, 0($s2)
    *(float*)((s1) + 0x24) = FPU_F0;  // Store float            // 0x001d960c: swc1 $f0, 0x24($s1)
    FPU_F0 = *(float*)((s2) + 4);  // Load float                // 0x001d9610: lwc1 $f0, 4($s2)
    *(float*)((s1) + 0x28) = FPU_F0;  // Store float            // 0x001d9614: swc1 $f0, 0x28($s1)
    FPU_F0 = *(float*)((s2) + 8);  // Load float                // 0x001d9618: lwc1 $f0, 8($s2)
    *(float*)((s1) + 0x2c) = FPU_F0;  // Store float            // 0x001d961c: swc1 $f0, 0x2c($s1)
    FPU_F0 = *(float*)((s2) + 0xc);  // Load float              // 0x001d9620: lwc1 $f0, 0xc($s2)
    *(float*)((s1) + 0x30) = FPU_F0;  // Store float            // 0x001d9624: swc1 $f0, 0x30($s1)
    FPU_F0 = *(float*)((s2) + 0x20);  // Load float             // 0x001d9628: lwc1 $f0, 0x20($s2)
    *(float*)((s1) + 0x14) = FPU_F0;  // Store float            // 0x001d962c: swc1 $f0, 0x14($s1)
    FPU_F0 = *(float*)((s2) + 0x24);  // Load float             // 0x001d9630: lwc1 $f0, 0x24($s2)
    *(float*)((s1) + 0x18) = FPU_F0;  // Store float            // 0x001d9634: swc1 $f0, 0x18($s1)
    FPU_F0 = *(float*)((s2) + 0x28);  // Load float             // 0x001d9638: lwc1 $f0, 0x28($s2)
    *(float*)((s1) + 0x1c) = FPU_F0;  // Store float            // 0x001d963c: swc1 $f0, 0x1c($s1)
    FPU_F0 = *(float*)((s2) + 0x2c);  // Load float             // 0x001d9640: lwc1 $f0, 0x2c($s2)
    *(float*)((s1) + 0x20) = FPU_F0;  // Store float            // 0x001d9644: swc1 $f0, 0x20($s1)
    *(uint32_t*)((s1) + 0x40) = 0;                              // 0x001d9648: sw $zero, 0x40($s1)
    *(uint32_t*)((s1) + 0x3c) = 0;                              // 0x001d964c: sw $zero, 0x3c($s1)
    *(uint32_t*)((s1) + 0x38) = 0;                              // 0x001d9650: sw $zero, 0x38($s1)
    *(uint32_t*)((s1) + 0x34) = 0;                              // 0x001d9654: sw $zero, 0x34($s1)
    FPU_F0 = *(float*)((s2) + 0x30);  // Load float             // 0x001d9658: lwc1 $f0, 0x30($s2)
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001d965c: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x001d9660: mfc1 $v1, $f0
    /* nop */                                                   // 0x001d9664: nop 
    *(uint32_t*)((s1) + 0x48) = v1;                             // 0x001d9668: sw $v1, 0x48($s1)
    *(uint32_t*)((s1) + 0x44) = 0;                              // 0x001d966c: sw $zero, 0x44($s1)
label_0x1d9670:
    s0 = s0 + 1;                                                // 0x001d9670: addiu $s0, $s0, 1
label_0x1d9674:
    v1 = *(uint16_t*)((s5) + 0x814);                            // 0x001d9674: lhu $v1, 0x814($s5)
    v1 = (s0 < v1) ? 1 : 0;                                     // 0x001d9678: slt $v1, $s0, $v1
    if (v1 != 0) goto label_0x1d94d0;                           // 0x001d967c: bnez $v1, 0x1d94d0
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d9688: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d968c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d9694: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9698: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d969c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d96a0: jr $ra
    sp = sp + 0x70;                                             // 0x001d96a4: addiu $sp, $sp, 0x70
}