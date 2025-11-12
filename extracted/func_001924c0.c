void func_001924c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001924c0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001924cc: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001924dc: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x001924e4: swc1 $f21, 4($sp)
    s0 = a2 & 0xffff;                                           // 0x001924e8: andi $s0, $a2, 0xffff
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001924ec: swc1 $f20, 0($sp)
    /* FPU: mov.s $f21, $f12 */                                 // 0x001924f0: mov.s $f21, $f12
    /* FPU: mov.s $f20, $f13 */                                 // 0x001924f4: mov.s $f20, $f13
label_0x1924f8:
    v0 = *(uint16_t*)((s3) + 0xc6);                             // 0x001924f8: lhu $v0, 0xc6($s3)
    if (v0 != s0) goto label_0x192570;                          // 0x001924fc: bne $v0, $s0, 0x192570
    /* nop */                                                   // 0x00192500: nop 
    FPU_F1 = *(float*)((s3) + 0x104);  // Load float            // 0x00192504: lwc1 $f1, 0x104($s3)
    a0 = s3 + 0x40;                                             // 0x00192508: addiu $a0, $s3, 0x40
    FPU_F0 = *(float*)((s2) + 0x104);  // Load float            // 0x0019250c: lwc1 $f0, 0x104($s2)
    a2 = s2 + 0x40;                                             // 0x00192514: addiu $a2, $s2, 0x40
    /* FPU: mov.s $f12, $f21 */                                 // 0x00192518: mov.s $f12, $f21
    /* FPU: mov.s $f13, $f20 */                                 // 0x0019251c: mov.s $f13, $f20
    *(float*)((s3) + 0x104) = FPU_F0;  // Store float           // 0x00192528: swc1 $f0, 0x104($s3)
    FPU_F1 = *(float*)((s3) + 0x108);  // Load float            // 0x0019252c: lwc1 $f1, 0x108($s3)
    FPU_F0 = *(float*)((s2) + 0x108);  // Load float            // 0x00192530: lwc1 $f0, 0x108($s2)
    *(float*)((s3) + 0x108) = FPU_F0;  // Store float           // 0x0019253c: swc1 $f0, 0x108($s3)
    FPU_F1 = *(float*)((s3) + 0x10c);  // Load float            // 0x00192540: lwc1 $f1, 0x10c($s3)
    FPU_F0 = *(float*)((s2) + 0x10c);  // Load float            // 0x00192544: lwc1 $f0, 0x10c($s2)
    func_00191780();  // 0x1916b0                                // 0x00192550: jal 0x1916b0
    *(float*)((s3) + 0x10c) = FPU_F0;  // Store float           // 0x00192554: swc1 $f0, 0x10c($s3)
    v0 = *(int32_t*)((s3) + 0xd0);                              // 0x00192558: lw $v0, 0xd0($s3)
    if (v0 == 0) goto label_0x192570;                           // 0x0019255c: beqz $v0, 0x192570
    /* nop */                                                   // 0x00192560: nop 
    s2 = *(int32_t*)((s2) + 0xd0);                              // 0x00192564: lw $s2, 0xd0($s2)
    goto label_0x1924f8;                                        // 0x00192568: b 0x1924f8
label_0x192570:
    v0 = *(int32_t*)((s3) + 0xcc);                              // 0x00192570: lw $v0, 0xcc($s3)
    if (v0 == 0) goto label_0x1925b4;                           // 0x00192574: beqz $v0, 0x1925b4
    /* nop */                                                   // 0x00192578: nop 
    if (s3 == s1) goto label_0x1925b4;                          // 0x0019257c: beq $s3, $s1, 0x1925b4
    /* nop */                                                   // 0x00192580: nop 
    s2 = *(int32_t*)((s2) + 0xcc);                              // 0x00192584: lw $s2, 0xcc($s2)
    goto label_0x1924f8;                                        // 0x00192588: b 0x1924f8
label_0x192590:
    v0 = *(uint16_t*)((v0) + 0xc6);                             // 0x00192594: lhu $v0, 0xc6($v0)
    if (v0 == s0) goto label_0x1924f8;                          // 0x00192598: beq $v0, $s0, 0x1924f8
    s2 = *(int32_t*)((s2) + 0xcc);                              // 0x0019259c: lw $s2, 0xcc($s2)
label_0x1925a0:
    v0 = *(int32_t*)((s3) + 0xcc);                              // 0x001925a0: lw $v0, 0xcc($s3)
    if (v0 != 0) goto label_0x192590;                           // 0x001925a4: bnez $v0, 0x192590
    /* nop */                                                   // 0x001925a8: nop 
    s3 = *(int32_t*)((s3) + 0xc8);                              // 0x001925ac: lw $s3, 0xc8($s3)
    s2 = *(int32_t*)((s2) + 0xc8);                              // 0x001925b0: lw $s2, 0xc8($s2)
label_0x1925b4:
    if (s3 != s1) goto label_0x1925a0;                          // 0x001925b4: bne $s3, $s1, 0x1925a0
    /* nop */                                                   // 0x001925b8: nop 
    v0 = 1;                                                     // 0x001925bc: addiu $v0, $zero, 1
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x001925c4: lwc1 $f21, 4($sp)
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x001925c8: xori.b $w1, $w0, 0xb3
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001925cc: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001925d4: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001925d8: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001925dc: jr $ra
    sp = sp + 0x60;                                             // 0x001925e0: addiu $sp, $sp, 0x60
}