void func_001227b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_24, local_28, local_2c, local_4;
    
    sp = sp + -0x80;                                            // 0x001227b0: addiu $sp, $sp, -0x80
    local_20 = 0;                                               // 0x001227e0: sw $zero, 0x20($sp)
    FPU_F0 = *(float*)((s4) + 0x20);  // Load float             // 0x001227e4: lwc1 $f0, 0x20($s4)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001227e8: cvt.s.w $f0, $f0
    FPU_F1 = *(float*)((s4) + 0x24);  // Load float             // 0x001227ec: lwc1 $f1, 0x24($s4)
    v0 = *(int32_t*)((s4) + 0x1c);                              // 0x001227f0: lw $v0, 0x1c($s4)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001227f4: mul.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x001227f8: cvt.w.s $f1, $f0
    /* move from FPU: $s2, $f1 */                               // 0x001227fc: mfc1 $s2, $f1
    if (v0 <= 0) goto label_0x122a10;                           // 0x00122800: blez $v0, 0x122a10
    s7 = s4 + 0xc;                                              // 0x00122808: addiu $s7, $s4, 0xc
    v0 = s4 + 0x14;                                             // 0x0012280c: addiu $v0, $s4, 0x14
    local_28 = s7;                                              // 0x00122810: sw $s7, 0x28($sp)
    fp = s4 + 4;                                                // 0x00122814: addiu $fp, $s4, 4
    local_2c = v0;                                              // 0x00122818: sw $v0, 0x2c($sp)
    /* nop */                                                   // 0x0012281c: nop 
label_0x122820:
    v1 = local_20;                                              // 0x00122820: lw $v1, 0x20($sp)
    a0 = *(int32_t*)(fp);                                       // 0x00122824: lw $a0, 0($fp)
    s1 = v1 << 2;                                               // 0x00122828: sll $s1, $v1, 2
    v1 = *(int32_t*)(a0);                                       // 0x0012282c: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00122830: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00122834: jalr $v0
    a1 = 1;                                                     // 0x00122838: addiu $a1, $zero, 1
    /* beqzl $s2, 0x122844 */                                   // 0x0012283c: beqzl $s2, 0x122844
    /* break (trap) */                                          // 0x00122840: break 0, 7
    s0 = (unsigned)v0 >> 0x1f;                                  // 0x00122844: srl $s0, $v0, 0x1f
    a0 = *(int32_t*)(s7);                                       // 0x00122848: lw $a0, 0($s7)
    s0 = s0 + v0;                                               // 0x0012284c: addu $s0, $s0, $v0
    s0 = s0 >> 1;                                               // 0x00122850: sra $s0, $s0, 1
    v1 = *(int32_t*)(a0);                                       // 0x00122854: lw $v1, 0($a0)
    /* divide: s0 / s2 -> hi:lo */                              // 0x00122858: div $zero, $s0, $s2
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012285c: lw $v0, 0x24($v1)
    /* mflo $s0 */                                              // 0x00122860
    /* call function at address in v0 */                        // 0x00122864: jalr $v0
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x0012286c: slti $v1, $v0, 0
    a0 = v0 + 0xf;                                              // 0x00122870: addiu $a0, $v0, 0xf
    if (v1 != 0) v0 = a0;                                       // 0x00122874: movn $v0, $a0, $v1
    v1 = v0 >> 4;                                               // 0x00122878: sra $v1, $v0, 4
    v0 = (s0 < v1) ? 1 : 0;                                     // 0x0012287c: slt $v0, $s0, $v1
    if (v0 != 0) v1 = s0;                                       // 0x00122880: movn $v1, $s0, $v0
    if (v1 <= 0) goto label_0x1229e4;                           // 0x00122884: blezl $v1, 0x1229e4
    v1 = local_20;                                              // 0x00122888: lw $v1, 0x20($sp)
    v0 = local_28;                                              // 0x0012288c: lw $v0, 0x28($sp)
    s5 = local_2c;                                              // 0x00122894: lw $s5, 0x2c($sp)
    s1 = v0 + s1;                                               // 0x00122898: addu $s1, $v0, $s1
    local_24 = s1;                                              // 0x0012289c: sw $s1, 0x24($sp)
label_0x1228a0:
    if (s2 <= 0) goto label_0x12293c;                           // 0x001228a4: blez $s2, 0x12293c
    a0 = *(int32_t*)(s1);                                       // 0x001228b0: lw $a0, 0($s1)
    /* nop */                                                   // 0x001228b4: nop 
    a2 = s2 - s0;                                               // 0x001228b8: subu $a2, $s2, $s0
    a2 = a2 << 1;                                               // 0x001228c0: sll $a2, $a2, 1
    v1 = *(int32_t*)(a0);                                       // 0x001228c4: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x001228c8: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x001228cc: jalr $v0
    a1 = 1;                                                     // 0x001228d0: addiu $a1, $zero, 1
    v1 = local_4;                                               // 0x001228d4: lw $v1, 4($sp)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x001228d8: srl $v0, $v1, 0x1f
    v1 = v1 + v0;                                               // 0x001228dc: addu $v1, $v1, $v0
    t0 = v1 >> 1;                                               // 0x001228e0: sra $t0, $v1, 1
    if (t0 <= 0) goto label_0x122914;                           // 0x001228e4: blez $t0, 0x122914
    a3 = local_0;                                               // 0x001228e8: lw $a3, 0($sp)
label_0x1228f0:
    a0 = *(int16_t*)(a3);                                       // 0x001228f0: lh $a0, 0($a3)
    a3 = a3 + 2;                                                // 0x001228f4: addiu $a3, $a3, 2
    a2 = a2 + -1;                                               // 0x001228f8: addiu $a2, $a2, -1
    a1 = -a0;                                                   // 0x001228fc: negu $a1, $a0
    v0 = (a0 < 0) ? 1 : 0;                                      // 0x00122900: slti $v0, $a0, 0
    if (v0 != 0) a0 = a1;                                       // 0x00122904: movn $a0, $a1, $v0
    v1 = (s3 < a0) ? 1 : 0;                                     // 0x00122908: slt $v1, $s3, $a0
    if (a2 != 0) goto label_0x1228f0;                           // 0x0012290c: bnez $a2, 0x1228f0
    if (v1 != 0) s3 = a0;                                       // 0x00122910: movn $s3, $a0, $v1
label_0x122914:
    a0 = *(int32_t*)(s1);                                       // 0x00122914: lw $a0, 0($s1)
    s0 = s0 + t0;                                               // 0x00122918: addu $s0, $s0, $t0
    v1 = *(int32_t*)(a0);                                       // 0x00122920: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00122924: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00122928: jalr $v0
    v1 = (s0 < s2) ? 1 : 0;                                     // 0x00122930: slt $v1, $s0, $s2
    /* bnezl $v1, 0x1228b8 */                                   // 0x00122934: bnezl $v1, 0x1228b8
    a0 = *(int32_t*)(s1);                                       // 0x00122938: lw $a0, 0($s1)
label_0x12293c:
    a0 = *(int32_t*)(s7);                                       // 0x0012293c: lw $a0, 0($s7)
    v1 = sp + 0x10;                                             // 0x00122940: addiu $v1, $sp, 0x10
    v1 = *(int32_t*)(a0);                                       // 0x0012294c: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00122950: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00122954: jalr $v0
    a2 = 0x10;                                                  // 0x00122958: addiu $a2, $zero, 0x10
    v1 = local_14;                                              // 0x0012295c: lw $v1, 0x14($sp)
    if (v1 != 0) goto label_0x122988;                           // 0x00122960: bnez $v1, 0x122988
    a3 = local_10;                                              // 0x00122964: lw $a3, 0x10($sp)
label_0x122968:
    /* nop */                                                   // 0x00122968: nop 
    /* nop */                                                   // 0x0012296c: nop 
    /* nop */                                                   // 0x00122970: nop 
    /* nop */                                                   // 0x00122974: nop 
    /* nop */                                                   // 0x00122978: nop 
    goto label_0x122968;                                        // 0x0012297c: b 0x122968
    /* nop */                                                   // 0x00122980: nop 
    /* nop */                                                   // 0x00122984: nop 
label_0x122988:
    v1 = sp + 0x10;                                             // 0x00122988: addiu $v1, $sp, 0x10
    v0 = local_24;                                              // 0x0012298c: lw $v0, 0x24($sp)
    *(uint32_t*)(a3) = s3;                                      // 0x00122994: sw $s3, 0($a3)
    a1 = 1;                                                     // 0x00122998: addiu $a1, $zero, 1
    a0 = *(int32_t*)(v0);                                       // 0x0012299c: lw $a0, 0($v0)
    s6 = s6 + -1;                                               // 0x001229a0: addiu $s6, $s6, -1
    v0 = *(int32_t*)(s5);                                       // 0x001229a4: lw $v0, 0($s5)
    v1 = *(int32_t*)(a0);                                       // 0x001229a8: lw $v1, 0($a0)
    *(uint32_t*)((a3) + 4) = v0;                                // 0x001229ac: sw $v0, 4($a3)
    t0 = *(int32_t*)((v1) + 0x20);                              // 0x001229b0: lw $t0, 0x20($v1)
    v1 = *(int32_t*)((s4) + 0x20);                              // 0x001229b4: lw $v1, 0x20($s4)
    *(uint32_t*)((a3) + 0xc) = s2;                              // 0x001229b8: sw $s2, 0xc($a3)
    /* call function at address in t0 */                        // 0x001229bc: jalr $t0
    *(uint32_t*)((a3) + 8) = v1;                                // 0x001229c0: sw $v1, 8($a3)
    v0 = *(int32_t*)(s5);                                       // 0x001229c4: lw $v0, 0($s5)
    v0 = v0 + s2;                                               // 0x001229c8: addu $v0, $v0, $s2
    *(uint32_t*)(s5) = v0;                                      // 0x001229cc: sw $v0, 0($s5)
    v1 = *(int32_t*)((s4) + 0x2c);                              // 0x001229d0: lw $v1, 0x2c($s4)
    v1 = v1 + 1;                                                // 0x001229d4: addiu $v1, $v1, 1
    if (s6 != 0) goto label_0x1228a0;                           // 0x001229d8: bnez $s6, 0x1228a0
    *(uint32_t*)((s4) + 0x2c) = v1;                             // 0x001229dc: sw $v1, 0x2c($s4)
    v1 = local_20;                                              // 0x001229e0: lw $v1, 0x20($sp)
label_0x1229e4:
    s7 = s7 + 4;                                                // 0x001229e4: addiu $s7, $s7, 4
    v0 = *(int32_t*)((s4) + 0x1c);                              // 0x001229e8: lw $v0, 0x1c($s4)
    fp = fp + 4;                                                // 0x001229ec: addiu $fp, $fp, 4
    v1 = v1 + 1;                                                // 0x001229f0: addiu $v1, $v1, 1
    local_20 = v1;                                              // 0x001229f4: sw $v1, 0x20($sp)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001229f8: slt $v0, $v1, $v0
    v1 = local_2c;                                              // 0x001229fc: lw $v1, 0x2c($sp)
    v1 = v1 + 4;                                                // 0x00122a00: addiu $v1, $v1, 4
    if (v0 != 0) goto label_0x122820;                           // 0x00122a04: bnez $v0, 0x122820
    local_2c = v1;                                              // 0x00122a08: sw $v1, 0x2c($sp)
label_0x122a10:
    return;                                                     // 0x00122a34: jr $ra
    sp = sp + 0x80;                                             // 0x00122a38: addiu $sp, $sp, 0x80
}