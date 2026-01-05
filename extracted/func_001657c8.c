void func_001657c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    a1 = 0x16 << 16;                                            // 0x001657c8: lui $a1, 0x16
    sp = sp + -0x10;                                            // 0x001657cc: addiu $sp, $sp, -0x10
    a2 = 2;                                                     // 0x001657d0: addiu $a2, $zero, 2
    a1 = a1 + 0x5808;                                           // 0x001657d4: addiu $a1, $a1, 0x5808
    func_00176670();  // 176670                                // 0x001657e0: jal 0x176670
    a1 = 0xf;                                                   // 0x001657f4: addiu $a1, $zero, 0xf
    a2 = 2;                                                     // 0x001657f8: addiu $a2, $zero, 2
    return func_00175170();  // Tail call                        // 0x001657fc: j 0x175120
    sp = sp + 0x10;                                             // 0x00165800: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00165804: nop 
    sp = sp + -0x50;                                            // 0x00165808: addiu $sp, $sp, -0x50
    s3 = s0 + 0xf60;                                            // 0x00165818: addiu $s3, $s0, 0xf60
    s1 = *(int32_t*)((s0) + 0x1b74);                            // 0x00165838: lw $s1, 0x1b74($s0)
    func_00176330();  // 176330                                // 0x0016583c: jal 0x176330
    s2 = *(int32_t*)(s1);                                       // 0x00165840: lw $s2, 0($s1)
    if (v0 == 0) goto label_0x1658a0;                           // 0x00165844: beqz $v0, 0x1658a0
    v1 = 4;                                                     // 0x00165848: addiu $v1, $zero, 4
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0016584c: lw $v0, 0x48($s0)
    if (v0 != v1) goto label_0x165890;                          // 0x00165850: bnel $v0, $v1, 0x165890
    a0 = *(int32_t*)((s1) + 0x24);                              // 0x00165854: lw $a0, 0x24($s1)
    func_001658c8();  // 1658c8                                // 0x00165864: jal 0x1658c8
    a3 = sp + 4;                                                // 0x00165868: addiu $a3, $sp, 4
    a0 = *(int32_t*)((s1) + 0x24);                              // 0x0016586c: lw $a0, 0x24($s1)
    v1 = local_0;                                               // 0x00165870: lw $v1, 0($sp)
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x00165874: slt $v0, $a0, $v1
    /* beqzl $v0, 0x165894 */                                   // 0x00165878: beqzl $v0, 0x165894
    *(uint32_t*)(s4) = a0;                                      // 0x0016587c: sw $a0, 0($s4)
    v0 = local_4;                                               // 0x00165880: lw $v0, 4($sp)
    *(uint32_t*)((s1) + 0x24) = v1;                             // 0x00165888: sw $v1, 0x24($s1)
    *(uint32_t*)((s1) + 0x28) = v0;                             // 0x0016588c: sw $v0, 0x28($s1)
label_0x165890:
    *(uint32_t*)(s4) = a0;                                      // 0x00165890: sw $a0, 0($s4)
    v1 = *(int32_t*)((s1) + 0x28);                              // 0x00165898: lw $v1, 0x28($s1)
    *(uint32_t*)(s5) = v1;                                      // 0x0016589c: sw $v1, 0($s5)
label_0x1658a0:
    return;                                                     // 0x001658bc: jr $ra
    sp = sp + 0x50;                                             // 0x001658c0: addiu $sp, $sp, 0x50
}