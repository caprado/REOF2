void func_001b17c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b17c0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b17cc: addu.qb $zero, $sp, $s1
    goto label_0x1b1838;                                        // 0x001b17d8: b 0x1b1838
label_0x1b17e0:
    v0 = s1 << 1;                                               // 0x001b17e0: sll $v0, $s1, 1
    v1 = 0x4c << 16;                                            // 0x001b17e4: lui $v1, 0x4c
    a3 = s2 + v0;                                               // 0x001b17e8: addu $a3, $s2, $v0
    v1 = v1 + 0x2e30;                                           // 0x001b17ec: addiu $v1, $v1, 0x2e30
    a0 = *(uint16_t*)((a3) + 8);                                // 0x001b17f0: lhu $a0, 8($a3)
    v0 = 0x4c << 16;                                            // 0x001b17f4: lui $v0, 0x4c
    v0 = v0 + 0x4290;                                           // 0x001b17f8: addiu $v0, $v0, 0x4290
    s0 = a3 + 8;                                                // 0x001b17fc: addiu $s0, $a3, 8
    a2 = 0x4c;                                                  // 0x001b1804: addiu $a2, $zero, 0x4c
    v1 = v1 + a0;                                               // 0x001b1808: addu $v1, $v1, $a0
    g_004c2e30 = 0;  // Global at 0x004c2e30                    // 0x001b180c: sb $zero, 0($v1)
    a0 = *(uint16_t*)((a3) + 8);                                // 0x001b1810: lhu $a0, 8($a3)
    v1 = a0 << 3;                                               // 0x001b1814: sll $v1, $a0, 3
    v1 = v1 + a0;                                               // 0x001b1818: addu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001b181c: sll $v1, $v1, 1
    v1 = v1 + a0;                                               // 0x001b1820: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001b1824: sll $v1, $v1, 2
    func_00107c70();  // 107c70                                // 0x001b1828: jal 0x107c70
    a0 = v0 + v1;                                               // 0x001b182c: addu $a0, $v0, $v1
    *(uint16_t*)(s0) = 0;                                       // 0x001b1830: sh $zero, 0($s0)
    s1 = s1 + 1;                                                // 0x001b1834: addiu $s1, $s1, 1
label_0x1b1838:
    v1 = *(uint16_t*)((s2) + 0x814);                            // 0x001b1838: lhu $v1, 0x814($s2)
    v1 = (s1 < v1) ? 1 : 0;                                     // 0x001b183c: slt $v1, $s1, $v1
    if (v1 != 0) goto label_0x1b17e0;                           // 0x001b1840: bnez $v1, 0x1b17e0
    /* nop */                                                   // 0x001b1844: nop 
    *(uint16_t*)((s2) + 0x814) = 0;                             // 0x001b1848: sh $zero, 0x814($s2)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b1850: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b1854: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1858: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b185c: jr $ra
    sp = sp + 0x40;                                             // 0x001b1860: addiu $sp, $sp, 0x40
}