void func_001cb700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001cb700: addiu $sp, $sp, -0x70
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001cb708: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cb714: dpa.w.ph $ac0, $sp, $s3
    a0 = a1 + a2;                                               // 0x001cb718: addu $a0, $a1, $a2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cb724: addu.qb $zero, $sp, $s1
    if (a0 >= 0) goto label_0x1cb748;                           // 0x001cb738: bgez $a0, 0x1cb748
    v1 = a0 >> 1;                                               // 0x001cb73c: sra $v1, $a0, 1
    v1 = a0 + 1;                                                // 0x001cb740: addiu $v1, $a0, 1
    v1 = v1 >> 1;                                               // 0x001cb744: sra $v1, $v1, 1
label_0x1cb748:
    v1 = v1 << 2;                                               // 0x001cb748: sll $v1, $v1, 2
    v1 = s5 + v1;                                               // 0x001cb74c: addu $v1, $s5, $v1
    v1 = *(int32_t*)(v1);                                       // 0x001cb750: lw $v1, 0($v1)
    goto label_0x1cb760;                                        // 0x001cb754: b 0x1cb760
    s0 = *(int32_t*)((v1) + 8);                                 // 0x001cb758: lw $s0, 8($v1)
label_0x1cb75c:
    s2 = s2 + 1;                                                // 0x001cb75c: addiu $s2, $s2, 1
label_0x1cb760:
    v1 = s2 << 2;                                               // 0x001cb760: sll $v1, $s2, 2
    a0 = s5 + v1;                                               // 0x001cb764: addu $a0, $s5, $v1
    v1 = *(int32_t*)(a0);                                       // 0x001cb768: lw $v1, 0($a0)
    v1 = *(int32_t*)((v1) + 8);                                 // 0x001cb76c: lw $v1, 8($v1)
    v1 = ((unsigned)v1 < (unsigned)s0) ? 1 : 0;                 // 0x001cb770: sltu $v1, $v1, $s0
    if (v1 != 0) goto label_0x1cb75c;                           // 0x001cb774: bnez $v1, 0x1cb75c
    /* nop */                                                   // 0x001cb778: nop 
    goto label_0x1cb78c;                                        // 0x001cb77c: b 0x1cb78c
    v1 = s1 << 2;                                               // 0x001cb780: sll $v1, $s1, 2
label_0x1cb784:
    s1 = s1 + -1;                                               // 0x001cb784: addiu $s1, $s1, -1
    v1 = s1 << 2;                                               // 0x001cb788: sll $v1, $s1, 2
label_0x1cb78c:
    a1 = s5 + v1;                                               // 0x001cb78c: addu $a1, $s5, $v1
    v1 = *(int32_t*)(a1);                                       // 0x001cb790: lw $v1, 0($a1)
    v1 = *(int32_t*)((v1) + 8);                                 // 0x001cb794: lw $v1, 8($v1)
    at = ((unsigned)s0 < (unsigned)v1) ? 1 : 0;                 // 0x001cb798: sltu $at, $s0, $v1
    if (at != 0) goto label_0x1cb784;                           // 0x001cb79c: bnez $at, 0x1cb784
    at = (s2 < s1) ? 1 : 0;                                     // 0x001cb7a0: slt $at, $s2, $s1
    if (at == 0) goto label_0x1cb7c0;                           // 0x001cb7a4: beqz $at, 0x1cb7c0
    a2 = s2 + -1;                                               // 0x001cb7a8: addiu $a2, $s2, -1
    func_001cb840();  // 0x1cb820                                // 0x001cb7ac: jal 0x1cb820
    /* nop */                                                   // 0x001cb7b0: nop 
    s2 = s2 + 1;                                                // 0x001cb7b4: addiu $s2, $s2, 1
    goto label_0x1cb760;                                        // 0x001cb7b8: b 0x1cb760
    s1 = s1 + -1;                                               // 0x001cb7bc: addiu $s1, $s1, -1
label_0x1cb7c0:
    at = (s4 < a2) ? 1 : 0;                                     // 0x001cb7c0: slt $at, $s4, $a2
    if (at == 0) goto label_0x1cb7dc;                           // 0x001cb7c4: beqz $at, 0x1cb7dc
    a1 = s1 + 1;                                                // 0x001cb7c8: addiu $a1, $s1, 1
    func_001cb820();  // 0x1cb700                                // 0x001cb7d0: jal 0x1cb700
    a1 = s1 + 1;                                                // 0x001cb7d8: addiu $a1, $s1, 1
label_0x1cb7dc:
    at = (a1 < s3) ? 1 : 0;                                     // 0x001cb7dc: slt $at, $a1, $s3
    if (at == 0) goto label_0x1cb7f0;                           // 0x001cb7e0: beqz $at, 0x1cb7f0
    func_001cb820();  // 0x1cb700                                // 0x001cb7e8: jal 0x1cb700
label_0x1cb7f0:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001cb7f4: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001cb7f8: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cb800: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cb804: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb808: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb80c: jr $ra
    sp = sp + 0x70;                                             // 0x001cb810: addiu $sp, $sp, 0x70
}