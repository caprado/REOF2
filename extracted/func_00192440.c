void func_00192440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00192440: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0019244c: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00192454: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0019245c: swc1 $f20, 0($sp)
    /* FPU: mov.s $f21, $f12 */                                 // 0x00192464: mov.s $f21, $f12
    func_00192b20();  // 0x192ab0                                // 0x00192468: jal 0x192ab0
    /* FPU: mov.s $f20, $f13 */                                 // 0x0019246c: mov.s $f20, $f13
    func_00192b20();  // 0x192ab0                                // 0x00192478: jal 0x192ab0
    /* FPU: mov.s $f12, $f21 */                                 // 0x00192488: mov.s $f12, $f21
    func_001925f0();  // 0x1924c0                                // 0x00192490: jal 0x1924c0
    /* FPU: mov.s $f13, $f20 */                                 // 0x00192494: mov.s $f13, $f20
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x0019249c: lwc1 $f21, 4($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001924a0: ld.b $w0, -0x4f($zero)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001924a4: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001924a8: aver_u.h $w0, $w0, $w16
    v0 = 1;                                                     // 0x001924ac: addiu $v0, $zero, 1
    return;                                                     // 0x001924b0: jr $ra
    sp = sp + 0x40;                                             // 0x001924b4: addiu $sp, $sp, 0x40
}