void func_001b1550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b1550: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b155c: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 0x808);                             // 0x001b1564: lw $v1, 0x808($a0)
    if (v1 == 0) goto label_0x1b15fc;                           // 0x001b1568: beqz $v1, 0x1b15fc
    goto label_0x1b15d4;                                        // 0x001b1570: b 0x1b15d4
label_0x1b1578:
    v1 = *(int32_t*)((s2) + 0x808);                             // 0x001b1578: lw $v1, 0x808($s2)
    v0 = s1 << 3;                                               // 0x001b157c: sll $v0, $s1, 3
    a0 = v0 + s1;                                               // 0x001b1580: addu $a0, $v0, $s1
    a0 = a0 << 1;                                               // 0x001b1584: sll $a0, $a0, 1
    v0 = -1;                                                    // 0x001b1588: addiu $v0, $zero, -1
    a0 = a0 + s1;                                               // 0x001b158c: addu $a0, $a0, $s1
    s0 = a0 << 3;                                               // 0x001b1590: sll $s0, $a0, 3
    v1 = v1 + s0;                                               // 0x001b1594: addu $v1, $v1, $s0
    a0 = *(int32_t*)(v1);                                       // 0x001b1598: lw $a0, 0($v1)
    if (a0 == v0) goto label_0x1b15d0;                          // 0x001b159c: beq $a0, $v0, 0x1b15d0
    /* nop */                                                   // 0x001b15a0: nop 
    if (a0 == 0) goto label_0x1b15d0;                           // 0x001b15a4: beqz $a0, 0x1b15d0
    /* nop */                                                   // 0x001b15a8: nop 
    func_0018c490();  // 0x18c350                                // 0x001b15ac: jal 0x18c350
    /* nop */                                                   // 0x001b15b0: nop 
    v0 = *(int32_t*)((s2) + 0x808);                             // 0x001b15b4: lw $v0, 0x808($s2)
    v0 = v0 + s0;                                               // 0x001b15b8: addu $v0, $v0, $s0
    func_001b0df0();  // 0x1b0db0                                // 0x001b15bc: jal 0x1b0db0
    a0 = *(int32_t*)(v0);                                       // 0x001b15c0: lw $a0, 0($v0)
    v0 = *(int32_t*)((s2) + 0x808);                             // 0x001b15c4: lw $v0, 0x808($s2)
    v0 = v0 + s0;                                               // 0x001b15c8: addu $v0, $v0, $s0
    *(uint32_t*)(v0) = 0;                                       // 0x001b15cc: sw $zero, 0($v0)
label_0x1b15d0:
    s1 = s1 + 1;                                                // 0x001b15d0: addiu $s1, $s1, 1
label_0x1b15d4:
    v0 = *(uint16_t*)((s2) + 0x812);                            // 0x001b15d4: lhu $v0, 0x812($s2)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001b15d8: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1b1578;                           // 0x001b15dc: bnez $v0, 0x1b1578
    func_001b1870();  // 0x1b17c0                                // 0x001b15e4: jal 0x1b17c0
    /* nop */                                                   // 0x001b15e8: nop 
    func_001b29e0();  // 0x1b28a0                                // 0x001b15ec: jal 0x1b28a0
    a0 = *(int32_t*)((s2) + 0x808);                             // 0x001b15f0: lw $a0, 0x808($s2)
    *(uint32_t*)((s2) + 0x808) = 0;                             // 0x001b15f4: sw $zero, 0x808($s2)
    *(uint16_t*)((s2) + 0x812) = 0;                             // 0x001b15f8: sh $zero, 0x812($s2)
label_0x1b15fc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b1600: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b1604: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1608: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b160c: jr $ra
    sp = sp + 0x40;                                             // 0x001b1610: addiu $sp, $sp, 0x40
}