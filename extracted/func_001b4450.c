void func_001b4450() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b4450: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b445c: addu.qb $zero, $sp, $s1
    s1 = 0x30 << 16;                                            // 0x001b4468: lui $s1, 0x30
    s1 = s1 + 0x6c10;                                           // 0x001b446c: addiu $s1, $s1, 0x6c10
label_0x1b4474:
    v1 = g_00306c10;  // Global at 0x00306c10                   // 0x001b4474: lh $v1, 0($s1)
    if (v1 == 0) goto label_0x1b4494;                           // 0x001b4478: beqz $v1, 0x1b4494
    a0 = s1 + 0xc;                                              // 0x001b447c: addiu $a0, $s1, 0xc
    func_0010ac68();  // 0x10ab20                                // 0x001b4480: jal 0x10ab20
    if (v0 != 0) goto label_0x1b4494;                           // 0x001b4488: bnez $v0, 0x1b4494
    /* nop */                                                   // 0x001b448c: nop 
    g_00306c10 = 0;  // Global at 0x00306c10                    // 0x001b4490: sh $zero, 0($s1)
label_0x1b4494:
    s0 = s0 + 1;                                                // 0x001b4494: addiu $s0, $s0, 1
    v1 = (s0 < 0x20) ? 1 : 0;                                   // 0x001b4498: slti $v1, $s0, 0x20
    if (v1 != 0) goto label_0x1b4474;                           // 0x001b449c: bnez $v1, 0x1b4474
    s1 = s1 + 0x8c;                                             // 0x001b44a0: addiu $s1, $s1, 0x8c
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b44a8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b44ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b44b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b44b4: jr $ra
    sp = sp + 0x40;                                             // 0x001b44b8: addiu $sp, $sp, 0x40
}