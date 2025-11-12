void func_0019c700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0019c700: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019c70c: addu.qb $zero, $sp, $s1
    s1 = 0x29 << 16;                                            // 0x0019c714: lui $s1, 0x29
    s1 = s1 + -0x3b80;                                          // 0x0019c71c: addiu $s1, $s1, -0x3b80
    goto label_0x19c73c;                                        // 0x0019c720: b 0x19c73c
    a0 = a0 & 0xffff;                                           // 0x0019c724: andi $a0, $a0, 0xffff
label_0x19c728:
    v1 = g_0028c482;  // Global at 0x0028c482                   // 0x0019c728: lh $v1, 2($s1)
    if (v1 == a0) goto label_0x19c74c;                          // 0x0019c72c: beq $v1, $a0, 0x19c74c
    v1 = 6;                                                     // 0x0019c730: addiu $v1, $zero, 6
    s1 = s1 + 8;                                                // 0x0019c734: addiu $s1, $s1, 8
    a1 = a1 + 1;                                                // 0x0019c738: addiu $a1, $a1, 1
label_0x19c73c:
    v1 = (a1 < 0x200) ? 1 : 0;                                  // 0x0019c73c: slti $v1, $a1, 0x200
    if (v1 != 0) goto label_0x19c728;                           // 0x0019c740: bnez $v1, 0x19c728
    /* nop */                                                   // 0x0019c744: nop 
    v1 = 6;                                                     // 0x0019c748: addiu $v1, $zero, 6
label_0x19c74c:
    if (a1 == v1) goto label_0x19c784;                          // 0x0019c74c: beq $a1, $v1, 0x19c784
    /* nop */                                                   // 0x0019c750: nop 
    func_0019ebd0();  // 0x19eb90                                // 0x0019c754: jal 0x19eb90
    /* nop */                                                   // 0x0019c758: nop 
    func_0018da10();  // 0x18d9e0                                // 0x0019c764: jal 0x18d9e0
    a2 = 8;                                                     // 0x0019c768: addiu $a2, $zero, 8
    a0 = *(int32_t*)((gp) + -0x6488);                           // 0x0019c76c: lw $a0, -0x6488($gp)
    v1 = s0 & 0xffff;                                           // 0x0019c770: andi $v1, $s0, 0xffff
    at = 0x29 << 16;                                            // 0x0019c774: lui $at, 0x29
    g_0028ffb8 = v1;  // Global at 0x0028ffb8                   // 0x0019c778: sw $v1, -0x48($at)
    v1 = a0 + -1;                                               // 0x0019c77c: addiu $v1, $a0, -1
    *(uint32_t*)((gp) + -0x6488) = v1;                          // 0x0019c780: sw $v1, -0x6488($gp)
label_0x19c784:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019c788: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019c78c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019c790: jr $ra
    sp = sp + 0x30;                                             // 0x0019c794: addiu $sp, $sp, 0x30
}