void func_00122090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10;
    
    sp = sp + -0x30;                                            // 0x00122090: addiu $sp, $sp, -0x30
    /* FPU: mov.s $f0, $f12 */                                  // 0x00122094: mov.s $f0, $f12
    *(float*)((sp) + 0x10) = FPU_F0;  // Store float            // 0x0012209c: swc1 $f0, 0x10($sp)
    v0 = 0x7fff << 16;                                          // 0x001220a0: lui $v0, 0x7fff
    v1 = 0x3f49 << 16;                                          // 0x001220a4: lui $v1, 0x3f49
    a0 = local_10;                                              // 0x001220a8: lw $a0, 0x10($sp)
    v0 = v0 | 0xffff;                                           // 0x001220ac: ori $v0, $v0, 0xffff
    v1 = v1 | 0xfd8;                                            // 0x001220b0: ori $v1, $v1, 0xfd8
    v0 = a0 & v0;                                               // 0x001220b4: and $v0, $a0, $v0
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x001220b8: slt $v1, $v1, $v0
    if (v1 != 0) goto label_0x1220d8;                           // 0x001220bc: bnez $v1, 0x1220d8
    /* nop */                                                   // 0x001220c0: nop 
    /* move to FPU: $zero, $f13 */                              // 0x001220c4: mtc1 $zero, $f13
    func_00120d78();  // 0x120c28                                // 0x001220c8: jal 0x120c28
    /* nop */                                                   // 0x001220cc: nop 
    goto label_0x12215c;                                        // 0x001220d0: b 0x12215c
label_0x1220d8:
    func_00120b58();  // 0x1207a8                                // 0x001220d8: jal 0x1207a8
    v1 = 1;                                                     // 0x001220e0: addiu $v1, $zero, 1
    a0 = v0 & 3;                                                // 0x001220e4: andi $a0, $v0, 3
    if (a0 == v1) goto label_0x122128;                          // 0x001220e8: beq $a0, $v1, 0x122128
    v0 = (a0 < 2) ? 1 : 0;                                      // 0x001220ec: slti $v0, $a0, 2
    /* beqzl $v0, 0x122108 */                                   // 0x001220f0: beqzl $v0, 0x122108
    v0 = 2;                                                     // 0x001220f4: addiu $v0, $zero, 2
    if (a0 == 0) goto label_0x122118;                           // 0x001220f8: beqz $a0, 0x122118
    FPU_F12 = *(float*)(sp);  // Load float                     // 0x001220fc: lwc1 $f12, 0($sp)
    goto label_0x122150;                                        // 0x00122100: b 0x122150
    a0 = 1;                                                     // 0x00122104: addiu $a0, $zero, 1
    if (a0 == v0) goto label_0x122140;                          // 0x00122108: beq $a0, $v0, 0x122140
    FPU_F12 = *(float*)(sp);  // Load float                     // 0x0012210c: lwc1 $f12, 0($sp)
    goto label_0x122150;                                        // 0x00122110: b 0x122150
    a0 = 1;                                                     // 0x00122114: addiu $a0, $zero, 1
label_0x122118:
    func_00120d78();  // 0x120c28                                // 0x00122118: jal 0x120c28
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x0012211c: lwc1 $f13, 4($sp)
    goto label_0x12215c;                                        // 0x00122120: b 0x12215c
label_0x122128:
    FPU_F12 = *(float*)(sp);  // Load float                     // 0x00122128: lwc1 $f12, 0($sp)
    a0 = 1;                                                     // 0x0012212c: addiu $a0, $zero, 1
    func_001216e8();  // 0x1215e0                                // 0x00122130: jal 0x1215e0
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x00122134: lwc1 $f13, 4($sp)
    goto label_0x122158;                                        // 0x00122138: b 0x122158
    /* FPU: neg.s $f0, $f0 */                                   // 0x0012213c: neg.s $f0, $f0
label_0x122140:
    func_00120d78();  // 0x120c28                                // 0x00122140: jal 0x120c28
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x00122144: lwc1 $f13, 4($sp)
    goto label_0x122158;                                        // 0x00122148: b 0x122158
    /* FPU: neg.s $f0, $f0 */                                   // 0x0012214c: neg.s $f0, $f0
label_0x122150:
    func_001216e8();  // 0x1215e0                                // 0x00122150: jal 0x1215e0
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x00122154: lwc1 $f13, 4($sp)
label_0x122158:
label_0x12215c:
    return;                                                     // 0x0012215c: jr $ra
    sp = sp + 0x30;                                             // 0x00122160: addiu $sp, $sp, 0x30
}