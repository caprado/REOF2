void func_001bd2d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001bd2d0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bd2d8: addu.qb $zero, $sp, $s1
    s1 = *(int32_t*)((gp) + -0x6324);                           // 0x001bd2e0: lw $s1, -0x6324($gp)
    if (s1 != 0) goto label_0x1bd2f4;                           // 0x001bd2e4: bnez $s1, 0x1bd2f4
    goto label_0x1bd320;                                        // 0x001bd2ec: b 0x1bd320
    v0 = -1;                                                    // 0x001bd2f0: addiu $v0, $zero, -1
label_0x1bd2f4:
    v1 = *(int32_t*)(s1);                                       // 0x001bd2f4: lw $v1, 0($s1)
    v0 = 0x22 << 16;                                            // 0x001bd2f8: lui $v0, 0x22
    v0 = v0 + -0x32b0;                                          // 0x001bd2fc: addiu $v0, $v0, -0x32b0
    v1 = v1 << 2;                                               // 0x001bd300: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bd304: addu $v0, $v0, $v1
    v0 = g_0021cd50;  // Global at 0x0021cd50                   // 0x001bd308: lw $v0, 0($v0)
    /* call function at address in v0 */                        // 0x001bd30c: jalr $v0
    FPU_F0 = *(float*)((s1) + 0x38);  // Load float             // 0x001bd314: lwc1 $f0, 0x38($s1)
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x001bd318: swc1 $f0, 0($s0)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001bd31c: lw $v0, 8($s1)
label_0x1bd320:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bd324: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd328: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd32c: jr $ra
    sp = sp + 0x30;                                             // 0x001bd330: addiu $sp, $sp, 0x30
}