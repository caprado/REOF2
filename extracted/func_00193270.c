void func_00193270() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00193270: addiu $sp, $sp, -0x60
    v0 = a1 & 0xffff;                                           // 0x00193274: andi $v0, $a1, 0xffff
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00193280: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00193288: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00193290: swc1 $f20, 0($sp)
    v1 = *(uint16_t*)((a0) + 0xc6);                             // 0x00193294: lhu $v1, 0xc6($a0)
    /* FPU: mov.s $f21, $f12 */                                 // 0x00193298: mov.s $f21, $f12
    if (v1 != v0) goto label_0x1933bc;                          // 0x0019329c: bne $v1, $v0, 0x1933bc
    /* FPU: mov.s $f20, $f13 */                                 // 0x001932a0: mov.s $f20, $f13
    FPU_F1 = *(float*)((s1) + 0x104);  // Load float            // 0x001932a4: lwc1 $f1, 0x104($s1)
    a0 = s1 + 0x40;                                             // 0x001932a8: addiu $a0, $s1, 0x40
    FPU_F0 = *(float*)((s1) + 0x12c);  // Load float            // 0x001932ac: lwc1 $f0, 0x12c($s1)
    a1 = sp + 0x40;                                             // 0x001932b0: addiu $a1, $sp, 0x40
    a2 = sp + 0x50;                                             // 0x001932b4: addiu $a2, $sp, 0x50
    *(float*)((s1) + 0x104) = FPU_F0;  // Store float           // 0x001932c0: swc1 $f0, 0x104($s1)
    FPU_F1 = *(float*)((s1) + 0x108);  // Load float            // 0x001932c4: lwc1 $f1, 0x108($s1)
    FPU_F0 = *(float*)((s1) + 0x130);  // Load float            // 0x001932c8: lwc1 $f0, 0x130($s1)
    *(float*)((s1) + 0x108) = FPU_F0;  // Store float           // 0x001932d4: swc1 $f0, 0x108($s1)
    FPU_F1 = *(float*)((s1) + 0x10c);  // Load float            // 0x001932d8: lwc1 $f1, 0x10c($s1)
    FPU_F0 = *(float*)((s1) + 0x134);  // Load float            // 0x001932dc: lwc1 $f0, 0x134($s1)
    *(float*)((s1) + 0x10c) = FPU_F0;  // Store float           // 0x001932e8: swc1 $f0, 0x10c($s1)
    FPU_F1 = *(float*)((s1) + 0x40);  // Load float             // 0x001932ec: lwc1 $f1, 0x40($s1)
    FPU_F0 = *(float*)((s1) + 0x138);  // Load float            // 0x001932f0: lwc1 $f0, 0x138($s1)
    *(float*)((sp) + 0x40) = FPU_F0;  // Store float            // 0x001932fc: swc1 $f0, 0x40($sp)
    FPU_F1 = *(float*)((s1) + 0x44);  // Load float             // 0x00193300: lwc1 $f1, 0x44($s1)
    FPU_F0 = *(float*)((s1) + 0x13c);  // Load float            // 0x00193304: lwc1 $f0, 0x13c($s1)
    *(float*)((sp) + 0x44) = FPU_F0;  // Store float            // 0x00193310: swc1 $f0, 0x44($sp)
    FPU_F1 = *(float*)((s1) + 0x48);  // Load float             // 0x00193314: lwc1 $f1, 0x48($s1)
    FPU_F0 = *(float*)((s1) + 0x140);  // Load float            // 0x00193318: lwc1 $f0, 0x140($s1)
    *(float*)((sp) + 0x48) = FPU_F0;  // Store float            // 0x00193324: swc1 $f0, 0x48($sp)
    FPU_F1 = *(float*)((s1) + 0x50);  // Load float             // 0x00193328: lwc1 $f1, 0x50($s1)
    FPU_F0 = *(float*)((s1) + 0x150);  // Load float            // 0x0019332c: lwc1 $f0, 0x150($s1)
    *(float*)((sp) + 0x50) = FPU_F0;  // Store float            // 0x00193338: swc1 $f0, 0x50($sp)
    FPU_F1 = *(float*)((s1) + 0x54);  // Load float             // 0x0019333c: lwc1 $f1, 0x54($s1)
    FPU_F0 = *(float*)((s1) + 0x154);  // Load float            // 0x00193340: lwc1 $f0, 0x154($s1)
    *(float*)((sp) + 0x54) = FPU_F0;  // Store float            // 0x0019334c: swc1 $f0, 0x54($sp)
    FPU_F1 = *(float*)((s1) + 0x58);  // Load float             // 0x00193350: lwc1 $f1, 0x58($s1)
    FPU_F0 = *(float*)((s1) + 0x158);  // Load float            // 0x00193354: lwc1 $f0, 0x158($s1)
    func_001916b0();  // 0x191330                                // 0x00193360: jal 0x191330
    *(float*)((sp) + 0x58) = FPU_F0;  // Store float            // 0x00193364: swc1 $f0, 0x58($sp)
    FPU_F1 = *(float*)((s1) + 0x70);  // Load float             // 0x00193368: lwc1 $f1, 0x70($s1)
    FPU_F0 = *(float*)((s1) + 0x144);  // Load float            // 0x0019336c: lwc1 $f0, 0x144($s1)
    *(float*)((s1) + 0x70) = FPU_F0;  // Store float            // 0x00193378: swc1 $f0, 0x70($s1)
    FPU_F1 = *(float*)((s1) + 0x74);  // Load float             // 0x0019337c: lwc1 $f1, 0x74($s1)
    FPU_F0 = *(float*)((s1) + 0x148);  // Load float            // 0x00193380: lwc1 $f0, 0x148($s1)
    *(float*)((s1) + 0x74) = FPU_F0;  // Store float            // 0x0019338c: swc1 $f0, 0x74($s1)
    FPU_F1 = *(float*)((s1) + 0x78);  // Load float             // 0x00193390: lwc1 $f1, 0x78($s1)
    FPU_F0 = *(float*)((s1) + 0x14c);  // Load float            // 0x00193394: lwc1 $f0, 0x14c($s1)
    *(float*)((s1) + 0x78) = FPU_F0;  // Store float            // 0x001933a0: swc1 $f0, 0x78($s1)
    a0 = *(int32_t*)((s1) + 0xd0);                              // 0x001933a4: lw $a0, 0xd0($s1)
    if (a0 == 0) goto label_0x1933bc;                           // 0x001933a8: beqz $a0, 0x1933bc
    /* FPU: mov.s $f12, $f21 */                                 // 0x001933ac: mov.s $f12, $f21
    func_00193400();  // 0x193270                                // 0x001933b4: jal 0x193270
    /* FPU: mov.s $f13, $f20 */                                 // 0x001933b8: mov.s $f13, $f20
label_0x1933bc:
    a0 = *(int32_t*)((s1) + 0xcc);                              // 0x001933bc: lw $a0, 0xcc($s1)
    if (a0 == 0) goto label_0x1933d4;                           // 0x001933c0: beqz $a0, 0x1933d4
    /* FPU: mov.s $f12, $f21 */                                 // 0x001933c4: mov.s $f12, $f21
    func_00193400();  // 0x193270                                // 0x001933cc: jal 0x193270
    /* FPU: mov.s $f13, $f20 */                                 // 0x001933d0: mov.s $f13, $f20
label_0x1933d4:
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x001933d8: lwc1 $f21, 4($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001933dc: ld.b $w0, -0x4f($zero)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001933e0: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001933e4: aver_u.h $w0, $w0, $w16
    v0 = 1;                                                     // 0x001933e8: addiu $v0, $zero, 1
    return;                                                     // 0x001933ec: jr $ra
    sp = sp + 0x60;                                             // 0x001933f0: addiu $sp, $sp, 0x60
}