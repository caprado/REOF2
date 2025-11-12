void func_001a7970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a7970: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001a797c: addu.qb $zero, $sp, $s0
    a0 = *(int32_t*)((gp) + -0x7d54);                           // 0x001a7984: lw $a0, -0x7d54($gp)
    PollSema();  // 0x114320                                    // 0x001a7988: jal 0x114320
    v0 = *(int32_t*)((gp) + -0x7d54);                           // 0x001a7990: lw $v0, -0x7d54($gp)
    at = 0x2a << 16;                                            // 0x001a7994: lui $at, 0x2a
    a3 = 0x2a << 16;                                            // 0x001a7998: lui $a3, 0x2a
    g_002a1180 = s0;  // Global at 0x002a1180                   // 0x001a799c: sw $s0, 0x1180($at)
    a0 = 0x2a << 16;                                            // 0x001a79a0: lui $a0, 0x2a
    a3 = a3 + 0x1180;                                           // 0x001a79a4: addiu $a3, $a3, 0x1180
    t0 = 0x10;                                                  // 0x001a79a8: addiu $t0, $zero, 0x10
    t3 = 0x1a << 16;                                            // 0x001a79ac: lui $t3, 0x1a
    a0 = a0 + 0x1100;                                           // 0x001a79b4: addiu $a0, $a0, 0x1100
    a2 = 1;                                                     // 0x001a79b8: addiu $a2, $zero, 1
    t3 = t3 + 0x7960;                                           // 0x001a79c4: addiu $t3, $t3, 0x7960
    func_001178a0();  // 0x1176a8                                // 0x001a79c8: jal 0x1176a8
    if (v0 >= 0) goto label_0x1a79e8;                           // 0x001a79d0: bgez $v0, 0x1a79e8
    /* nop */                                                   // 0x001a79d4: nop 
    iSignalSema();  // 0x114300                                 // 0x001a79d8: jal 0x114300
    a0 = *(int32_t*)((gp) + -0x7d54);                           // 0x001a79dc: lw $a0, -0x7d54($gp)
    goto label_0x1a79ec;                                        // 0x001a79e0: b 0x1a79ec
    v0 = -9;                                                    // 0x001a79e4: addiu $v0, $zero, -9
label_0x1a79e8:
label_0x1a79ec:
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001a79f0: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001a79f4: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001a79f8: jr $ra
    sp = sp + 0x40;                                             // 0x001a79fc: addiu $sp, $sp, 0x40
}