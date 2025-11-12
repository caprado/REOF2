void func_00193210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00193210: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00193218: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0019321c: swc1 $f20, 0($sp)
    func_00192b20();  // 0x192ab0                                // 0x00193224: jal 0x192ab0
    /* FPU: mov.s $f20, $f12 */                                 // 0x00193228: mov.s $f20, $f12
    if (v0 == 0) goto label_0x19324c;                           // 0x0019322c: beqz $v0, 0x19324c
    v0 = 0x3f80 << 16;                                          // 0x00193238: lui $v0, 0x3f80
    /* move to FPU: $v0, $f0 */                                 // 0x0019323c: mtc1 $v0, $f0
    /* FPU: mov.s $f12, $f20 */                                 // 0x00193240: mov.s $f12, $f20
    func_00193400();  // 0x193270                                // 0x00193244: jal 0x193270
    /* FPU: sub.s $f13, $f0, $f20 */                            // 0x00193248: sub.s $f13, $f0, $f20
label_0x19324c:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00193250: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00193254: aver_u.h $w0, $w0, $w16
    v0 = 1;                                                     // 0x00193258: addiu $v0, $zero, 1
    return;                                                     // 0x0019325c: jr $ra
    sp = sp + 0x30;                                             // 0x00193260: addiu $sp, $sp, 0x30
}