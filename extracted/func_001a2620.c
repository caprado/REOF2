void func_001a2620() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a2620: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001a262c: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001a2634: swc1 $f20, 0($sp)
    /* move to FPU: $zero, $f20 */                              // 0x001a2638: mtc1 $zero, $f20
    goto label_0x1a2670;                                        // 0x001a263c: b 0x1a2670
label_0x1a2644:
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a2644: lw $a0, 4($s1)
    v0 = s0 << 3;                                               // 0x001a2648: sll $v0, $s0, 3
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a264c: lw $v1, -0x6428($gp)
    v1 = a0 + v1;                                               // 0x001a2650: addu $v1, $a0, $v1
    func_001a4b30();  // 0x1a4b20                                // 0x001a2654: jal 0x1a4b20
    a0 = v1 + v0;                                               // 0x001a2658: addu $a0, $v1, $v0
    /* FPU: c.ole.s $f0, $f20 */                                // 0x001a265c: c.ole.s $f0, $f20
    /* bc1t 0x1a266c */                                         // 0x001a2660: bc1t 0x1a266c
    /* nop */                                                   // 0x001a2664: nop 
    /* FPU: mov.s $f20, $f0 */                                  // 0x001a2668: mov.s $f20, $f0
    s0 = s0 + 1;                                                // 0x001a266c: addiu $s0, $s0, 1
label_0x1a2670:
    v0 = *(int16_t*)((s1) + 2);                                 // 0x001a2670: lh $v0, 2($s1)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001a2674: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1a2644;                           // 0x001a2678: bnez $v0, 0x1a2644
    /* FPU: mov.s $f0, $f20 */                                  // 0x001a267c: mov.s $f0, $f20
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001a2684: ld.b $w0, -0x4f($zero)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001a2688: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001a268c: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001a2690: jr $ra
    sp = sp + 0x40;                                             // 0x001a2694: addiu $sp, $sp, 0x40
}