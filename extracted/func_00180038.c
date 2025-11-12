void func_00180038() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8, local_c;
    
    sp = sp + -0x70;                                            // 0x00180038: addiu $sp, $sp, -0x70
    v0 = s1 & 0x3f;                                             // 0x00180050: andi $v0, $s1, 0x3f
    if (v0 == 0) goto label_0x180070;                           // 0x00180054: beqz $v0, 0x180070
    a0 = 0x23 << 16;                                            // 0x0018005c: lui $a0, 0x23
    func_00116598();  // 0x116508                                // 0x00180060: jal 0x116508
    a0 = &str_00229e20;  // "ERROR"                             // 0x00180064: addiu $a0, $a0, -0x61e0
    goto label_0x180128;                                        // 0x00180068: b 0x180128
    v0 = -1;                                                    // 0x0018006c: addiu $v0, $zero, -1
label_0x180070:
    /* beqzl $a2, 0x1800c0 */                                   // 0x00180070: beqzl $a2, 0x1800c0
    local_0 = 0;                                                // 0x00180074: sw $zero, 0($sp)
    v0 = *(int32_t*)(a2);                                       // 0x00180078: lw $v0, 0($a2)
    v1 = *(int32_t*)((a2) + 4);                                 // 0x0018007c: lw $v1, 4($a2)
    a0 = *(int32_t*)((a2) + 8);                                 // 0x00180080: lw $a0, 8($a2)
    a1 = *(int32_t*)((a2) + 0xc);                               // 0x00180084: lw $a1, 0xc($a2)
    local_0 = v0;                                               // 0x00180088: sw $v0, 0($sp)
    local_8 = v1;                                               // 0x0018008c: sw $v1, 8($sp)
    local_c = a0;                                               // 0x00180090: sw $a0, 0xc($sp)
    local_10 = a1;                                              // 0x00180094: sw $a1, 0x10($sp)
    goto label_0x1800d4;                                        // 0x001800b8: b 0x1800d4
    v0 = local_0;                                               // 0x001800bc: lw $v0, 0($sp)
    local_8 = 0;                                                // 0x001800c0: sw $zero, 8($sp)
    local_c = 0;                                                // 0x001800c4: sw $zero, 0xc($sp)
    local_10 = 0;                                               // 0x001800c8: sw $zero, 0x10($sp)
    local_14 = 0;                                               // 0x001800cc: sb $zero, 0x14($sp)
    v0 = local_0;                                               // 0x001800d0: lw $v0, 0($sp)
label_0x1800d4:
    s2 = 1;                                                     // 0x001800d4: addiu $s2, $zero, 1
    local_4 = s2;                                               // 0x001800d8: sw $s2, 4($sp)
    v0 = v0 | 1;                                                // 0x001800e0: ori $v0, $v0, 1
    local_0 = v0;                                               // 0x001800e8: sw $v0, 0($sp)
    func_00188bf8();  // 0x188b20                                // 0x001800ec: jal 0x188b20
    a2 = s1 + 0x80;                                             // 0x001800f0: addiu $a2, $s1, 0x80
    if (s0 < 0) goto label_0x180128;                            // 0x001800f8: bltz $s0, 0x180128
    v1 = 0x26 << 16;                                            // 0x001800fc: lui $v1, 0x26
    v0 = 0x334;                                                 // 0x00180100: addiu $v0, $zero, 0x334
    /* multiply: s0 * v0 -> hi:lo */                            // 0x00180104: mult $ac2, $s0, $v0
    v1 = v1 + 0x7908;                                           // 0x00180108: addiu $v1, $v1, 0x7908
    a1 = v1 + v0;                                               // 0x00180110: addu $a1, $v1, $v0
    v0 = v0 + v1;                                               // 0x00180114: addu $v0, $v0, $v1
    *(uint32_t*)((a1) + 0x10) = s1;                             // 0x00180118: sw $s1, 0x10($a1)
    func_001805d8();  // 0x180560                                // 0x0018011c: jal 0x180560
    *(uint32_t*)(v0) = s2;                                      // 0x00180120: sw $s2, 0($v0)
label_0x180128:
    return;                                                     // 0x00180138: jr $ra
    sp = sp + 0x70;                                             // 0x0018013c: addiu $sp, $sp, 0x70
}