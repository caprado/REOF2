void func_00193000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00193000: addiu $sp, $sp, -0x30
    v0 = a1 & 0xffff;                                           // 0x00193004: andi $v0, $a1, 0xffff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019300c: addu.qb $zero, $sp, $s1
    v1 = *(uint16_t*)((a0) + 0xc6);                             // 0x00193018: lhu $v1, 0xc6($a0)
    if (v1 != v0) goto label_0x193098;                          // 0x0019301c: bne $v1, $v0, 0x193098
    FPU_F0 = *(float*)((s1) + 0x104);  // Load float            // 0x00193024: lwc1 $f0, 0x104($s1)
    *(float*)((s1) + 0x12c) = FPU_F0;  // Store float           // 0x00193028: swc1 $f0, 0x12c($s1)
    FPU_F0 = *(float*)((s1) + 0x108);  // Load float            // 0x0019302c: lwc1 $f0, 0x108($s1)
    *(float*)((s1) + 0x130) = FPU_F0;  // Store float           // 0x00193030: swc1 $f0, 0x130($s1)
    FPU_F0 = *(float*)((s1) + 0x10c);  // Load float            // 0x00193034: lwc1 $f0, 0x10c($s1)
    *(float*)((s1) + 0x134) = FPU_F0;  // Store float           // 0x00193038: swc1 $f0, 0x134($s1)
    FPU_F0 = *(float*)((s1) + 0x70);  // Load float             // 0x0019303c: lwc1 $f0, 0x70($s1)
    *(float*)((s1) + 0x144) = FPU_F0;  // Store float           // 0x00193040: swc1 $f0, 0x144($s1)
    FPU_F0 = *(float*)((s1) + 0x74);  // Load float             // 0x00193044: lwc1 $f0, 0x74($s1)
    *(float*)((s1) + 0x148) = FPU_F0;  // Store float           // 0x00193048: swc1 $f0, 0x148($s1)
    FPU_F0 = *(float*)((s1) + 0x78);  // Load float             // 0x0019304c: lwc1 $f0, 0x78($s1)
    *(float*)((s1) + 0x14c) = FPU_F0;  // Store float           // 0x00193050: swc1 $f0, 0x14c($s1)
    FPU_F0 = *(float*)((s1) + 0x40);  // Load float             // 0x00193054: lwc1 $f0, 0x40($s1)
    *(float*)((s1) + 0x138) = FPU_F0;  // Store float           // 0x00193058: swc1 $f0, 0x138($s1)
    FPU_F0 = *(float*)((s1) + 0x44);  // Load float             // 0x0019305c: lwc1 $f0, 0x44($s1)
    *(float*)((s1) + 0x13c) = FPU_F0;  // Store float           // 0x00193060: swc1 $f0, 0x13c($s1)
    FPU_F0 = *(float*)((s1) + 0x48);  // Load float             // 0x00193064: lwc1 $f0, 0x48($s1)
    *(float*)((s1) + 0x140) = FPU_F0;  // Store float           // 0x00193068: swc1 $f0, 0x140($s1)
    FPU_F0 = *(float*)((s1) + 0x50);  // Load float             // 0x0019306c: lwc1 $f0, 0x50($s1)
    *(float*)((s1) + 0x150) = FPU_F0;  // Store float           // 0x00193070: swc1 $f0, 0x150($s1)
    FPU_F0 = *(float*)((s1) + 0x54);  // Load float             // 0x00193074: lwc1 $f0, 0x54($s1)
    *(float*)((s1) + 0x154) = FPU_F0;  // Store float           // 0x00193078: swc1 $f0, 0x154($s1)
    FPU_F0 = *(float*)((s1) + 0x58);  // Load float             // 0x0019307c: lwc1 $f0, 0x58($s1)
    *(float*)((s1) + 0x158) = FPU_F0;  // Store float           // 0x00193080: swc1 $f0, 0x158($s1)
    a0 = *(int32_t*)((s1) + 0xd0);                              // 0x00193084: lw $a0, 0xd0($s1)
    if (a0 == 0) goto label_0x193098;                           // 0x00193088: beqz $a0, 0x193098
    /* nop */                                                   // 0x0019308c: nop 
    func_001930d0();  // 0x193000                                // 0x00193090: jal 0x193000
    /* nop */                                                   // 0x00193094: nop 
label_0x193098:
    a0 = *(int32_t*)((s1) + 0xcc);                              // 0x00193098: lw $a0, 0xcc($s1)
    if (a0 == 0) goto label_0x1930ac;                           // 0x0019309c: beqz $a0, 0x1930ac
    func_001930d0();  // 0x193000                                // 0x001930a4: jal 0x193000
    /* nop */                                                   // 0x001930a8: nop 
label_0x1930ac:
    v0 = 1;                                                     // 0x001930b0: addiu $v0, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001930b4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001930b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001930bc: jr $ra
    sp = sp + 0x30;                                             // 0x001930c0: addiu $sp, $sp, 0x30
}