void func_00193750() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00193750: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019375c: addu.qb $zero, $sp, $s1
    if (s0 == 0) goto label_0x193778;                           // 0x0019376c: beqz $s0, 0x193778
    *(uint32_t*)((s1) + 0xc8) = s0;                             // 0x00193774: sw $s0, 0xc8($s1)
label_0x193778:
    a0 = *(int16_t*)((s1) + 0x182);                             // 0x00193778: lh $a0, 0x182($s1)
    v1 = -1;                                                    // 0x0019377c: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1937a8;                          // 0x00193780: beq $a0, $v1, 0x1937a8
    /* nop */                                                   // 0x00193784: nop 
    v0 = a0 << 2;                                               // 0x00193788: sll $v0, $a0, 2
    v0 = s2 + v0;                                               // 0x00193790: addu $v0, $s2, $v0
    v0 = *(int32_t*)(v0);                                       // 0x00193794: lw $v0, 0($v0)
    *(uint32_t*)((s1) + 0xd0) = v0;                             // 0x00193798: sw $v0, 0xd0($s1)
    a1 = *(int32_t*)((s1) + 0xd0);                              // 0x0019379c: lw $a1, 0xd0($s1)
    func_001937f0();  // 0x193750                                // 0x001937a0: jal 0x193750
label_0x1937a8:
    a0 = *(int16_t*)((s1) + 0x180);                             // 0x001937a8: lh $a0, 0x180($s1)
    v1 = -1;                                                    // 0x001937ac: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1937d8;                          // 0x001937b0: beq $a0, $v1, 0x1937d8
    /* nop */                                                   // 0x001937b4: nop 
    v0 = a0 << 2;                                               // 0x001937b8: sll $v0, $a0, 2
    v0 = s2 + v0;                                               // 0x001937c0: addu $v0, $s2, $v0
    v0 = *(int32_t*)(v0);                                       // 0x001937c4: lw $v0, 0($v0)
    *(uint32_t*)((s1) + 0xcc) = v0;                             // 0x001937c8: sw $v0, 0xcc($s1)
    a1 = *(int32_t*)((s1) + 0xcc);                              // 0x001937cc: lw $a1, 0xcc($s1)
    func_001937f0();  // 0x193750                                // 0x001937d0: jal 0x193750
label_0x1937d8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001937dc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001937e0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001937e4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001937e8: jr $ra
    sp = sp + 0x40;                                             // 0x001937ec: addiu $sp, $sp, 0x40
}