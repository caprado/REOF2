void func_00104f08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00104f08: addiu $sp, $sp, -0x30
    s4 = 0x1f << 16;                                            // 0x00104f10: lui $s4, 0x1f
    v0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00104f28: lw $v0, -0x210($s4)
    s2 = g_001f0148;  // Global at 0x001f0148                   // 0x00104f2c: lw $s2, 0x148($v0)
    if (s2 == 0) goto label_0x104f78;                           // 0x00104f30: beqz $s2, 0x104f78
    s0 = *(int32_t*)((s2) + 4);                                 // 0x00104f38: lw $s0, 4($s2)
    /* nop */                                                   // 0x00104f3c: nop 
    s0 = s0 + -1;                                               // 0x00104f40: addiu $s0, $s0, -1
    if (s0 < 0) goto label_0x104f6c;                            // 0x00104f44: bltz $s0, 0x104f6c
    v1 = s2 + 8;                                                // 0x00104f48: addiu $v1, $s2, 8
    v0 = s0 << 2;                                               // 0x00104f4c: sll $v0, $s0, 2
    s1 = v0 + v1;                                               // 0x00104f50: addu $s1, $v0, $v1
    v0 = *(int32_t*)(s1);                                       // 0x00104f54: lw $v0, 0($s1)
label_0x104f58:
    s1 = s1 + -4;                                               // 0x00104f58: addiu $s1, $s1, -4
    /* call function at address in v0 */                        // 0x00104f5c: jalr $v0
    s0 = s0 + -1;                                               // 0x00104f60: addiu $s0, $s0, -1
    if (s0 >= 0) goto label_0x104f58;                           // 0x00104f64: bgezl $s0, 0x104f58
    v0 = *(int32_t*)(s1);                                       // 0x00104f68: lw $v0, 0($s1)
label_0x104f6c:
    s2 = *(int32_t*)(s2);                                       // 0x00104f6c: lw $s2, 0($s2)
    /* bnezl $s2, 0x104f40 */                                   // 0x00104f70: bnezl $s2, 0x104f40
    s0 = *(int32_t*)((s2) + 4);                                 // 0x00104f74: lw $s0, 4($s2)
label_0x104f78:
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00104f78: lw $a0, -0x210($s4)
    v0 = *(int32_t*)((a0) + 0x3c);                              // 0x00104f7c: lw $v0, 0x3c($a0)
    /* beqzl $v0, 0x104f94 */                                   // 0x00104f80: beqzl $v0, 0x104f94
    /* call function at address in v0 */                        // 0x00104f88: jalr $v0
    /* nop */                                                   // 0x00104f8c: nop 
    return func_00100218();  // Tail call                       // 0x00104fac: j 0x100218
    sp = sp + 0x30;                                             // 0x00104fb0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00104fb4: nop 
    sp = sp + -0x20;                                            // 0x00104fb8: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x1050a4;                           // 0x00104fcc: beqz $s0, 0x1050a4
    v1 = *(int32_t*)((s0) + 0x54);                              // 0x00104fd4: lw $v1, 0x54($s0)
    /* bnezl $v1, 0x104ff0 */                                   // 0x00104fd8: bnezl $v1, 0x104ff0
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x00104fdc: lw $v0, 0x38($v1)
    v0 = 0x1f << 16;                                            // 0x00104fe0: lui $v0, 0x1f
    v1 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00104fe4: lw $v1, -0x210($v0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x00104fe8: sw $v1, 0x54($s0)
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x00104fec: lw $v0, 0x38($v1)
    /* bnezl $v0, 0x105004 */                                   // 0x00104ff0: bnezl $v0, 0x105004
    v1 = *(int16_t*)((s0) + 0xc);                               // 0x00104ff4: lh $v1, 0xc($s0)
    func_00105518();  // 105518                                // 0x00104ff8: jal 0x105518
    v1 = *(int16_t*)((s0) + 0xc);                               // 0x00105000: lh $v1, 0xc($s0)
    if (v1 == 0) goto label_0x1050a4;                           // 0x00105008: beqz $v1, 0x1050a4
    a0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010500c: lhu $a0, 0xc($s0)
    v0 = a0 & 8;                                                // 0x00105010: andi $v0, $a0, 8
    if (v0 == 0) goto label_0x105028;                           // 0x00105014: beqz $v0, 0x105028
    func_001050b8();  // 1050b8                                // 0x0010501c: jal 0x1050b8
label_0x105028:
    v0 = *(int32_t*)((s0) + 0x2c);                              // 0x00105028: lw $v0, 0x2c($s0)
    /* beqzl $v0, 0x10504c */                                   // 0x0010502c: beqzl $v0, 0x10504c
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00105030: lhu $v0, 0xc($s0)
    /* call function at address in v0 */                        // 0x00105034: jalr $v0
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00105038: lw $a0, 0x1c($s0)
    v1 = -1;                                                    // 0x0010503c: addiu $v1, $zero, -1
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x00105040: slti $v0, $v0, 0
    if (v0 != 0) s1 = v1;                                       // 0x00105044: movn $s1, $v1, $v0
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x00105048: lhu $v0, 0xc($s0)
    v0 = v0 & 0x80;                                             // 0x0010504c: andi $v0, $v0, 0x80
    /* beqzl $v0, 0x105068 */                                   // 0x00105050: beqzl $v0, 0x105068
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x00105054: lw $a1, 0x30($s0)
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x00105058: lw $a0, 0x54($s0)
    func_001058e0();  // 1058e0                                // 0x0010505c: jal 0x1058e0
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x00105060: lw $a1, 0x10($s0)
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x00105064: lw $a1, 0x30($s0)
    if (a1 == 0) goto label_0x105084;                           // 0x00105068: beqz $a1, 0x105084
    v0 = s0 + 0x40;                                             // 0x0010506c: addiu $v0, $s0, 0x40
    if (a1 == v0) goto label_0x105084;                          // 0x00105070: beql $a1, $v0, 0x105084
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x00105074: sw $zero, 0x30($s0)
    func_001058e0();  // 1058e0                                // 0x00105078: jal 0x1058e0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010507c: lw $a0, 0x54($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x00105080: sw $zero, 0x30($s0)
label_0x105084:
    a1 = *(int32_t*)((s0) + 0x44);                              // 0x00105084: lw $a1, 0x44($s0)
    /* beqzl $a1, 0x1050a0 */                                   // 0x00105088: beqzl $a1, 0x1050a0
    *(uint16_t*)((s0) + 0xc) = 0;                               // 0x0010508c: sh $zero, 0xc($s0)
    func_001058e0();  // 1058e0                                // 0x00105090: jal 0x1058e0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x00105094: lw $a0, 0x54($s0)
    *(uint32_t*)((s0) + 0x44) = 0;                              // 0x00105098: sw $zero, 0x44($s0)
    *(uint16_t*)((s0) + 0xc) = 0;                               // 0x0010509c: sh $zero, 0xc($s0)
label_0x1050a4:
    return;                                                     // 0x001050b0: jr $ra
    sp = sp + 0x20;                                             // 0x001050b4: addiu $sp, $sp, 0x20
}