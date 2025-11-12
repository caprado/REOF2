void func_00172e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x00172e60: addiu $sp, $sp, -0x30
    v1 = a0 + 0x9a0;                                            // 0x00172e64: addiu $v1, $a0, 0x9a0
    a1 = -4;                                                    // 0x00172e6c: addiu $a1, $zero, -4
    s0 = *(int32_t*)((v1) + 0x50);                              // 0x00172e7c: lw $s0, 0x50($v1)
    if (s0 == a1) goto label_0x172eb8;                          // 0x00172e80: beq $s0, $a1, 0x172eb8
    s1 = *(int32_t*)((v1) + 0x54);                              // 0x00172e84: lw $s1, 0x54($v1)
    a2 = sp + 4;                                                // 0x00172e88: addiu $a2, $sp, 4
    func_00176060();  // 0x176010                                // 0x00172e8c: jal 0x176010
    v1 = local_0;                                               // 0x00172e98: lw $v1, 0($sp)
    if (v1 < 0) goto label_0x172eb8;                            // 0x00172ea4: bltz $v1, 0x172eb8
    func_0014fef0();  // 0x14fea8                                // 0x00172eac: jal 0x14fea8
    a1 = local_4;                                               // 0x00172eb0: lw $a1, 4($sp)
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00172eb4: sltiu $v0, $v0, 1
label_0x172eb8:
    return;                                                     // 0x00172ec4: jr $ra
    sp = sp + 0x30;                                             // 0x00172ec8: addiu $sp, $sp, 0x30
}