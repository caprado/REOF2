void func_001d6440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d6440: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d6448: addu.qb $zero, $sp, $s1
    s1 = 0x33 << 16;                                            // 0x001d6450: lui $s1, 0x33
    s1 = s1 + -0x1570;                                          // 0x001d6454: addiu $s1, $s1, -0x1570
label_0x1d645c:
    v1 = g_0032ea90;  // Global at 0x0032ea90                   // 0x001d645c: lbu $v1, 0($s1)
    if (v1 == 0) goto label_0x1d6474;                           // 0x001d6460: beqz $v1, 0x1d6474
    /* nop */                                                   // 0x001d6464: nop 
    a1 = g_0032ea9c;  // Global at 0x0032ea9c                   // 0x001d6468: lhu $a1, 0xc($s1)
    func_001d63a0();  // 1d63a0                                // 0x001d646c: jal 0x1d63a0
    a0 = g_0032ea98;  // Global at 0x0032ea98                   // 0x001d6470: lhu $a0, 8($s1)
label_0x1d6474:
    s0 = s0 + 1;                                                // 0x001d6474: addiu $s0, $s0, 1
    v1 = (s0 < 4) ? 1 : 0;                                      // 0x001d6478: slti $v1, $s0, 4
    if (v1 != 0) goto label_0x1d645c;                           // 0x001d647c: bnez $v1, 0x1d645c
    s1 = s1 + 0x10;                                             // 0x001d6480: addiu $s1, $s1, 0x10
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d6488: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d648c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d6490: jr $ra
    sp = sp + 0x30;                                             // 0x001d6494: addiu $sp, $sp, 0x30
}