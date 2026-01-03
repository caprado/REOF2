void func_001a26a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a26a0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001a26ac: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001a26b4: swc1 $f20, 0($sp)
    FPU_F20 = *(float*)((gp) + -0x7eec);  // Load float         // 0x001a26b8: lwc1 $f20, -0x7eec($gp)
    goto label_0x1a26f0;                                        // 0x001a26bc: b 0x1a26f0
label_0x1a26c4:
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001a26c4: lw $a0, 4($s1)
    v0 = s0 << 3;                                               // 0x001a26c8: sll $v0, $s0, 3
    v1 = *(int32_t*)((gp) + -0x6428);                           // 0x001a26cc: lw $v1, -0x6428($gp)
    v1 = a0 + v1;                                               // 0x001a26d0: addu $v1, $a0, $v1
    thunk_func_001a4a50();  // 1a4a50                          // 0x001a26d4: jal 0x1a4a50
    a0 = v1 + v0;                                               // 0x001a26d8: addu $a0, $v1, $v0
    /* FPU: c.olt.s $f0, $f20 */                                // 0x001a26dc: c.olt.s $f0, $f20
    /* bc1f 0x1a26ec */                                         // 0x001a26e0: bc1f 0x1a26ec
    /* nop */                                                   // 0x001a26e4: nop 
    /* FPU: mov.s $f20, $f0 */                                  // 0x001a26e8: mov.s $f20, $f0
    s0 = s0 + 1;                                                // 0x001a26ec: addiu $s0, $s0, 1
label_0x1a26f0:
    v0 = *(int16_t*)((s1) + 2);                                 // 0x001a26f0: lh $v0, 2($s1)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001a26f4: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1a26c4;                           // 0x001a26f8: bnez $v0, 0x1a26c4
    /* FPU: mov.s $f0, $f20 */                                  // 0x001a26fc: mov.s $f0, $f20
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001a2704: ld.b $w0, -0x4f($zero)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001a2708: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001a270c: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001a2710: jr $ra
    sp = sp + 0x40;                                             // 0x001a2714: addiu $sp, $sp, 0x40
}