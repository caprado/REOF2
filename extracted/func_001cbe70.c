void func_001cbe70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_3f;
    
    sp = sp + -0x40;                                            // 0x001cbe70: addiu $sp, $sp, -0x40
    a1 = sp + 0x3f;                                             // 0x001cbe78: addiu $a1, $sp, 0x3f
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cbe7c: addu.qb $zero, $sp, $s1
    a0 = s1 + 0x28;                                             // 0x001cbe88: addiu $a0, $s1, 0x28
    func_001cfaa0();  // 1cfaa0                                // 0x001cbe90: jal 0x1cfaa0
    v1 = 4;                                                     // 0x001cbe98: addiu $v1, $zero, 4
    if (v0 == v1) goto label_0x1cbed4;                          // 0x001cbe9c: beq $v0, $v1, 0x1cbed4
    /* nop */                                                   // 0x001cbea0: nop 
    v1 = 1;                                                     // 0x001cbea4: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1cbecc;                          // 0x001cbea8: beq $v0, $v1, 0x1cbecc
    /* nop */                                                   // 0x001cbeac: nop 
    v1 = 0x20;                                                  // 0x001cbeb0: addiu $v1, $zero, 0x20
    if (v0 == v1) goto label_0x1cbec4;                          // 0x001cbeb4: beq $v0, $v1, 0x1cbec4
    /* nop */                                                   // 0x001cbeb8: nop 
    goto label_0x1cbee0;                                        // 0x001cbebc: b 0x1cbee0
    /* nop */                                                   // 0x001cbec0: nop 
label_0x1cbec4:
    goto label_0x1cbee0;                                        // 0x001cbec4: b 0x1cbee0
    s0 = 0x40;                                                  // 0x001cbec8: addiu $s0, $zero, 0x40
label_0x1cbecc:
    goto label_0x1cbee0;                                        // 0x001cbecc: b 0x1cbee0
label_0x1cbed4:
    v0 = local_3f;                                              // 0x001cbed4: lbu $v0, 0x3f($sp)
    *(uint8_t*)((s1) + 0x1ce) = v0;                             // 0x001cbedc: sb $v0, 0x1ce($s1)
label_0x1cbee0:
    if (s0 != 0) goto label_0x1cbefc;                           // 0x001cbee0: bnez $s0, 0x1cbefc
    func_001cfd70();  // 1cfd70                                // 0x001cbee8: jal 0x1cfd70
    /* nop */                                                   // 0x001cbeec: nop 
    if (v0 == 0) goto label_0x1cbefc;                           // 0x001cbef0: beqz $v0, 0x1cbefc
    /* nop */                                                   // 0x001cbef4: nop 
    s0 = 0x80;                                                  // 0x001cbef8: addiu $s0, $zero, 0x80
label_0x1cbefc:
    v1 = *(uint16_t*)((s1) + 0x1e0);                            // 0x001cbefc: lhu $v1, 0x1e0($s1)
    v0 = *(uint16_t*)((s1) + 0x1e8);                            // 0x001cbf00: lhu $v0, 0x1e8($s1)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001cbf04: slt $at, $v0, $v1
    if (at == 0) goto label_0x1cbf1c;                           // 0x001cbf08: beqz $at, 0x1cbf1c
    *(uint16_t*)((s1) + 0x1e0) = 0;                             // 0x001cbf10: sh $zero, 0x1e0($s1)
    s0 = 0x40;                                                  // 0x001cbf14: addiu $s0, $zero, 0x40
label_0x1cbf1c:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cbf20: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cbf24: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cbf28: jr $ra
    sp = sp + 0x40;                                             // 0x001cbf2c: addiu $sp, $sp, 0x40
}