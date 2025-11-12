void func_0015d538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0015d538: addiu $sp, $sp, -0x50
    func_0015fcb0();  // 0x15fc80                                // 0x0015d55c: jal 0x15fc80
    if (v0 != 0) goto label_0x15d580;                           // 0x0015d564: bnez $v0, 0x15d580
    /* nop */                                                   // 0x0015d568: nop 
    a0 = 0x22 << 16;                                            // 0x0015d56c: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015d570: jal 0x163410
    a0 = &str_002274d0;  // "E201301: MWSFD: GetFps failed."    // 0x0015d574: addiu $a0, $a0, 0x74d0
    goto label_0x15d674;                                        // 0x0015d578: b 0x15d674
    *(uint32_t*)(s3) = 0;                                       // 0x0015d57c: sw $zero, 0($s3)
label_0x15d580:
    func_0015f820();  // 0x15f7e0                                // 0x0015d580: jal 0x15f7e0
    func_00173cf0();  // 0x173c70                                // 0x0015d590: jal 0x173c70
    v1 = local_0;                                               // 0x0015d598: lw $v1, 0($sp)
    /* beqzl $v1, 0x15d674 */                                   // 0x0015d59c: beqzl $v1, 0x15d674
    *(uint32_t*)(s3) = 0;                                       // 0x0015d5a0: sw $zero, 0($s3)
    v0 = *(int32_t*)((s0) + 0x54);                              // 0x0015d5a4: lw $v0, 0x54($s0)
    if (v0 != 0) goto label_0x15d604;                           // 0x0015d5a8: bnez $v0, 0x15d604
    s4 = *(int32_t*)((s0) + 0x1c);                              // 0x0015d5b0: lw $s4, 0x1c($s0)
    s5 = 1;                                                     // 0x0015d5b4: addiu $s5, $zero, 1
    v0 = (s2 < s4) ? 1 : 0;                                     // 0x0015d5b8: slt $v0, $s2, $s4
    /* nop */                                                   // 0x0015d5bc: nop 
label_0x15d5c0:
    if (v0 == 0) goto label_0x15d600;                           // 0x0015d5c0: beqz $v0, 0x15d600
    s2 = s2 + 1;                                                // 0x0015d5c4: addiu $s2, $s2, 1
    func_0015e138();  // 0x15e0b0                                // 0x0015d5c8: jal 0x15e0b0
    if (v0 != s5) goto label_0x15d600;                          // 0x0015d5d0: bne $v0, $s5, 0x15d600
    func_00173d60();  // 0x173cf0                                // 0x0015d5d8: jal 0x173cf0
    a1 = local_0;                                               // 0x0015d5dc: lw $a1, 0($sp)
    v1 = *(int32_t*)((s0) + 0x84);                              // 0x0015d5e0: lw $v1, 0x84($s0)
    v1 = v1 + 1;                                                // 0x0015d5ec: addiu $v1, $v1, 1
    func_00173cf0();  // 0x173c70                                // 0x0015d5f0: jal 0x173c70
    *(uint32_t*)((s0) + 0x84) = v1;                             // 0x0015d5f4: sw $v1, 0x84($s0)
    goto label_0x15d5c0;                                        // 0x0015d5f8: b 0x15d5c0
    v0 = (s2 < s4) ? 1 : 0;                                     // 0x0015d5fc: slt $v0, $s2, $s4
label_0x15d600:
    v1 = local_0;                                               // 0x0015d600: lw $v1, 0($sp)
label_0x15d604:
    /* beqzl $v1, 0x15d674 */                                   // 0x0015d604: beqzl $v1, 0x15d674
    *(uint32_t*)(s3) = 0;                                       // 0x0015d608: sw $zero, 0($s3)
    func_0015dc08();  // 0x15db68                                // 0x0015d60c: jal 0x15db68
    v0 = *(int32_t*)((s0) + 0x7c);                              // 0x0015d614: lw $v0, 0x7c($s0)
    v1 = local_0;                                               // 0x0015d618: lw $v1, 0($sp)
    v0 = v0 + 1;                                                // 0x0015d620: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x7c) = v0;                             // 0x0015d624: sw $v0, 0x7c($s0)
    func_0015db68();  // 0x15db20                                // 0x0015d62c: jal 0x15db20
    *(uint32_t*)((s0) + 0x78) = v1;                             // 0x0015d630: sw $v1, 0x78($s0)
    a1 = local_0;                                               // 0x0015d638: lw $a1, 0($sp)
    func_0015d8e8();  // 0x15d768                                // 0x0015d63c: jal 0x15d768
    func_0015de20();  // 0x15dd08                                // 0x0015d648: jal 0x15dd08
    a1 = local_0;                                               // 0x0015d64c: lw $a1, 0($sp)
    func_0015d6e8();  // 0x15d698                                // 0x0015d654: jal 0x15d698
    func_0015d768();  // 0x15d6e8                                // 0x0015d65c: jal 0x15d6e8
    func_0015db20();  // 0x15da78                                // 0x0015d668: jal 0x15da78
    a1 = local_0;                                               // 0x0015d66c: lw $a1, 0($sp)
    *(uint32_t*)((s3) + 0x48) = v0;                             // 0x0015d670: sw $v0, 0x48($s3)
label_0x15d674:
    return;                                                     // 0x0015d690: jr $ra
    sp = sp + 0x50;                                             // 0x0015d694: addiu $sp, $sp, 0x50
}