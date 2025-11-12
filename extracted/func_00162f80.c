void func_00162f80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00162f80: addiu $sp, $sp, -0x30
    s0 = a0 + 0x1ec;                                            // 0x00162f88: addiu $s0, $a0, 0x1ec
    func_00163100();  // 0x1630e0                                // 0x00162f9c: jal 0x1630e0
    s3 = *(int32_t*)((a0) + 0x40);                              // 0x00162fa0: lw $s3, 0x40($a0)
    s2 = *(int32_t*)((s0) + 0x14);                              // 0x00162fa8: lw $s2, 0x14($s0)
    s1 = *(int32_t*)((s0) + 0xc);                               // 0x00162fac: lw $s1, 0xc($s0)
    func_00163140();  // 0x163100                                // 0x00162fb0: jal 0x163100
    s0 = *(int32_t*)((s0) + 0x10);                              // 0x00162fb4: lw $s0, 0x10($s0)
    v1 = 1;                                                     // 0x00162fb8: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x163018;                          // 0x00162fbc: bnel $v0, $v1, 0x163018
    /* beqzl $s2, 0x162fd8 */                                   // 0x00162fc4: beqzl $s2, 0x162fd8
    v1 = *(int32_t*)(s1);                                       // 0x00162fc8: lw $v1, 0($s1)
    func_00162c60();  // 0x162c08                                // 0x00162fcc: jal 0x162c08
    v1 = *(int32_t*)(s1);                                       // 0x00162fd4: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x00162fd8: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x00162fdc: jalr $v0
    a1 = s0 + 0xc0;                                             // 0x00162fe8: addiu $a1, $s0, 0xc0
    return func_00169d60();  // Tail call                        // 0x0016300c: j 0x169cb0
    sp = sp + 0x30;                                             // 0x00163010: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00163014: nop 
label_0x163018:
    return;                                                     // 0x00163028: jr $ra
    sp = sp + 0x30;                                             // 0x0016302c: addiu $sp, $sp, 0x30
}