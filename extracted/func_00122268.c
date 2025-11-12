void func_00122268() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10;
    
    sp = sp + -0x30;                                            // 0x00122268: addiu $sp, $sp, -0x30
    /* FPU: mov.s $f0, $f12 */                                  // 0x0012226c: mov.s $f0, $f12
    *(float*)((sp) + 0x10) = FPU_F0;  // Store float            // 0x00122274: swc1 $f0, 0x10($sp)
    v0 = 0x7fff << 16;                                          // 0x00122278: lui $v0, 0x7fff
    v1 = 0x3f49 << 16;                                          // 0x0012227c: lui $v1, 0x3f49
    a0 = local_10;                                              // 0x00122280: lw $a0, 0x10($sp)
    v0 = v0 | 0xffff;                                           // 0x00122284: ori $v0, $v0, 0xffff
    v1 = v1 | 0xfd8;                                            // 0x00122288: ori $v1, $v1, 0xfd8
    v0 = a0 & v0;                                               // 0x0012228c: and $v0, $a0, $v0
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x00122290: slt $v1, $v1, $v0
    if (v1 != 0) goto label_0x1222b0;                           // 0x00122294: bnez $v1, 0x1222b0
    /* nop */                                                   // 0x00122298: nop 
    /* move to FPU: $zero, $f13 */                              // 0x0012229c: mtc1 $zero, $f13
    func_001216e8();  // 0x1215e0                                // 0x001222a0: jal 0x1215e0
    goto label_0x122348;                                        // 0x001222a8: b 0x122348
label_0x1222b0:
    func_00120b58();  // 0x1207a8                                // 0x001222b0: jal 0x1207a8
    v1 = 1;                                                     // 0x001222b8: addiu $v1, $zero, 1
    a0 = v0 & 3;                                                // 0x001222bc: andi $a0, $v0, 3
    if (a0 == v1) goto label_0x122308;                          // 0x001222c0: beq $a0, $v1, 0x122308
    v0 = (a0 < 2) ? 1 : 0;                                      // 0x001222c4: slti $v0, $a0, 2
    /* beqzl $v0, 0x1222e0 */                                   // 0x001222c8: beqzl $v0, 0x1222e0
    v0 = 2;                                                     // 0x001222cc: addiu $v0, $zero, 2
    if (a0 == 0) goto label_0x1222f0;                           // 0x001222d0: beqz $a0, 0x1222f0
    FPU_F12 = *(float*)(sp);  // Load float                     // 0x001222d4: lwc1 $f12, 0($sp)
    goto label_0x122338;                                        // 0x001222d8: b 0x122338
    /* nop */                                                   // 0x001222dc: nop 
    if (a0 == v0) goto label_0x122320;                          // 0x001222e0: beq $a0, $v0, 0x122320
    FPU_F12 = *(float*)(sp);  // Load float                     // 0x001222e4: lwc1 $f12, 0($sp)
    goto label_0x122338;                                        // 0x001222e8: b 0x122338
    /* nop */                                                   // 0x001222ec: nop 
label_0x1222f0:
    a0 = 1;                                                     // 0x001222f0: addiu $a0, $zero, 1
    func_001216e8();  // 0x1215e0                                // 0x001222f4: jal 0x1215e0
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x001222f8: lwc1 $f13, 4($sp)
    goto label_0x122348;                                        // 0x001222fc: b 0x122348
    /* nop */                                                   // 0x00122304: nop 
label_0x122308:
    FPU_F12 = *(float*)(sp);  // Load float                     // 0x00122308: lwc1 $f12, 0($sp)
    func_00120d78();  // 0x120c28                                // 0x0012230c: jal 0x120c28
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x00122310: lwc1 $f13, 4($sp)
    goto label_0x122348;                                        // 0x00122314: b 0x122348
    /* nop */                                                   // 0x0012231c: nop 
label_0x122320:
    a0 = 1;                                                     // 0x00122320: addiu $a0, $zero, 1
    func_001216e8();  // 0x1215e0                                // 0x00122324: jal 0x1215e0
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x00122328: lwc1 $f13, 4($sp)
    goto label_0x122344;                                        // 0x0012232c: b 0x122344
    /* FPU: neg.s $f0, $f0 */                                   // 0x00122330: neg.s $f0, $f0
    /* nop */                                                   // 0x00122334: nop 
label_0x122338:
    func_00120d78();  // 0x120c28                                // 0x00122338: jal 0x120c28
    FPU_F13 = *(float*)((sp) + 4);  // Load float               // 0x0012233c: lwc1 $f13, 4($sp)
    /* FPU: neg.s $f0, $f0 */                                   // 0x00122340: neg.s $f0, $f0
label_0x122344:
label_0x122348:
    return;                                                     // 0x00122348: jr $ra
    sp = sp + 0x30;                                             // 0x0012234c: addiu $sp, $sp, 0x30
}