void func_00125148() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
label_0x125148:
    sp = sp + -0x30;                                            // 0x00125148: addiu $sp, $sp, -0x30
    a1 = s2 << 1;                                               // 0x00125164: sll $a1, $s2, 1
    a1 = s1 + a1;                                               // 0x0012516c: addu $a1, $s1, $a1
    func_00125148();  // 0x125118                                // 0x00125178: jal 0x125118
    a0 = s0 << 1;                                               // 0x00125180: sll $a0, $s0, 1
    s0 = s0 + s2;                                               // 0x00125184: addu $s0, $s0, $s2
    s0 = s0 << 1;                                               // 0x0012518c: sll $s0, $s0, 1
    a0 = s1 + a0;                                               // 0x00125190: addu $a0, $s1, $a0
    a1 = s1 + s0;                                               // 0x00125194: addu $a1, $s1, $s0
    return func_00125148();  // Tail call                        // 0x001251ac: j 0x125118
    sp = sp + 0x30;                                             // 0x001251b0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x001251b4: nop 
label_0x1251b8:
    sp = sp + -0x10;                                            // 0x001251b8: addiu $sp, $sp, -0x10
    a1 = a1 << 1;                                               // 0x001251bc: sll $a1, $a1, 1
    a1 = a0 + a1;                                               // 0x001251c8: addu $a1, $a0, $a1
    return func_00125148();  // Tail call                        // 0x001251d0: j 0x125118
    sp = sp + 0x10;                                             // 0x001251d4: addiu $sp, $sp, 0x10
    sp = sp + -0x60;                                            // 0x001251d8: addiu $sp, $sp, -0x60
    s6 = s4 + 0x48;                                             // 0x001251f4: addiu $s6, $s4, 0x48
    s1 = *(int32_t*)((s6) + 0x10);                              // 0x0012520c: lw $s1, 0x10($s6)
    s2 = *(int32_t*)((s6) + 0x28);                              // 0x00125210: lw $s2, 0x28($s6)
    /* beqzl $s1, 0x12521c */                                   // 0x00125214: beqzl $s1, 0x12521c
    /* break (trap) */                                          // 0x00125218: break 0, 7
    s2 = s2 + s1;                                               // 0x0012521c: addu $s2, $s2, $s1
    v0 = *(int32_t*)((s4) + 0x44);                              // 0x00125220: lw $v0, 0x44($s4)
    s2 = s2 + -1;                                               // 0x00125224: addiu $s2, $s2, -1
    s7 = *(int32_t*)((s4) + 0x40);                              // 0x00125228: lw $s7, 0x40($s4)
    /* divide: s2 / s1 -> hi:lo */                              // 0x0012522c: div $zero, $s2, $s1
    a0 = *(int32_t*)((s4) + 8);                                 // 0x00125230: lw $a0, 8($s4)
    fp = *(int32_t*)((s6) + 0x14);                              // 0x00125234: lw $fp, 0x14($s6)
    local_0 = v0;                                               // 0x00125238: sw $v0, 0($sp)
    s3 = *(int32_t*)((s6) + 0xc);                               // 0x0012523c: lw $s3, 0xc($s6)
    /* mfhi $s0 */                                              // 0x00125240
    /* mflo $s2 */                                              // 0x00125244
    func_00134d28();  // 0x134d20                                // 0x00125248: jal 0x134d20
    s5 = *(int32_t*)((s6) + 0x20);                              // 0x0012524c: lw $s5, 0x20($s6)
    v1 = *(int32_t*)((s6) + 8);                                 // 0x00125250: lw $v1, 8($s6)
    s0 = s1 - s0;                                               // 0x00125254: subu $s0, $s1, $s0
    s0 = s0 + -1;                                               // 0x00125260: addiu $s0, $s0, -1
    /* beqzl $v1, 0x125270 */                                   // 0x00125268: beqzl $v1, 0x125270
    /* break (trap) */                                          // 0x0012526c: break 0, 7
    a0 = 2;                                                     // 0x00125270: addiu $a0, $zero, 2
    /* divide: s1 / v1 -> hi:lo */                              // 0x00125274: div $zero, $s1, $v1
    v0 = (v0 < s2) ? 1 : 0;                                     // 0x00125278: slt $v0, $v0, $s2
    *(uint32_t*)((s4) + 0x94) = s3;                             // 0x0012527c: sw $s3, 0x94($s4)
    /* mflo $s1 */                                              // 0x00125280
    s0 = s1 - s0;                                               // 0x00125284: subu $s0, $s1, $s0
    if (v0 != 0) s0 = s1;                                       // 0x00125288: movn $s0, $s1, $v0
    s5 = s5 + s0;                                               // 0x0012528c: addu $s5, $s5, $s0
    *(uint32_t*)((s4) + 0x90) = s0;                             // 0x00125290: sw $s0, 0x90($s4)
    v0 = (s5 < s7) ? 1 : 0;                                     // 0x00125294: slt $v0, $s5, $s7
    if (v0 != 0) goto label_0x125328;                           // 0x00125298: bnez $v0, 0x125328
    s5 = s5 - s7;                                               // 0x0012529c: subu $s5, $s5, $s7
    if (v0 != a0) goto label_0x1252e8;                          // 0x001252a4: bne $v0, $a0, 0x1252e8
    a2 = local_0;                                               // 0x001252c0: lw $a2, 0($sp)
    goto label_0x125148;                                        // 0x001252e0: j 0x125148
    sp = sp + 0x60;                                             // 0x001252e4: addiu $sp, $sp, 0x60
label_0x1252e8:
    a2 = local_0;                                               // 0x001252fc: lw $a2, 0($sp)
    goto label_0x1251b8;                                        // 0x0012531c: j 0x1251b8
    sp = sp + 0x60;                                             // 0x00125320: addiu $sp, $sp, 0x60
    /* nop */                                                   // 0x00125324: nop 
label_0x125328:
    return;                                                     // 0x00125350: jr $ra
    sp = sp + 0x60;                                             // 0x00125354: addiu $sp, $sp, 0x60
}