void func_00133530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x30;                                            // 0x00133530: addiu $sp, $sp, -0x30
    s1 = *(int32_t*)((s2) + 4);                                 // 0x00133550: lw $s1, 4($s2)
    func_0012d528();  // 12d528                                // 0x00133554: jal 0x12d528
    func_0012d540();  // 12d540                                // 0x00133560: jal 0x12d540
    func_0012d570();  // 12d570                                // 0x0013356c: jal 0x12d570
    func_0012d6f8();  // 12d6f8                                // 0x00133578: jal 0x12d6f8
    s0 = s0 - s3;                                               // 0x00133580: subu $s0, $s0, $s3
    func_0012d418();  // 12d418                                // 0x00133588: jal 0x12d418
    *(uint32_t*)((s2) + 0x90) = s0;                             // 0x00133590: sw $s0, 0x90($s2)
    func_0012d408();  // 12d408                                // 0x00133598: jal 0x12d408
    func_0012d428();  // 12d428                                // 0x001335a4: jal 0x12d428
    func_0012d3a8();  // 12d3a8                                // 0x001335b0: jal 0x12d3a8
    a1 = 0x13 << 16;                                            // 0x001335b8: lui $a1, 0x13
    a1 = a1 + 0x35e8;                                           // 0x001335d0: addiu $a1, $a1, 0x35e8
    return func_0012d408();  // Tail call                        // 0x001335e0: j 0x12d3f8
    sp = sp + 0x30;                                             // 0x001335e4: addiu $sp, $sp, 0x30
    sp = sp + -0x50;                                            // 0x001335e8: addiu $sp, $sp, -0x50
    s2 = *(int32_t*)((s1) + 4);                                 // 0x0013360c: lw $s2, 4($s1)
    s0 = *(int32_t*)((s1) + 0x14);                              // 0x00133610: lw $s0, 0x14($s1)
    func_0012d528();  // 12d528                                // 0x00133614: jal 0x12d528
    func_0012d540();  // 12d540                                // 0x00133620: jal 0x12d540
    func_0012d570();  // 12d570                                // 0x0013362c: jal 0x12d570
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0013363c: lw $v0, 8($s1)
    a1 = 1;                                                     // 0x00133640: addiu $a1, $zero, 1
    if (v0 != 0) goto label_0x133670;                           // 0x00133644: bnez $v0, 0x133670
    v0 = *(int8_t*)((s1) + 0x6c);                               // 0x0013364c: lb $v0, 0x6c($s1)
    /* bnezl $v0, 0x133674 */                                   // 0x00133650: bnezl $v0, 0x133674
    v1 = *(int32_t*)(s0);                                       // 0x00133654: lw $v1, 0($s0)
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00133658: lw $a0, 4($s1)
    func_0012d408();  // 12d408                                // 0x0013365c: jal 0x12d408
    a1 = -1;                                                    // 0x00133660: addiu $a1, $zero, -1
    goto label_0x133758;                                        // 0x00133664: b 0x133758
    /* nop */                                                   // 0x0013366c: nop 
label_0x133670:
    v1 = *(int32_t*)(s0);                                       // 0x00133670: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00133674: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00133678: jalr $v0
    a2 = *(int32_t*)((s1) + 0x50);                              // 0x0013367c: lw $a2, 0x50($s1)
    a0 = 0x22 << 16;                                            // 0x00133680: lui $a0, 0x22
    v0 = local_4;                                               // 0x00133684: lw $v0, 4($sp)
    v1 = *(int32_t*)((s1) + 0x50);                              // 0x00133688: lw $v1, 0x50($s1)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0013368c: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x1336a0;                           // 0x00133690: beqz $v0, 0x1336a0
    a0 = &str_00223f40;  // "E9081001 adxt_stat_decinfo: can't play this number of channels" // 0x00133694: addiu $a0, $a0, 0x3f40
    func_00127d90();  // 127d90                                // 0x00133698: jal 0x127d90
    /* nop */                                                   // 0x0013369c: nop 
label_0x1336a0:
    v1 = *(int32_t*)(s0);                                       // 0x001336a0: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x001336ac: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x001336b0: jalr $v0
    func_0012d418();  // 12d418                                // 0x001336bc: jal 0x12d418
    a1 = s4 - s3;                                               // 0x001336c4: subu $a1, $s4, $s3
    *(uint32_t*)((s1) + 0x90) = a1;                             // 0x001336c8: sw $a1, 0x90($s1)
    func_0012d408();  // 12d408                                // 0x001336cc: jal 0x12d408
    func_0012d428();  // 12d428                                // 0x001336d8: jal 0x12d428
    func_0012d3a8();  // 12d3a8                                // 0x001336e4: jal 0x12d3a8
    v1 = *(int8_t*)((s1) + 2);                                  // 0x001336ec: lb $v1, 2($s1)
    v0 = 2;                                                     // 0x001336f0: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x133740;                          // 0x001336f4: bne $v1, $v0, 0x133740
    v0 = *(int32_t*)(s0);                                       // 0x001336fc: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x14);                              // 0x00133700: lw $v1, 0x14($v0)
    /* call function at address in v1 */                        // 0x00133704: jalr $v1
    /* nop */                                                   // 0x00133708: nop 
    v0 = *(int32_t*)(s0);                                       // 0x0013370c: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x00133718: lw $v1, 0x18($v0)
    a1 = 1;                                                     // 0x0013371c: addiu $a1, $zero, 1
    /* call function at address in v1 */                        // 0x00133720: jalr $v1
    a2 = *(int32_t*)(s0);                                       // 0x00133728: lw $a2, 0($s0)
    v0 = *(int32_t*)((a2) + 0x20);                              // 0x00133734: lw $v0, 0x20($a2)
    /* call function at address in v0 */                        // 0x00133738: jalr $v0
label_0x133740:
    func_0012d710();  // 12d710                                // 0x00133740: jal 0x12d710
    v0 = *(int32_t*)((s1) + 0x4c);                              // 0x00133748: lw $v0, 0x4c($s1)
    v0 = v0 + 1;                                                // 0x0013374c: addiu $v0, $v0, 1
    *(uint32_t*)((s1) + 0x4c) = v0;                             // 0x00133750: sw $v0, 0x4c($s1)
label_0x133758:
    return;                                                     // 0x00133770: jr $ra
    sp = sp + 0x50;                                             // 0x00133774: addiu $sp, $sp, 0x50
}