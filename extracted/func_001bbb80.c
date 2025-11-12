void func_001bbb80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x30 << 16;                                            // 0x001bbb80: lui $a0, 0x30
    a0 = a0 + 0x7fc0;                                           // 0x001bbb88: addiu $a0, $a0, 0x7fc0
    return func_00107d30();  // Tail call                        // 0x001bbb8c: j 0x107c70
    a2 = 0x20;                                                  // 0x001bbb90: addiu $a2, $zero, 0x20
    /* nop */                                                   // 0x001bbb94: nop 
    /* nop */                                                   // 0x001bbb98: nop 
    /* nop */                                                   // 0x001bbb9c: nop 
    at = 0x30 << 16;                                            // 0x001bbba0: lui $at, 0x30
    a2 = 0x30 << 16;                                            // 0x001bbba4: lui $a2, 0x30
    a1 = g_00307fc0;  // Global at 0x00307fc0                   // 0x001bbba8: lbu $a1, 0x7fc0($at)
    a0 = 2;                                                     // 0x001bbbac: addiu $a0, $zero, 2
    if (a1 == a0) goto label_0x1bbce4;                          // 0x001bbbb0: beq $a1, $a0, 0x1bbce4
    a2 = a2 + 0x7fc0;                                           // 0x001bbbb4: addiu $a2, $a2, 0x7fc0
    v1 = 1;                                                     // 0x001bbbb8: addiu $v1, $zero, 1
    if (a1 == v1) goto label_0x1bbbd4;                          // 0x001bbbbc: beq $a1, $v1, 0x1bbbd4
    /* nop */                                                   // 0x001bbbc0: nop 
    if (a1 == 0) goto label_0x1bbce4;                           // 0x001bbbc4: beqz $a1, 0x1bbce4
    /* nop */                                                   // 0x001bbbc8: nop 
    goto label_0x1bbce4;                                        // 0x001bbbcc: b 0x1bbce4
    /* nop */                                                   // 0x001bbbd0: nop 
label_0x1bbbd4:
    v1 = g_00307fc4;  // Global at 0x00307fc4                   // 0x001bbbd4: lw $v1, 4($a2)
    if (v1 != 0) goto label_0x1bbc64;                           // 0x001bbbd8: bnez $v1, 0x1bbc64
    /* nop */                                                   // 0x001bbbdc: nop 
    FPU_F2 = *(float*)((a2) + 0x18);  // Load float             // 0x001bbbe0: lwc1 $f2, 0x18($a2)
    FPU_F1 = *(float*)((a2) + 0x14);  // Load float             // 0x001bbbe4: lwc1 $f1, 0x14($a2)
    /* move to FPU: $zero, $f0 */                               // 0x001bbbe8: mtc1 $zero, $f0
    /* nop */                                                   // 0x001bbbec: nop 
    /* FPU: sub.s $f1, $f1, $f2 */                              // 0x001bbbf0: sub.s $f1, $f1, $f2
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001bbbf4: c.ole.s $f1, $f0
    /* bc1f 0x1bbc08 */                                         // 0x001bbbf8: bc1f 0x1bbc08
    *(float*)((a2) + 0x14) = FPU_F1;  // Store float            // 0x001bbbfc: swc1 $f1, 0x14($a2)
    g_00307fc0 = 0;  // Global at 0x00307fc0                    // 0x001bbc00: sb $zero, 0($a2)
    *(float*)((a2) + 0x14) = FPU_F0;  // Store float            // 0x001bbc04: swc1 $f0, 0x14($a2)
    FPU_F1 = *(float*)((a2) + 0x14);  // Load float             // 0x001bbc08: lwc1 $f1, 0x14($a2)
    v1 = 0x437f << 16;                                          // 0x001bbc0c: lui $v1, 0x437f
    /* move to FPU: $v1, $f2 */                                 // 0x001bbc10: mtc1 $v1, $f2
    v1 = 0x4f00 << 16;                                          // 0x001bbc14: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001bbc18: mtc1 $v1, $f0
    /* nop */                                                   // 0x001bbc1c: nop 
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x001bbc20: mul.s $f1, $f2, $f1
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001bbc24: c.ole.s $f0, $f1
    /* bc1t 0x1bbc40 */                                         // 0x001bbc28: bc1t 0x1bbc40
    /* nop */                                                   // 0x001bbc2c: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001bbc30: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001bbc34: mfc1 $a0, $f1
    goto label_0x1bbc5c;                                        // 0x001bbc38: b 0x1bbc5c
    g_00307fd0 = a0;  // Global at 0x00307fd0                   // 0x001bbc3c: sb $a0, 0x10($a2)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001bbc40: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001bbc44: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001bbc48: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001bbc4c: mfc1 $a0, $f1
    /* nop */                                                   // 0x001bbc50: nop 
    a0 = a0 | v1;                                               // 0x001bbc54: or $a0, $a0, $v1
    g_00307fd0 = a0;  // Global at 0x00307fd0                   // 0x001bbc58: sb $a0, 0x10($a2)
label_0x1bbc5c:
    goto label_0x1bbce4;                                        // 0x001bbc5c: b 0x1bbce4
    /* nop */                                                   // 0x001bbc60: nop 
label_0x1bbc64:
    FPU_F2 = *(float*)((a2) + 0x18);  // Load float             // 0x001bbc64: lwc1 $f2, 0x18($a2)
    v1 = 0x3f80 << 16;                                          // 0x001bbc68: lui $v1, 0x3f80
    FPU_F1 = *(float*)((a2) + 0x14);  // Load float             // 0x001bbc6c: lwc1 $f1, 0x14($a2)
    /* move to FPU: $v1, $f0 */                                 // 0x001bbc70: mtc1 $v1, $f0
    /* nop */                                                   // 0x001bbc74: nop 
    /* FPU: add.s $f1, $f1, $f2 */                              // 0x001bbc78: add.s $f1, $f1, $f2
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001bbc7c: c.olt.s $f1, $f0
    /* bc1t 0x1bbc90 */                                         // 0x001bbc80: bc1t 0x1bbc90
    *(float*)((a2) + 0x14) = FPU_F1;  // Store float            // 0x001bbc84: swc1 $f1, 0x14($a2)
    g_00307fc0 = a0;  // Global at 0x00307fc0                   // 0x001bbc88: sb $a0, 0($a2)
    *(float*)((a2) + 0x14) = FPU_F0;  // Store float            // 0x001bbc8c: swc1 $f0, 0x14($a2)
    FPU_F1 = *(float*)((a2) + 0x14);  // Load float             // 0x001bbc90: lwc1 $f1, 0x14($a2)
    v1 = 0x437f << 16;                                          // 0x001bbc94: lui $v1, 0x437f
    /* move to FPU: $v1, $f2 */                                 // 0x001bbc98: mtc1 $v1, $f2
    v1 = 0x4f00 << 16;                                          // 0x001bbc9c: lui $v1, 0x4f00
    /* move to FPU: $v1, $f0 */                                 // 0x001bbca0: mtc1 $v1, $f0
    /* nop */                                                   // 0x001bbca4: nop 
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x001bbca8: mul.s $f1, $f2, $f1
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001bbcac: c.ole.s $f0, $f1
    /* bc1t 0x1bbcc8 */                                         // 0x001bbcb0: bc1t 0x1bbcc8
    /* nop */                                                   // 0x001bbcb4: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001bbcb8: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001bbcbc: mfc1 $a0, $f1
    goto label_0x1bbce4;                                        // 0x001bbcc0: b 0x1bbce4
    g_00307fd0 = a0;  // Global at 0x00307fd0                   // 0x001bbcc4: sb $a0, 0x10($a2)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001bbcc8: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001bbccc: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001bbcd0: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001bbcd4: mfc1 $a0, $f1
    /* nop */                                                   // 0x001bbcd8: nop 
    a0 = a0 | v1;                                               // 0x001bbcdc: or $a0, $a0, $v1
    g_00307fd0 = a0;  // Global at 0x00307fd0                   // 0x001bbce0: sb $a0, 0x10($a2)
label_0x1bbce4:
    return;                                                     // 0x001bbce4: jr $ra
    /* nop */                                                   // 0x001bbce8: nop 
}