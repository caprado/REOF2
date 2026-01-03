void func_001930d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x3f80 << 16;                                          // 0x001930d0: lui $v0, 0x3f80
    /* move to FPU: $v0, $f12 */                                // 0x001930d4: mtc1 $v0, $f12
    /* nop */                                                   // 0x001930d8: nop 
    /* FPU: mov.s $f13, $f12 */                                 // 0x001930dc: mov.s $f13, $f12
    goto label_0x1930f0;                                        // 0x001930e0: j 0x1930f0
    /* FPU: mov.s $f14, $f12 */                                 // 0x001930e4: mov.s $f14, $f12
    /* nop */                                                   // 0x001930e8: nop 
    /* nop */                                                   // 0x001930ec: nop 
label_0x1930f0:
    sp = sp + -0x90;                                            // 0x001930f0: addiu $sp, $sp, -0x90
    /* FPU: dpa.w.ph $ac0, $sp, $s1 */                          // 0x001930f8: dpa.w.ph $ac0, $sp, $s1
    *(float*)((sp) + 0x14) = FPU_F25;  // Store float           // 0x00193104: swc1 $f25, 0x14($sp)
    *(float*)((sp) + 0x10) = FPU_F24;  // Store float           // 0x0019310c: swc1 $f24, 0x10($sp)
    *(float*)((sp) + 0xc) = FPU_F23;  // Store float            // 0x00193110: swc1 $f23, 0xc($sp)
    *(float*)((sp) + 8) = FPU_F22;  // Store float              // 0x00193114: swc1 $f22, 8($sp)
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x00193118: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0019311c: swc1 $f20, 0($sp)
    FPU_F22 = *(float*)((a0) + 0x104);  // Load float           // 0x00193120: lwc1 $f22, 0x104($a0)
    FPU_F21 = *(float*)((a0) + 0x108);  // Load float           // 0x00193124: lwc1 $f21, 0x108($a0)
    FPU_F20 = *(float*)((a0) + 0x10c);  // Load float           // 0x00193128: lwc1 $f20, 0x10c($a0)
    /* FPU: mov.s $f25, $f12 */                                 // 0x0019312c: mov.s $f25, $f12
    /* FPU: mov.s $f24, $f13 */                                 // 0x00193130: mov.s $f24, $f13
    /* FPU: mov.s $f23, $f14 */                                 // 0x00193134: mov.s $f23, $f14
    /* FPU: mov.s $f12, $f22 */                                 // 0x00193138: mov.s $f12, $f22
    /* FPU: mov.s $f13, $f21 */                                 // 0x0019313c: mov.s $f13, $f21
    func_0018fc10();  // 18fc10                                // 0x00193140: jal 0x18fc10
    /* FPU: mov.s $f14, $f20 */                                 // 0x00193144: mov.s $f14, $f20
    func_0018fba0();  // 18fba0                                // 0x00193148: jal 0x18fba0
    a0 = sp + 0x50;                                             // 0x0019314c: addiu $a0, $sp, 0x50
    v0 = 0x3f80 << 16;                                          // 0x00193150: lui $v0, 0x3f80
    /* move to FPU: $v0, $f1 */                                 // 0x00193158: mtc1 $v0, $f1
    a1 = s1 + 0x40;                                             // 0x0019315c: addiu $a1, $s1, 0x40
    /* FPU: div.s $f0, $f1, $f25 */                             // 0x00193160: div.s $f0, $f1, $f25
    *(float*)((sp) + 0x50) = FPU_F0;  // Store float            // 0x00193164: swc1 $f0, 0x50($sp)
    /* FPU: div.s $f0, $f1, $f24 */                             // 0x00193168: div.s $f0, $f1, $f24
    *(float*)((sp) + 0x64) = FPU_F0;  // Store float            // 0x0019316c: swc1 $f0, 0x64($sp)
    /* FPU: div.s $f0, $f1, $f23 */                             // 0x00193170: div.s $f0, $f1, $f23
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x00193174: swc1 $f0, 0x78($sp)
    FPU_F0 = *(float*)((s1) + 0x70);  // Load float             // 0x00193178: lwc1 $f0, 0x70($s1)
    *(float*)((sp) + 0x80) = FPU_F0;  // Store float            // 0x0019317c: swc1 $f0, 0x80($sp)
    FPU_F0 = *(float*)((s1) + 0x74);  // Load float             // 0x00193180: lwc1 $f0, 0x74($s1)
    *(float*)((sp) + 0x84) = FPU_F0;  // Store float            // 0x00193184: swc1 $f0, 0x84($sp)
    FPU_F0 = *(float*)((s1) + 0x78);  // Load float             // 0x00193188: lwc1 $f0, 0x78($s1)
    func_00191190();  // 191190                                // 0x0019318c: jal 0x191190
    *(float*)((sp) + 0x88) = FPU_F0;  // Store float            // 0x00193190: swc1 $f0, 0x88($sp)
    func_001910b0();  // 1910b0                                // 0x00193198: jal 0x1910b0
    a1 = sp + 0x50;                                             // 0x0019319c: addiu $a1, $sp, 0x50
    func_001910b0();  // 1910b0                                // 0x001931a4: jal 0x1910b0
    a0 = *(int32_t*)((s1) + 0xd0);                              // 0x001931ac: lw $a0, 0xd0($s1)
    if (a0 == 0) goto label_0x1931c8;                           // 0x001931b0: beqz $a0, 0x1931c8
    /* FPU: mov.s $f12, $f22 */                                 // 0x001931b4: mov.s $f12, $f22
    /* FPU: mov.s $f13, $f21 */                                 // 0x001931bc: mov.s $f13, $f21
    func_001930f0();  // 1930f0                                // 0x001931c0: jal 0x1930f0
    /* FPU: mov.s $f14, $f20 */                                 // 0x001931c4: mov.s $f14, $f20
label_0x1931c8:
    a0 = *(int32_t*)((s1) + 0xcc);                              // 0x001931c8: lw $a0, 0xcc($s1)
    if (a0 == 0) goto label_0x1931e4;                           // 0x001931cc: beqz $a0, 0x1931e4
    /* FPU: mov.s $f12, $f25 */                                 // 0x001931d4: mov.s $f12, $f25
    /* FPU: mov.s $f13, $f24 */                                 // 0x001931d8: mov.s $f13, $f24
    func_001930f0();  // 1930f0                                // 0x001931dc: jal 0x1930f0
    /* FPU: mov.s $f14, $f23 */                                 // 0x001931e0: mov.s $f14, $f23
label_0x1931e4:
    FPU_F25 = *(float*)((sp) + 0x14);  // Load float            // 0x001931e8: lwc1 $f25, 0x14($sp)
    FPU_F24 = *(float*)((sp) + 0x10);  // Load float            // 0x001931f0: lwc1 $f24, 0x10($sp)
    /* FPU: ld.b $w0, -0x50($zero) */                           // 0x001931f4: ld.b $w0, -0x50($zero)
    FPU_F23 = *(float*)((sp) + 0xc);  // Load float             // 0x001931f8: lwc1 $f23, 0xc($sp)
    FPU_F22 = *(float*)((sp) + 8);  // Load float               // 0x001931fc: lwc1 $f22, 8($sp)
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00193200: lwc1 $f21, 4($sp)
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00193204: lwc1 $f20, 0($sp)
    return;                                                     // 0x00193208: jr $ra
    sp = sp + 0x90;                                             // 0x0019320c: addiu $sp, $sp, 0x90
}