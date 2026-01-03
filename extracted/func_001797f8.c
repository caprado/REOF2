void func_001797f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001797f8: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00179814: lw $v0, 4($s0)
    func_00178f58();  // 178f58                                // 0x00179818: jal 0x178f58
    s1 = v0 + 0xb0;                                             // 0x0017981c: addiu $s1, $v0, 0xb0
    /* beqzl $v0, 0x179848 */                                   // 0x00179820: beqzl $v0, 0x179848
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x00179828: lw $v1, 0xc($s0)
    v1 = (v1 < 0x6e) ? 1 : 0;                                   // 0x0017982c: slti $v1, $v1, 0x6e
    if (v1 != 0) goto label_0x179844;                           // 0x00179830: bnez $v1, 0x179844
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00179838: lw $v1, 4($s1)
    v0 = 1;                                                     // 0x0017983c: addiu $v0, $zero, 1
    *(uint32_t*)(s2) = v1;                                      // 0x00179840: sw $v1, 0($s2)
label_0x179844:
    return;                                                     // 0x00179854: jr $ra
    sp = sp + 0x20;                                             // 0x00179858: addiu $sp, $sp, 0x20
}