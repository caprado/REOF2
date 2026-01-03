void func_0012e8b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_12, local_4;
    
    sp = sp + -0x70;                                            // 0x0012e8b0: addiu $sp, $sp, -0x70
    t0 = s0 + 0x90;                                             // 0x0012e8c0: addiu $t0, $s0, 0x90
    t1 = s0 + 0xd0;                                             // 0x0012e8c8: addiu $t1, $s0, 0xd0
    local_0 = t0;                                               // 0x0012e8ec: sw $t0, 0($sp)
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x0012e8f0: lw $v0, 0x30($s0)
    v1 = *(int32_t*)((s0) + 0x3c);                              // 0x0012e8f4: lw $v1, 0x3c($s0)
    a2 = *(int32_t*)((s0) + 0x44);                              // 0x0012e8f8: lw $a2, 0x44($s0)
    s1 = v1 - v0;                                               // 0x0012e900: subu $s1, $v1, $v0
    local_4 = t1;                                               // 0x0012e904: sw $t1, 4($sp)
    v0 = (a2 < s1) ? 1 : 0;                                     // 0x0012e908: slt $v0, $a2, $s1
    if (v0 != 0) s1 = a2;                                       // 0x0012e90c: movn $s1, $a2, $v0
    func_0012e258();  // 12e258                                // 0x0012e910: jal 0x12e258
    /* beqzl $v0, 0x12ea44 */                                   // 0x0012e918: beqzl $v0, 0x12ea44
    a2 = *(int32_t*)((s0) + 0x44);                              // 0x0012e920: lw $a2, 0x44($s0)
    v0 = (s1 < a2) ? 1 : 0;                                     // 0x0012e924: slt $v0, $s1, $a2
    if (v0 == 0) goto label_0x12e988;                           // 0x0012e928: beqz $v0, 0x12e988
    v1 = *(int32_t*)((s0) + 0x58);                              // 0x0012e92c: lw $v1, 0x58($s0)
    if (v1 <= 0) goto label_0x12e988;                           // 0x0012e930: blez $v1, 0x12e988
    s4 = s1 << 1;                                               // 0x0012e938: sll $s4, $s1, 1
    v0 = *(int32_t*)(s2);                                       // 0x0012e940: lw $v0, 0($s2)
    /* nop */                                                   // 0x0012e944: nop 
    s2 = s2 + 4;                                                // 0x0012e948: addiu $s2, $s2, 4
    if (v0 == 0) goto label_0x12e96c;                           // 0x0012e94c: beqz $v0, 0x12e96c
    a0 = s4 + v0;                                               // 0x0012e950: addu $a0, $s4, $v0
    a2 = a2 - s1;                                               // 0x0012e954: subu $a2, $a2, $s1
    func_00107c70();  // 107c70                                // 0x0012e95c: jal 0x107c70
    a2 = a2 << 1;                                               // 0x0012e960: sll $a2, $a2, 1
    a2 = *(int32_t*)((s0) + 0x44);                              // 0x0012e964: lw $a2, 0x44($s0)
    v1 = *(int32_t*)((s0) + 0x58);                              // 0x0012e968: lw $v1, 0x58($s0)
label_0x12e96c:
    s3 = s3 + 1;                                                // 0x0012e96c: addiu $s3, $s3, 1
    v0 = (s3 < v1) ? 1 : 0;                                     // 0x0012e970: slt $v0, $s3, $v1
    /* bnezl $v0, 0x12e948 */                                   // 0x0012e974: bnezl $v0, 0x12e948
    v0 = *(int32_t*)(s2);                                       // 0x0012e978: lw $v0, 0($s2)
    goto label_0x12e98c;                                        // 0x0012e97c: b 0x12e98c
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x0012e980: lw $v0, 0x30($s0)
    /* nop */                                                   // 0x0012e984: nop 
label_0x12e988:
    v0 = *(int32_t*)((s0) + 0x30);                              // 0x0012e988: lw $v0, 0x30($s0)
label_0x12e98c:
    v0 = v0 + a2;                                               // 0x0012e990: addu $v0, $v0, $a2
    if (v1 <= 0) goto label_0x12ea3c;                           // 0x0012e994: blez $v1, 0x12ea3c
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x0012e998: sw $v0, 0x30($s0)
    fp = sp + 0x12;                                             // 0x0012e99c: addiu $fp, $sp, 0x12
    s7 = s0 + 0xc;                                              // 0x0012e9a0: addiu $s7, $s0, 0xc
    s6 = s0 + 8;                                                // 0x0012e9a4: addiu $s6, $s0, 8
    s4 = s0 + 0x298;                                            // 0x0012e9a8: addiu $s4, $s0, 0x298
    s3 = s0 + 0x290;                                            // 0x0012e9ac: addiu $s3, $s0, 0x290
    s1 = s0 + 0x80;                                             // 0x0012e9b0: addiu $s1, $s0, 0x80
    s2 = 0x80;                                                  // 0x0012e9b4: addiu $s2, $zero, 0x80
    /* nop */                                                   // 0x0012e9bc: nop 
label_0x12e9c0:
    func_0012e3c8();  // 12e3c8                                // 0x0012e9c0: jal 0x12e3c8
    v1 = *(int32_t*)(s1);                                       // 0x0012e9c8: lw $v1, 0($s1)
    v0 = sp + 0x10;                                             // 0x0012e9cc: addiu $v0, $sp, 0x10
    v0 = *(uint16_t*)((v1) + 0x7c);                             // 0x0012e9dc: lhu $v0, 0x7c($v1)
    s1 = s1 + 4;                                                // 0x0012e9e0: addiu $s1, $s1, 4
    a0 = *(int32_t*)((v1) + 0x88);                              // 0x0012e9e4: lw $a0, 0x88($v1)
    *(uint16_t*)(s3) = v0;                                      // 0x0012e9e8: sh $v0, 0($s3)
    s3 = s3 + 2;                                                // 0x0012e9ec: addiu $s3, $s3, 2
    func_0012deb0();  // 12deb0                                // 0x0012e9f4: jal 0x12deb0
    s4 = s4 + 8;                                                // 0x0012e9f8: addiu $s4, $s4, 8
    a0 = s6 + s2;                                               // 0x0012e9fc: addu $a0, $s6, $s2
    v0 = local_10;                                              // 0x0012ea00: lhu $v0, 0x10($sp)
    a2 = s7 + s2;                                               // 0x0012ea04: addu $a2, $s7, $s2
    v1 = local_12;                                              // 0x0012ea08: lhu $v1, 0x12($sp)
    *(uint16_t*)(a0) = v0;                                      // 0x0012ea10: sh $v0, 0($a0)
    *(uint16_t*)(a2) = v1;                                      // 0x0012ea18: sh $v1, 0($a2)
    s5 = s5 + 1;                                                // 0x0012ea1c: addiu $s5, $s5, 1
    func_0012e628();  // 12e628                                // 0x0012ea20: jal 0x12e628
    s2 = s2 + 2;                                                // 0x0012ea24: addiu $s2, $s2, 2
    v0 = *(int32_t*)((s0) + 0x58);                              // 0x0012ea28: lw $v0, 0x58($s0)
    v0 = (s5 < v0) ? 1 : 0;                                     // 0x0012ea2c: slt $v0, $s5, $v0
    if (v0 != 0) goto label_0x12e9c0;                           // 0x0012ea30: bnez $v0, 0x12e9c0
    a2 = *(int32_t*)((s0) + 0x44);                              // 0x0012ea38: lw $a2, 0x44($s0)
label_0x12ea3c:
    return;                                                     // 0x0012ea68: jr $ra
    sp = sp + 0x70;                                             // 0x0012ea6c: addiu $sp, $sp, 0x70
}