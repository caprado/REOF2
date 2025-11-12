void func_001637f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001637f0: addiu $sp, $sp, -0x10
    func_00164400();  // 0x1643e8                                // 0x00163800: jal 0x1643e8
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x00163804: lw $a0, 0x44($s0)
    v1 = 2;                                                     // 0x00163808: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x163820;                          // 0x0016380c: bnel $v0, $v1, 0x163820
    a0 = *(int32_t*)((s0) + 0x128);                             // 0x00163810: lw $a0, 0x128($s0)
    goto label_0x16389c;                                        // 0x00163814: b 0x16389c
    v0 = -1;                                                    // 0x00163818: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0016381c: nop 
label_0x163820:
    /* beqzl $a0, 0x16383c */                                   // 0x00163820: beqzl $a0, 0x16383c
    a1 = *(int32_t*)((s0) + 0x110);                             // 0x00163824: lw $a1, 0x110($s0)
    v1 = str_00228d50;  // "E99072102 mwlSfdExecDecSvrPlaying: can't term" // 0x00163828: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x0016382c: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x00163830: jalr $v0
    /* nop */                                                   // 0x00163834: nop 
    a1 = *(int32_t*)((s0) + 0x110);                             // 0x00163838: lw $a1, 0x110($s0)
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x0016383c: lw $a0, 0x44($s0)
    a2 = *(int32_t*)((s0) + 0x11c);                             // 0x00163840: lw $a2, 0x11c($s0)
    a3 = *(int32_t*)((s0) + 0x120);                             // 0x00163844: lw $a3, 0x120($s0)
    func_00164380();  // 0x164308                                // 0x00163848: jal 0x164308
    t0 = *(int32_t*)((s0) + 0x124);                             // 0x0016384c: lw $t0, 0x124($s0)
    func_001643c0();  // 0x164380                                // 0x00163850: jal 0x164380
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x00163854: lw $a0, 0x44($s0)
    v1 = -1;                                                    // 0x00163858: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x163890;                          // 0x0016385c: bne $v0, $v1, 0x163890
    v0 = 4;                                                     // 0x00163864: addiu $v0, $zero, 4
    a0 = -0x66;                                                 // 0x00163868: addiu $a0, $zero, -0x66
    func_0015e7e0();  // 0x15e7b0                                // 0x0016386c: jal 0x15e7b0
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00163870: sw $v0, 8($s0)
    a0 = 0x23 << 16;                                            // 0x00163874: lui $a0, 0x23
    a1 = *(int32_t*)((s0) + 0x110);                             // 0x00163878: lw $a1, 0x110($s0)
    func_001634a8();  // 0x163410                                // 0x0016387c: jal 0x163410
    a0 = &str_00228d50;  // "E99072102 mwlSfdExecDecSvrPlaying: can't term" // 0x00163880: addiu $a0, $a0, -0x72b0
    *(uint32_t*)((s0) + 0x118) = 0;                             // 0x00163884: sw $zero, 0x118($s0)
    goto label_0x16389c;                                        // 0x00163888: b 0x16389c
    v0 = -1;                                                    // 0x0016388c: addiu $v0, $zero, -1
label_0x163890:
    func_0015bd38();  // 0x15bc68                                // 0x00163890: jal 0x15bc68
    /* nop */                                                   // 0x00163894: nop 
    v0 = 1;                                                     // 0x00163898: addiu $v0, $zero, 1
label_0x16389c:
    return;                                                     // 0x001638a4: jr $ra
    sp = sp + 0x10;                                             // 0x001638a8: addiu $sp, $sp, 0x10
}