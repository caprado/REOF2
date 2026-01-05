void func_001639b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001639b0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0x44);                              // 0x001639c0: lw $v0, 0x44($s0)
    if (v0 == 0) goto label_0x1639e0;                           // 0x001639c4: beqz $v0, 0x1639e0
    func_001641d0();  // 1641d0                                // 0x001639cc: jal 0x1641d0
    /* nop */                                                   // 0x001639d0: nop 
    if (v0 == 0) goto label_0x1639e0;                           // 0x001639d4: beqz $v0, 0x1639e0
    v0 = 4;                                                     // 0x001639d8: addiu $v0, $zero, 4
    *(uint32_t*)((s0) + 8) = v0;                                // 0x001639dc: sw $v0, 8($s0)
label_0x1639e0:
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x001639e0: lw $a0, 0x4c($s0)
    /* beqzl $a0, 0x163a0c */                                   // 0x001639e4: beqzl $a0, 0x163a0c
    func_00162730();  // 162730                                // 0x001639ec: jal 0x162730
    /* nop */                                                   // 0x001639f0: nop 
    v1 = 1;                                                     // 0x001639f4: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x163a0c;                          // 0x001639f8: bnel $v0, $v1, 0x163a0c
    v0 = 4;                                                     // 0x00163a00: addiu $v0, $zero, 4
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00163a04: sw $v0, 8($s0)
label_0x163a0c:
    return;                                                     // 0x00163a10: jr $ra
    sp = sp + 0x10;                                             // 0x00163a14: addiu $sp, $sp, 0x10
}