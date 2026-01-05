void func_001627b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001627b8: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x001627cc: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x001627d4: lui $a0, 0x23
    v1 = 1;                                                     // 0x001627d8: addiu $v1, $zero, 1
    if (v0 != 0) goto label_0x1627f8;                           // 0x001627dc: bnez $v0, 0x1627f8
    a0 = &str_00228c38;  // "E99072101 mwPlyLinkStm: can't link stream" // 0x001627e0: addiu $a0, $a0, -0x73c8
    return func_001634a8();  // Tail call                        // 0x001627f0: j 0x163410
    sp = sp + 0x20;                                             // 0x001627f4: addiu $sp, $sp, 0x20
label_0x1627f8:
    v0 = *(int8_t*)((s0) + 0x70);                               // 0x001627f8: lb $v0, 0x70($s0)
    if (v0 != v1) goto label_0x162810;                          // 0x001627fc: bne $v0, $v1, 0x162810
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00162800: lw $a0, 0x40($s0)
    /* beqzl $s1, 0x16280c */                                   // 0x00162804: beqzl $s1, 0x16280c
    *(uint8_t*)((s0) + 0x71) = v0;                              // 0x00162808: sb $v0, 0x71($s0)
    v0 = *(int8_t*)((s0) + 0x70);                               // 0x0016280c: lb $v0, 0x70($s0)
label_0x162810:
    /* bnezl $v0, 0x162844 */                                   // 0x00162810: bnezl $v0, 0x162844
    *(uint8_t*)((s0) + 0x70) = s1;                              // 0x00162814: sb $s1, 0x70($s0)
    v0 = 1;                                                     // 0x00162818: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x162844;                          // 0x0016281c: bnel $s1, $v0, 0x162844
    *(uint8_t*)((s0) + 0x70) = s1;                              // 0x00162820: sb $s1, 0x70($s0)
    func_00167a30();  // 167a30                                // 0x00162824: jal 0x167a30
    /* nop */                                                   // 0x00162828: nop 
    a0 = 0x23 << 16;                                            // 0x0016282c: lui $a0, 0x23
    if (v0 == 0) goto label_0x162840;                           // 0x00162830: beqz $v0, 0x162840
    a0 = &str_00228c68;  // "E303111: MWSST_Create: worksize is short." // 0x00162834: addiu $a0, $a0, -0x7398
    func_00163410();  // 163410                                // 0x00162838: jal 0x163410
    /* nop */                                                   // 0x0016283c: nop 
label_0x162840:
    *(uint8_t*)((s0) + 0x70) = s1;                              // 0x00162840: sb $s1, 0x70($s0)
label_0x162844:
    return;                                                     // 0x00162850: jr $ra
    sp = sp + 0x20;                                             // 0x00162854: addiu $sp, $sp, 0x20
}