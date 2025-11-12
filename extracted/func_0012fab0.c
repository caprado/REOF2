void func_0012fab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x0012fab0: addiu $sp, $sp, -0x40
    s2 = s1 + 0x2c8;                                            // 0x0012fac4: addiu $s2, $s1, 0x2c8
    s0 = s1 + 4;                                                // 0x0012fad4: addiu $s0, $s1, 4
    goto label_0x12fb18;                                        // 0x0012fadc: b 0x12fb18
    s4 = *(int32_t*)((s1) + 0xc);                               // 0x0012fae0: lw $s4, 0xc($s1)
    /* nop */                                                   // 0x0012fae4: nop 
label_0x12fae8:
    a3 = *(int32_t*)(s0);                                       // 0x0012fae8: lw $a3, 0($s0)
    s0 = s0 + 4;                                                // 0x0012faec: addiu $s0, $s0, 4
    v1 = local_0;                                               // 0x0012faf0: lw $v1, 0($sp)
    s3 = s3 + 1;                                                // 0x0012faf4: addiu $s3, $s3, 1
    t0 = *(int32_t*)(a3);                                       // 0x0012faf8: lw $t0, 0($a3)
    v0 = *(uint16_t*)(v1);                                      // 0x0012fb00: lhu $v0, 0($v1)
    *(uint16_t*)(s2) = v0;                                      // 0x0012fb04: sh $v0, 0($s2)
    *(uint16_t*)((s2) + 4) = v0;                                // 0x0012fb08: sh $v0, 4($s2)
    v0 = *(int32_t*)((t0) + 0x1c);                              // 0x0012fb0c: lw $v0, 0x1c($t0)
    /* call function at address in v0 */                        // 0x0012fb10: jalr $v0
    s2 = s2 + 2;                                                // 0x0012fb14: addiu $s2, $s2, 2
label_0x12fb18:
    v1 = *(int32_t*)((s1) + 0x58);                              // 0x0012fb18: lw $v1, 0x58($s1)
    v0 = (s3 < v1) ? 1 : 0;                                     // 0x0012fb1c: slt $v0, $s3, $v1
    if (v0 == 0) goto label_0x12fb64;                           // 0x0012fb20: beqz $v0, 0x12fb64
    t0 = *(int32_t*)(s0);                                       // 0x0012fb28: lw $t0, 0($s0)
    a1 = 1;                                                     // 0x0012fb2c: addiu $a1, $zero, 1
    a2 = 2;                                                     // 0x0012fb30: addiu $a2, $zero, 2
    v0 = *(int32_t*)(t0);                                       // 0x0012fb34: lw $v0, 0($t0)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x0012fb38: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0012fb3c: jalr $v1
    a1 = 1;                                                     // 0x0012fb44: addiu $a1, $zero, 1
    v0 = local_4;                                               // 0x0012fb48: lw $v0, 4($sp)
    if (v0 != 0) goto label_0x12fae8;                           // 0x0012fb4c: bnez $v0, 0x12fae8
    v1 = *(int32_t*)((s1) + 0x58);                              // 0x0012fb54: lw $v1, 0x58($s1)
    v0 = (s3 < v1) ? 1 : 0;                                     // 0x0012fb58: slt $v0, $s3, $v1
    /* bnezl $v0, 0x12fc00 */                                   // 0x0012fb5c: bnezl $v0, 0x12fc00
label_0x12fb64:
    if (v1 <= 0) goto label_0x12fb9c;                           // 0x0012fb64: blezl $v1, 0x12fb9c
    v1 = s1 + 0x88;                                             // 0x0012fb70: addiu $v1, $s1, 0x88
    a0 = s1 + 0x8c;                                             // 0x0012fb74: addiu $a0, $s1, 0x8c
label_0x12fb78:
    v0 = *(uint16_t*)((v1) + 0x240);                            // 0x0012fb78: lhu $v0, 0x240($v1)
    s3 = s3 + -1;                                               // 0x0012fb7c: addiu $s3, $s3, -1
    *(uint16_t*)(v1) = v0;                                      // 0x0012fb80: sh $v0, 0($v1)
    v1 = v1 + 2;                                                // 0x0012fb84: addiu $v1, $v1, 2
    v0 = *(uint16_t*)((a0) + 0x240);                            // 0x0012fb88: lhu $v0, 0x240($a0)
    *(uint16_t*)(a0) = v0;                                      // 0x0012fb8c: sh $v0, 0($a0)
    if (s3 != 0) goto label_0x12fb78;                           // 0x0012fb90: bnez $s3, 0x12fb78
    a0 = a0 + 2;                                                // 0x0012fb94: addiu $a0, $a0, 2
label_0x12fb9c:
    func_0012f3e0();  // 0x12ed50                                // 0x0012fb9c: jal 0x12ed50
    if (a0 == 0) goto label_0x12fbfc;                           // 0x0012fba8: beqz $a0, 0x12fbfc
    v0 = *(int32_t*)((s1) + 0x2c);                              // 0x0012fbb0: lw $v0, 0x2c($s1)
    v1 = *(int32_t*)((s1) + 0x58);                              // 0x0012fbb4: lw $v1, 0x58($s1)
    v0 = v0 + a0;                                               // 0x0012fbb8: addu $v0, $v0, $a0
    if (v1 <= 0) goto label_0x12fbf4;                           // 0x0012fbbc: blez $v1, 0x12fbf4
    *(uint32_t*)((s1) + 0x2c) = v0;                             // 0x0012fbc0: sw $v0, 0x2c($s1)
    s0 = s1 + 0x80;                                             // 0x0012fbc4: addiu $s0, $s1, 0x80
    a0 = *(int32_t*)(s0);                                       // 0x0012fbc8: lw $a0, 0($s0)
    /* nop */                                                   // 0x0012fbcc: nop 
    s0 = s0 + 4;                                                // 0x0012fbd0: addiu $s0, $s0, 4
    a1 = *(int32_t*)((s1) + 0x64);                              // 0x0012fbd4: lw $a1, 0x64($s1)
    s3 = s3 + 1;                                                // 0x0012fbd8: addiu $s3, $s3, 1
    func_0012e080();  // 0x12e028                                // 0x0012fbdc: jal 0x12e028
    a2 = *(int32_t*)((s1) + 0x5c);                              // 0x0012fbe0: lw $a2, 0x5c($s1)
    v0 = *(int32_t*)((s1) + 0x58);                              // 0x0012fbe4: lw $v0, 0x58($s1)
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x0012fbe8: slt $v0, $s3, $v0
    /* bnezl $v0, 0x12fbd0 */                                   // 0x0012fbec: bnezl $v0, 0x12fbd0
    a0 = *(int32_t*)(s0);                                       // 0x0012fbf0: lw $a0, 0($s0)
label_0x12fbf4:
    v0 = 2;                                                     // 0x0012fbf4: addiu $v0, $zero, 2
    *(uint8_t*)((s1) + 1) = v0;                                 // 0x0012fbf8: sb $v0, 1($s1)
label_0x12fbfc:
    return;                                                     // 0x0012fc14: jr $ra
    sp = sp + 0x40;                                             // 0x0012fc18: addiu $sp, $sp, 0x40
}