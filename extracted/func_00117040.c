void func_00117040() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00117040: addiu $sp, $sp, -0x40
    v0 = 0x8000 << 16;                                          // 0x00117044: lui $v0, 0x8000
    v0 = v0 | 0xa;                                              // 0x0011704c: ori $v0, $v0, 0xa
    v1 = *(int32_t*)((s2) + 0x20);                              // 0x00117060: lw $v1, 0x20($s2)
    if (v1 == v0) goto label_0x11708c;                          // 0x00117064: beq $v1, $v0, 0x11708c
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x00117068: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x1170d4;                           // 0x0011706c: bnez $v0, 0x1170d4
    s1 = *(int32_t*)((s2) + 0x1c);                              // 0x00117070: lw $s1, 0x1c($s2)
    v0 = 0x8000 << 16;                                          // 0x00117074: lui $v0, 0x8000
    v0 = v0 | 9;                                                // 0x00117078: ori $v0, $v0, 9
    if (v1 == v0) goto label_0x1170c4;                          // 0x0011707c: beq $v1, $v0, 0x1170c4
    /* nop */                                                   // 0x00117080: nop 
    goto label_0x1170d8;                                        // 0x00117084: b 0x1170d8
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00117088: lw $a0, 8($s1)
label_0x11708c:
    s1 = *(int32_t*)((s2) + 0x1c);                              // 0x0011708c: lw $s1, 0x1c($s2)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x00117090: lw $v0, 0x1c($s1)
    /* beqzl $v0, 0x1170d8 */                                   // 0x00117094: beqzl $v0, 0x1170d8
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00117098: lw $a0, 8($s1)
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0011709c: lw $v0, 0x18($s1)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x001170a8: lw $v0, 0x1c($s1)
    /* call function at address in v0 */                        // 0x001170ac: jalr $v0
    a0 = *(int32_t*)((s1) + 0x20);                              // 0x001170b0: lw $a0, 0x20($s1)
    goto label_0x1170d4;                                        // 0x001170bc: b 0x1170d4
    s1 = *(int32_t*)((s2) + 0x1c);                              // 0x001170c0: lw $s1, 0x1c($s2)
label_0x1170c4:
    v0 = *(int32_t*)((s2) + 0x24);                              // 0x001170c4: lw $v0, 0x24($s2)
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001170c8: sw $v0, 0x24($s1)
    v1 = *(int32_t*)((s2) + 0x28);                              // 0x001170cc: lw $v1, 0x28($s2)
    *(uint32_t*)((s1) + 0x14) = v1;                             // 0x001170d0: sw $v1, 0x14($s1)
label_0x1170d4:
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001170d4: lw $a0, 8($s1)
label_0x1170d8:
    if (a0 < 0) goto label_0x1170e8;                            // 0x001170d8: bltz $a0, 0x1170e8
    /* nop */                                                   // 0x001170dc: nop 
    WaitSema();  // 0x114310                                    // 0x001170e0: jal 0x114310
    /* nop */                                                   // 0x001170e4: nop 
label_0x1170e8:
    func_00116fb0();  // 116fb0                                // 0x001170e8: jal 0x116fb0
    a0 = *(int32_t*)(s1);                                       // 0x001170ec: lw $a0, 0($s1)
    *(uint32_t*)(s1) = 0;                                       // 0x001170f0: sw $zero, 0($s1)
    return;                                                     // 0x00117104: jr $ra
    sp = sp + 0x40;                                             // 0x00117108: addiu $sp, $sp, 0x40
}