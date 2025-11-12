void func_00192e80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00192e80: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00192e88: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00192e8c: swc1 $f20, 0($sp)
    func_00192b20();  // 0x192ab0                                // 0x00192e94: jal 0x192ab0
    /* FPU: mov.s $f20, $f12 */                                 // 0x00192e98: mov.s $f20, $f12
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192e9c: mov.s $f12, $f20
    func_00193000();  // 0x192ed0                                // 0x00192ea4: jal 0x192ed0
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00192eb0: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00192eb4: aver_u.h $w0, $w0, $w16
    v0 = 1;                                                     // 0x00192eb8: addiu $v0, $zero, 1
    return;                                                     // 0x00192ebc: jr $ra
    sp = sp + 0x30;                                             // 0x00192ec0: addiu $sp, $sp, 0x30
}