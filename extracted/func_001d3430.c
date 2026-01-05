void func_001d3430() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d3430: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d3438: addu.qb $zero, $sp, $s1
    s1 = 0x33 << 16;                                            // 0x001d343c: lui $s1, 0x33
    s1 = s1 + -0x1330;                                          // 0x001d3444: addiu $s1, $s1, -0x1330
    s0 = 1;                                                     // 0x001d3448: addiu $s0, $zero, 1
    s1 = s1 + 0x10;                                             // 0x001d344c: addiu $s1, $s1, 0x10
label_0x1d3450:
    a0 = g_0032ece0;  // Global at 0x0032ece0                   // 0x001d3450: lw $a0, 0($s1)
    if (a0 == 0) goto label_0x1d3464;                           // 0x001d3454: beqz $a0, 0x1d3464
    /* nop */                                                   // 0x001d3458: nop 
    func_001d34a0();  // 1d34a0                                // 0x001d345c: jal 0x1d34a0
    /* nop */                                                   // 0x001d3460: nop 
label_0x1d3464:
    func_00107c70();  // 107c70                                // 0x001d346c: jal 0x107c70
    a2 = 0x10;                                                  // 0x001d3470: addiu $a2, $zero, 0x10
    s0 = s0 + 1;                                                // 0x001d3474: addiu $s0, $s0, 1
    v1 = (s0 < 0x100) ? 1 : 0;                                  // 0x001d3478: slti $v1, $s0, 0x100
    if (v1 != 0) goto label_0x1d3450;                           // 0x001d347c: bnez $v1, 0x1d3450
    s1 = s1 + 0x10;                                             // 0x001d3480: addiu $s1, $s1, 0x10
    v1 = -1;                                                    // 0x001d3484: addiu $v1, $zero, -1
    *(uint32_t*)((gp) + -0x7ae4) = v1;                          // 0x001d3488: sw $v1, -0x7ae4($gp)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d3490: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3494: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d3498: jr $ra
    sp = sp + 0x30;                                             // 0x001d349c: addiu $sp, $sp, 0x30
}